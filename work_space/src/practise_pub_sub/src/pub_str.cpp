#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class talker : public rclcpp::Node {
    public:
        talker() : Node("talker") {
            this->pub_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);
            this->time = this->create_wall_timer(500ms, std::bind(&talker::call_back, this));
        }
    private: 
        void call_back() {
            auto message = std_msgs::msg::String();
            message.data = "hello Ziad this message number: " + std::to_string(this->count++);
            this->pub_->publish(message);
            RCLCPP_INFO(this->get_logger(), "%s", message.data.c_str());
        }
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
        rclcpp::TimerBase::SharedPtr time;
        int count;
};


int main (int argc, char* argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<talker>());
    rclcpp::shutdown();
    return 0;
}