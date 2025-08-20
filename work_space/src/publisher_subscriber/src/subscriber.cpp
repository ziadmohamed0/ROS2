/**
 * @file subscriber.cpp
 * @author Ziad Mohammed Fathy
 * @brief simple subscriber
 * @version 0.1
 * @date 2025-08-20
 */

 #include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class subscriber : public rclcpp::Node {
    public:
        subscriber() : Node("heared") {
            this->sub = this->create_subscription<std_msgs::msg::String>("chatter", 10 , std::bind(&subscriber::callBack, this, std::placeholders::_1));
        }
    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;
        void callBack(const std_msgs::msg::String::SharedPtr msg) {
            RCLCPP_INFO(this->get_logger(), "i heared: %s", msg->data.c_str());
        }
};

int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<subscriber>());
    rclcpp::shutdown();
    return 0;
}