#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <functional>
#include <memory>

class subscriber : public rclcpp::Node {
    public: 
        subscriber() : Node("subscriber") {
            auto callback = [this](const std_msgs::msg::String::UniquePtr msg) -> void {
                RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
            };
            this->sub_ = this->create_subscription<std_msgs::msg::String>("simple_node", 10, callback);
        }
    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
};

int main (int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<subscriber>());
    rclcpp::shutdown();
    return 0;
}