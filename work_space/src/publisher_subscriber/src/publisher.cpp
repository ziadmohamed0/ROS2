/**
 * @file publisher.cpp
 * @author Ziad Mohammed Fathy
 * @brief simple publisher
 * @version 0.1
 * @date 2025-08-20
 */

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class publisher : public rclcpp::Node {
    public:
        publisher() : Node("talker") {
            this->pub = this->create_publisher<std_msgs::msg::String>("chatter", 10);
            this->time = this->create_wall_timer(500ms, std::bind(&publisher::callBack, this));
        }
    private:
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub;
        rclcpp::TimerBase::SharedPtr time;
        int count{0};
        void callBack(void) {
            auto message = std_msgs::msg::String();
            message.data = "Hello number: " + std::to_string(this->count++);
            RCLCPP_INFO(this->get_logger(), "%s", message.data.c_str());
            this->pub->publish(message);
        }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<publisher>());
    rclcpp::shutdown();
    return 0;
}