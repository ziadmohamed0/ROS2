/**
 * @file robot_status_server.cpp
 * @author Ziad Moahmmed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-08-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <sensor_msgs/msg/battery_state.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include "turtlebot3_custom/srv/get_robot_status.hpp"

class RobotStatusServer : public rclcpp::Node {
    public:
        RobotStatusServer() : Node("robot_status_server") {
            this->status_srv_ = this->create_service<turtlebot3_custom::srv::GetRobotStatus>(
                "get_robot_status",
                std::bind(
                    &RobotStatusServer::handle_status_request,
                    this,
                    std::placeholders::_1,
                    std::placeholders::_2
                )
            );

            this->odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
                "/odom", 
                10, 
                std::bind(
                    &RobotStatusServer::odom_callback,
                    this,
                    std::placeholders::_1
                )
            );
            
            this->battery_sub_ = this->create_subscription<sensor_msgs::msg::BatteryState>(
                "/battery_state", 
                10, 
                std::bind(
                    &RobotStatusServer::battery_callback,
                    this,
                    std::placeholders::_1
                )
            );

            RCLCPP_INFO(this->get_logger(), "Robot Status Server ready");
        }
    private:
        void handle_status_request(std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus::Request> request, 
                                    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus::Response> response) {
            RCLCPP_INFO(this->get_logger(), "Received status request: %s", request->query_type.c_str());
            response->success = true;
            response->current_pose = this->current_pose_;
            response->battery_info = this->battery_state_;

            if(request->query_type == "position") { 
                response->status_message = "Current position: x=" + std::to_string(current_pose_.position.x) + ", y=" + std::to_string(this->current_pose_.position.y);
            }

            else if(request->query_type == "battery") {
                response->status_message = "Battery level: " + std::to_string(battery_state_.percentage * 100) + "%";
            }

            else {
                response->status_message = "Robot is operational. Position and battery data available.";
            }
        }    

        void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
            this->current_pose_ = msg->pose.pose;
        }

        void battery_callback(const sensor_msgs::msg::BatteryState::SharedPtr msg) {
            this->battery_state_ = *msg;
        }
        
        rclcpp::Service<turtlebot3_custom::srv::GetRobotStatus>::SharedPtr status_srv_;
        rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
        
        geometry_msgs::msg::Pose current_pose_;
        sensor_msgs::msg::BatteryState battery_state_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotStatusServer>());
    rclcpp::shutdown();
    return 0;
}