#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int16.hpp"

class talker_int : public rclcpp::Node {
    public:
        talker_int() : Node("talker") {
            this->publisher = this->create_publisher<std_msgs::msg::Int16>("chatter", 10);
            this->time = this->create_wall_timer(std::chrono::seconds(1), std::bind(&talker_int::call_back, this));
            std::srand(std::time(nullptr));
        }
    private:
        rclcpp::Publisher<std_msgs::msg::Int16>::SharedPtr publisher;
        rclcpp::TimerBase::SharedPtr time;
        void call_back(void) {
            auto message = std_msgs::msg::Int16();
            message.data = std::rand() % 100;
            this->publisher->publish(message);
            RCLCPP_INFO(this->get_logger(), "published : %d", message.data);
        }
};


int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<talker_int>());
    rclcpp::shutdown();
    return 0;
}