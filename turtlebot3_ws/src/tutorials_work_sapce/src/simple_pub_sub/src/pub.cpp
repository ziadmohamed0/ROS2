#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

using namespace std::chrono_literals;

class talker : public rclcpp::Node{
    public: 
        talker() : Node("publisher") {
            this->pub_ = this->create_publisher<std_msgs::msg::String>("simple_node", 10);
            auto callback = [this] () -> void {
                auto message = std_msgs::msg::String();
                message.data = "hello world " + std::to_string(this->count++);
                RCLCPP_INFO(this->get_logger(), "%s", message.data.c_str());
                this->pub_->publish(message);
            };
            this->time_ = this->create_wall_timer(10ms, callback);
        }
    private:
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
        rclcpp::TimerBase::SharedPtr time_;
        int count{0};
};

int main (int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<talker>());
    rclcpp::shutdown();
    return 0;
}