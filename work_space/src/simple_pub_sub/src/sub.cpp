/**
 * @file sub.cpp
 * @author Ziad Fathy
 * @brief simple subscriper msg
 * @version 0.1
 * @date 2025-07-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class subscriper : public rclcpp::Node {
    public:
        /**
         * @brief Construct a new subscriper object
         * 
         */
        subscriper() : Node("subscriper") {
            this->subscriper_ = this->create_subscription<std_msgs::msg::String>("chatter", 10, std::bind(&subscriper::callBack, this, std::placeholders::_1));
        }
    private:
        void callBack(const std_msgs::msg::String::SharedPtr msg) { 
            RCLCPP_INFO(this->get_logger(), "I heared: [%s]", msg->data.c_str());
        }
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriper_; // create shared pointer Subscription
};


int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<subscriper>());
    rclcpp::shutdown();
    return 0;
}