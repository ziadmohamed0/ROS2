/**
 * @file turtlebot3_controller.cpp
 * @author Ziad Mohammed Fathy
 * @brief
 * @version 0.1
 * @date 2025-08-29
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <algorithm>
#include <vector>

enum class RobotState
{
    MOVING_FORWARD,
    TURNING_LEFT,
    TURNING_RIGHT,
    OBSTACLE_DETECTED,
    SEARCHING_PATH
};

class TurtleBot3Controller : public rclcpp::Node
{
public:
    TurtleBot3Controller() : Node("turtlebot3_controller")
    {
        cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

        laser_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/scan", 10, std::bind(&TurtleBot3Controller::laser_callback, this, std::placeholders::_1));
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10, std::bind(&TurtleBot3Controller::odom_callback, this, std::placeholders::_1));

        control_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), std::bind(&TurtleBot3Controller::control_loop, this));

        current_state_ = RobotState::MOVING_FORWARD;
        state_start_time_ = this->now();

        RCLCPP_INFO(this->get_logger(), "Enhanced TurtleBot3 Controller Started");
        RCLCPP_INFO(this->get_logger(), "Robot will automatically avoid obstacles by turning");
    }

private:
    void laser_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
    {
        if (msg->ranges.empty())
            return;

        size_t total_readings = msg->ranges.size();
        size_t sector_size = 15;

        front_distance_ = get_min_distance_in_sector(msg, total_readings / 2 - sector_size,
                                                     total_readings / 2 + sector_size);

        left_distance_ = get_min_distance_in_sector(msg, 0, sector_size * 2);

        right_distance_ = get_min_distance_in_sector(msg, total_readings - sector_size * 2, total_readings - 1);

        front_wide_distance_ = get_min_distance_in_sector(msg, total_readings / 2 - sector_size * 2,
                                                          total_readings / 2 + sector_size * 2);

        if (debug_counter_ % 50 == 0)
        {
            RCLCPP_INFO(this->get_logger(),
                        "Distances - Front: %.2f, Left: %.2f, Right: %.2f, State: %s",
                        front_distance_, left_distance_, right_distance_,
                        state_to_string(current_state_).c_str());
        }
        debug_counter_++;
    }

    float get_min_distance_in_sector(const sensor_msgs::msg::LaserScan::SharedPtr &msg,
                                     size_t start_idx, size_t end_idx)
    {
        float min_dist = std::numeric_limits<float>::max();

        for (size_t i = start_idx; i <= end_idx && i < msg->ranges.size(); ++i)
        {
            if (msg->ranges[i] > msg->range_min && msg->ranges[i] < msg->range_max)
            {
                min_dist = std::min(min_dist, msg->ranges[i]);
            }
        }

        return (min_dist == std::numeric_limits<float>::max()) ? 10.0f : min_dist;
    }

    void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        current_pose_ = msg->pose.pose;

        tf2::Quaternion quat;
        tf2::fromMsg(current_pose_.orientation, quat);
        double roll, pitch, yaw;
        tf2::Matrix3x3(quat).getRPY(roll, pitch, yaw);
        current_yaw_ = yaw;
    }

    void control_loop()
    {
        auto twist = geometry_msgs::msg::Twist();
        auto current_time = this->now();
        auto time_in_state = (current_time - state_start_time_).seconds();

        RobotState new_state = determine_next_state(time_in_state);

        if (new_state != current_state_)
        {
            RCLCPP_INFO(this->get_logger(), "State changed: %s -> %s",
                        state_to_string(current_state_).c_str(),
                        state_to_string(new_state).c_str());
            current_state_ = new_state;
            state_start_time_ = current_time;
        }

        execute_state_behavior(twist, time_in_state);

        cmd_vel_pub_->publish(twist);
    }

    RobotState determine_next_state(double time_in_state)
    {
        const float obstacle_threshold = 0.4f;
        const float safe_distance = 0.8f;
        const double max_turn_time = 3.0;

        switch (current_state_)
        {
        case RobotState::MOVING_FORWARD:
            if (front_distance_ < obstacle_threshold || front_wide_distance_ < 0.6f)
            {
                if (left_distance_ > right_distance_)
                {
                    return RobotState::TURNING_LEFT;
                }
                else
                {
                    return RobotState::TURNING_RIGHT;
                }
            }
            return RobotState::MOVING_FORWARD;

        case RobotState::TURNING_LEFT:
            if (time_in_state > max_turn_time)
            {
                return RobotState::TURNING_RIGHT;
            }
            if (front_distance_ > safe_distance && front_wide_distance_ > safe_distance)
            {
                return RobotState::MOVING_FORWARD;
            }
            return RobotState::TURNING_LEFT;

        case RobotState::TURNING_RIGHT:
            if (time_in_state > max_turn_time)
            {
                return RobotState::TURNING_LEFT;
            }
            if (front_distance_ > safe_distance && front_wide_distance_ > safe_distance)
            {
                return RobotState::MOVING_FORWARD;
            }
            return RobotState::TURNING_RIGHT;

        case RobotState::SEARCHING_PATH:
            if (time_in_state < 2.0)
            {
                return RobotState::TURNING_LEFT;
            }
            else if (time_in_state < 4.0)
            {
                return RobotState::TURNING_RIGHT;
            }
            else
            {
                return RobotState::MOVING_FORWARD;
            }

        default:
            return RobotState::MOVING_FORWARD;
        }
    }

    void execute_state_behavior(geometry_msgs::msg::Twist &twist, double time_in_state)
    {
        const float forward_speed = 0.22f;
        const float turn_speed = 0.5f;
        const float slow_turn_speed = 0.3f;

        switch (current_state_)
        {
        case RobotState::MOVING_FORWARD:
            if (front_distance_ > 0.4f)
            {
                twist.linear.x = forward_speed;
                twist.angular.z = 0.0f;
            }
            else
            {
                twist.linear.x = 0.0f;
                twist.angular.z = 0.0f;
            }
            break;

        case RobotState::TURNING_LEFT:
            twist.linear.x = 0.0f;
            twist.angular.z = turn_speed;

            if (time_in_state > 1.0)
            {
                twist.angular.z = slow_turn_speed;
            }
            break;

        case RobotState::TURNING_RIGHT:
            twist.linear.x = 0.0f;
            twist.angular.z = -turn_speed;

            if (time_in_state > 1.0)
            {
                twist.angular.z = -slow_turn_speed;
            }
            break;

        case RobotState::SEARCHING_PATH:
            if (time_in_state < 2.0)
            {
                twist.angular.z = turn_speed * 1.2f;
            }
            else
            {
                twist.angular.z = -turn_speed * 1.2f;
            }
            twist.linear.x = 0.0f;
            break;

        case RobotState::OBSTACLE_DETECTED:
            twist.linear.x = 0.0f;
            twist.angular.z = 0.0f;
            break;
        }

        twist.linear.x = std::clamp(twist.linear.x, static_cast<double>(-0.3), static_cast<double>(0.3));
        twist.angular.z = std::clamp(twist.angular.z, static_cast<double>(-1.0), static_cast<double>(1.0));
    }

    std::string state_to_string(RobotState state)
    {
        switch (state)
        {
        case RobotState::MOVING_FORWARD:
            return "MOVING_FORWARD";
        case RobotState::TURNING_LEFT:
            return "TURNING_LEFT";
        case RobotState::TURNING_RIGHT:
            return "TURNING_RIGHT";
        case RobotState::OBSTACLE_DETECTED:
            return "OBSTACLE_DETECTED";
        case RobotState::SEARCHING_PATH:
            return "SEARCHING_PATH";
        default:
            return "UNKNOWN";
        }
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_sub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::TimerBase::SharedPtr control_timer_;

    float front_distance_ = std::numeric_limits<float>::max();
    float left_distance_ = std::numeric_limits<float>::max();
    float right_distance_ = std::numeric_limits<float>::max();
    float front_wide_distance_ = std::numeric_limits<float>::max();

    geometry_msgs::msg::Pose current_pose_;
    double current_yaw_ = 0.0;

    RobotState current_state_;
    rclcpp::Time state_start_time_;

    int debug_counter_ = 0;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TurtleBot3Controller>());
    rclcpp::shutdown();
    return 0;
}
