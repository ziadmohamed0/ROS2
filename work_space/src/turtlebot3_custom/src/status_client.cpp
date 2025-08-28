/**
 * @file status_client.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <rclcpp/rclcpp.hpp>
#include "turtlebot3_custom/srv/get_robot_status.hpp"

class StatusClient : public rclcpp::Node {
    public:
        StatusClient() : Node("status_client") {
            this->client_ = this->create_client<turtlebot3_custom::srv::GetRobotStatus>("get_robot_status");

            // Wait for service to be available
            while (!this->client_->wait_for_service(std::chrono::seconds(1))) {
                if (!rclcpp::ok()) {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for service");
                    return;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service not available, waiting...");
            }
            send_request();
        }

    private:
        void send_request(void) {
            auto request = std::make_shared<turtlebot3_custom::srv::GetRobotStatus::Request>();
            request->query_type = "general";

            auto result_future = client_->async_send_request(request);

            if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) ==
                rclcpp::FutureReturnCode::SUCCESS) {
                auto response = result_future.get();
                RCLCPP_INFO(this->get_logger(), "Response: %s", response->status_message.c_str());
                RCLCPP_INFO(this->get_logger(), "Success: %s", response->success ? "true" : "false");
            }

            else {
                RCLCPP_ERROR(this->get_logger(), "Failed to call service");
            }
        }

        rclcpp::Client<turtlebot3_custom::srv::GetRobotStatus>::SharedPtr client_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StatusClient>());
    rclcpp::shutdown();
    return 0;
}