/**
 * @file navigation_client.cpp
 * @author Ziad Mohammed Fathy
 * @brief
 * @version 0.1
 * @date 2025-08-28
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "turtlebot3_custom/action/navigate_to_goal.hpp"

class NavigationActionClient : public rclcpp::Node {
public:
    using NavigateToGoal = turtlebot3_custom::action::NavigateToGoal;
    using GoalHandleNavigation = rclcpp_action::ClientGoalHandle<NavigateToGoal>;
    NavigationActionClient() : Node("navigation_action_client") {
        client_ = rclcpp_action::create_client<NavigateToGoal>(
            this,
            "navigate_to_goal");
        send_goal();
    }
    void send_goal() {
        if (!client_->wait_for_action_server()) {
            RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
            rclcpp::shutdown();
        }
        auto goal_msg = NavigateToGoal::Goal();
        goal_msg.target_pose.position.x = 2.0;
        goal_msg.target_pose.position.y = 1.0;
        goal_msg.target_pose.position.z = 0.0;
        RCLCPP_INFO(this->get_logger(), "Sending goal");
        auto send_goal_options = rclcpp_action::Client<NavigateToGoal>::SendGoalOptions();
        send_goal_options.goal_response_callback =
            std::bind(&NavigationActionClient::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback =
            std::bind(&NavigationActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback =
            std::bind(&NavigationActionClient::result_callback, this, std::placeholders::_1);
        client_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    rclcpp_action::Client<NavigateToGoal>::SharedPtr client_;
    void goal_response_callback(const GoalHandleNavigation::SharedPtr &goal_handle) {
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
        }

        else {
            RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
        }
    }
    void feedback_callback(
        GoalHandleNavigation::SharedPtr,
        const std::shared_ptr<const NavigateToGoal::Feedback> feedback) {
        RCLCPP_INFO(this->get_logger(), "Distance remaining: %.2f", feedback->distance_remaining);
    }
    void result_callback(const GoalHandleNavigation::WrappedResult &result) {
        switch (result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Goal succeeded: %s", result.result->message.c_str());
            break;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
            break;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
            break;
        default:
            RCLCPP_ERROR(this->get_logger(), "Unknown result code");
            break;
        }
        rclcpp::shutdown();
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NavigationActionClient>());
    rclcpp::shutdown();
    return 0;
}