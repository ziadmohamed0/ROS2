#include <iostream>
#include <string>
#include <memory>
#include <chrono>
#include <functional>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

class simpelSubscriber : public rclcpp::Node {
    public:
        simpelSubscriber() : Node("subscriber_node") {
            this->subscriberObject = this->create_subscription<std_msgs::msg::String>("communication_topic"
            , 10, std::bind(&simpelSubscriber::callBackFunction, this, _1));
        }
    private:
        void callBackFunction(const std_msgs::msg::String::SharedPtr msg) const {
            RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
        }

        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriberObject;
};

int main(int agrc, char* argv[]) {
    rclcpp::init(agrc, argv);
    rclcpp::spin(std::make_shared<simpelSubscriber>());
    rclcpp::shutdown();
    return 0;
}