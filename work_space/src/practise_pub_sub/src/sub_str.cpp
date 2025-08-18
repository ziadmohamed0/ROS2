#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class lesigner : public rclcpp::Node {
    public:
        lesigner() : Node("lesigner") {
            this->sub_ = this->create_subscription<std_msgs::msg::String>("chatter", 10, std::bind(&lesigner::call_back, this, std::placeholders::_1));
        }
    private:
        void call_back(const std_msgs::msg::String::SharedPtr msg) {
            RCLCPP_INFO(this->get_logger() , "I heared: %s", msg->data.c_str());
        }

        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
};

int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<lesigner>());
    rclcpp::shutdown();
    return 0;
}
