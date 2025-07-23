#include "rclcpp/rclcpp.hpp"
#include "custom_message/msg/num.hpp"

class Listener : public rclcpp::Node
{
public:
  Listener()
  : Node("listener")
  {
    subscription_ = this->create_subscription<custom_message::msg::Num>(
      "chatter", 10,
      std::bind(&Listener::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const custom_message::msg::Num::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "I heard: [%ld %s]", msg->num, msg->name.c_str());
  }

  rclcpp::Subscription<custom_message::msg::Num>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Listener>());
  rclcpp::shutdown();
  return 0;
}
