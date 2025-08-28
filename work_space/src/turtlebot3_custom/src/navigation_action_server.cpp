/**
 * @file navigation_action_server.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <functional>
#include <memory>
#include <thread>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include "turtlebot3_custom/action/navigate_to_goal.hpp"

class NavigationActionServer : public rclcpp::Node {
public:
    using NavigateToGoal = turtlebot3_custom::action::NavigateToGoal;
    using GoalHandleNavigation = rclcpp_action::ServerGoalHandle<NavigateToGoal>;
    NavigationActionServer() : Node("navigation_action_server") {
        // Action server
        action_server_ = rclcpp_action::create_server<NavigateToGoal>(
            this,
            "navigate_to_goal",
            std::bind(&NavigationActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&NavigationActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&NavigationActionServer::handle_accepted, this, std::placeholders::_1));
        // Publishers and subscribers
        cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10, std::bind(&NavigationActionServer::odom_callback, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Navigation Action Server ready");
    }

private:
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const NavigateToGoal::Goal> goal) {
        RCLCPP_INFO(this->get_logger(), "Received goal request: x=%.2f, y=%.2f",
                    goal->target_pose.position.x, goal->target_pose.position.y);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleNavigation> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleNavigation> goal_handle) {
        // Execute the goal in a separate thread
        std::thread{std::bind(&NavigationActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    void execute(const std::shared_ptr<GoalHandleNavigation> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Executing goal");
        rclcpp::Rate loop_rate(10);
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<NavigateToGoal::Feedback>();
        auto result = std::make_shared<NavigateToGoal::Result>();
        auto start_time = this->now();
        // Simple navigation towards goal
        while (rclcpp::ok()) {
            // Check if goal is canceled
            if (goal_handle->is_canceling()) {
                result->success = false;
                result->message = "Goal was canceled";
                result->final_pose = current_pose_;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "Goal canceled");
                return;
            }
            // Calculate distance to goal
            double dx = goal->target_pose.position.x - current_pose_.position.x;
            double dy = goal->target_pose.position.y - current_pose_.position.y;
            double distance = sqrt(dx * dx + dy * dy); // Update feedback
            feedback->current_pose = current_pose_;
            feedback->distance_remaining = distance;
            feedback->time_elapsed = (this->now() - start_time).seconds();
            goal_handle->publish_feedback(feedback);
            // Check if goal is reached
            if (distance < 0.1) {
                result->success = true;
                result->message = "Goal reached successfully";
                result->final_pose = current_pose_;
                goal_handle->succeed(result);
                RCLCPP_INFO(this->get_logger(), "Goal succeeded");
                return;
            }
            // Simple proportional controller
            auto twist = geometry_msgs::msg::Twist();
            twist.linear.x = std::min(0.2, distance * 0.5);
            twist.angular.z = atan2(dy, dx) - current_yaw_;
            // Normalize angular velocity
            while (twist.angular.z > M_PI)
                twist.angular.z -= 2 * M_PI;
            while (twist.angular.z < -M_PI)
                twist.angular.z += 2 * M_PI;
            twist.angular.z *= 0.5;
            cmd_vel_pub_->publish(twist);
            loop_rate.sleep();
        }
    }
    void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        current_pose_ = msg->pose.pose;
        // Extract yaw from quaternion
        tf2::Quaternion quat;
        tf2::fromMsg(current_pose_.orientation, quat);
        double roll, pitch, yaw;
        tf2::Matrix3x3(quat).getRPY(roll, pitch, yaw);
        current_yaw_ = yaw;
    }
    rclcpp_action::Server<NavigateToGoal>::SharedPtr action_server_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    geometry_msgs::msg::Pose current_pose_;
    double current_yaw_ = 0.0;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NavigationActionServer>());
    rclcpp::shutdown();
    return 0;
}