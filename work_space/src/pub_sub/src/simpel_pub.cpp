#include <iostream>
#include <chrono>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class simplePublisher : public rclcpp::Node {
    public:
        simplePublisher() : Node("publisher_node") {
            this->counter_value = 0;
            this->publisherObject = this->create_publisher<std_msgs::msg::String>("communication_topic", 20);
            this->timeObject = this->create_wall_timer(1000ms, std::bind(&simpelPublisher::callBackFunction, this));        
        }
    private:
        void callBackFunction() {
            this->counter_value++;
            auto message = std_msgs::msg::String();
            message.data = "Message Number: " + std::to_string(this->counter_value); 
            RCLCPP_INFO(this->get_logger(), "Publishing message '%s'", message.data.c_str());
            this->publisherObject->publish(message);
        }
        rclcpp::TimerBase::SharedPtr timeObject;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisherObject;
        int counter_value{0};
};