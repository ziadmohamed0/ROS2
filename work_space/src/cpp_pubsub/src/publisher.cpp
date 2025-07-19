#include <iostream>
#include <string>
#include <memory>
#include <chrono>
#include <functional>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class simpelPublisher : public rclcpp::Node {
    public:
        /**
         * @brief Construct a new simpel Publisher object
         * 
         */
        simpelPublisher() : Node("publisher_node") {
            this->counter_value = 0;
            this->publisherObject = this->create_publisher<std_msgs::msg::String>("communication_topic", 20);
            this->timeObject = this->create_wall_timer(1000ms, std::bind(&simpelPublisher::callBackFunction, this));
        }
    private:
        /**
         * @brief call back function 
         * 
         */
        void callBackFunction() {
            this->counter_value++;
            
            auto message = std_msgs::msg::String();
            message.data = "Message Number: " + std::to_string(this->counter_value);
            
            RCLCPP_INFO(this->get_logger(), "Publishing message: '%s'", message.data.c_str());
            this->publisherObject->publish(message);
        }
        int counter_value;
        rclcpp::TimerBase::SharedPtr timeObject;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisherObject;
};

int main(int agrc, char* argv[]) {
    rclcpp::init(agrc, argv);
    rclcpp::spin(std::make_shared<simpelPublisher>());
    rclcpp::shutdown();
    return 0;
}