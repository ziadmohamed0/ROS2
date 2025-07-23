#include "rclcpp/rclcpp.hpp"
#include "custom_message/msg/num.hpp"

using namespace std::chrono_literals;

class Talker : public rclcpp::Node
{
public:
  Talker()
  : Node("talker"), count_(0)
  {
    publisher_ = this->create_publisher<custom_message::msg::Num>("chatter", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&Talker::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = custom_message::msg::Num();
    message.num = 5;
    message.name = "mariam";
    RCLCPP_INFO(this->get_logger(), "Publishing: '%ld %s'", message.num, message.name.c_str());
    publisher_->publish(message);
    count_++;
  }

  rclcpp::Publisher<custom_message::msg::Num>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  int count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Talker>());
  rclcpp::shutdown();
  return 0;
}
