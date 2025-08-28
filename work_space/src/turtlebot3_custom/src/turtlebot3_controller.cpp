/**
 * @file turtlebot3_controller.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-08-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <tf2/LinearMath/Quaternion.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

class TurtleBot3Controller : public rclcpp::Node {
    public:
        TurtleBot3Controller() : Node("turtlebot3_controller") {
            // publisher
                this->cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
                    "/cmd_vel", 
                    10
                );
            
            // Subscribers
                this->laser_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
                    "/scan", 
                    10, 
                    std::bind(
                        &TurtleBot3Controller::laser_callBack,
                        this, 
                        std::placeholders::_1
                    )
                );

                this->odometry_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
                    "/odom", 
                    10, 
                    std::bind(
                        &TurtleBot3Controller::odom_callBack,
                        this,
                        std::placeholders::_1
                    )
                );

            // Timer for control loop 
                this->control_time = this->create_wall_timer(
                    std::chrono::milliseconds(100), 
                    std::bind(
                        &TurtleBot3Controller::control_loop,
                        this
                    )
                );

            // logger
            RCLCPP_INFO(this->get_logger(),"TurtleBot3 Controller Node Started");
        }
    private:
        void laser_callBack(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
            size_t front_index = msg->ranges.size()/2;
            size_t rang = 30;

            this->front_distance_ = std::numeric_limits<float>::max();
            for (size_t i = front_index - rang; i <= front_index + rang; ++i) {
                if (i < msg->ranges.size() && msg->ranges[i] > 0.0) {
                    this->front_distance_ = std::min(this->front_distance_, msg->ranges[i]);
                }
            }
        }

        void odom_callBack(const nav_msgs::msg::Odometry::SharedPtr msg) {
            this->current_pose_ = msg->pose.pose;
            tf2::Quaternion quat;
            tf2::fromMsg(this->current_pose_.orientation, quat);
            double roll, pitch, yaw;
            tf2::Matrix3x3(quat).getRPY(roll, pitch, yaw);
            this->current_yaw_ = yaw;
        }

        void control_loop() {
            auto twist = geometry_msgs::msg::Twist();

            // Simple obstacle avoidance
            if (front_distance_ > 0.5) {
                twist.linear.x = 0.2; // Move forward
                twist.angular.z = 0.0;
            }

            else {
                twist.linear.x = 0.0;
                twist.angular.z = 0.5; // Turn right
            }

            cmd_vel_pub_->publish(twist);
        }

        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_sub_;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odometry_sub_;
        rclcpp::TimerBase::SharedPtr control_time;

        float current_yaw_ = 0.0;
        geometry_msgs::msg::Pose current_pose_;
        float front_distance_ = std::numeric_limits<float>::max();
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TurtleBot3Controller>());
    rclcpp::shutdown();
    return 0;
}