#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int16.hpp"

class sub : public rclcpp::Node {
    public: 
        sub() : Node("lesigner") {
            this->sub_ = this->create_subscription<std_msgs::msg::Int16>("chatter", 10, std::bind(&sub::call_back, this, std::placeholders::_1));
        }
    private:
        rclcpp::Subscription<std_msgs::msg::Int16>::SharedPtr sub_;
        void call_back(const std_msgs::msg::Int16 &msg) {
            std::string type = (msg.data % 2 == 0) ? "even" : "odd";
            RCLCPP_INFO(this->get_logger(), "Received: %d -> %s", msg.data, type.c_str());
        }
};

int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<sub>());
    rclcpp::shutdown();
    return 0;
}