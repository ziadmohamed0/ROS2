#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <termios.h>
#include <unistd.h>

class Teleop : public rclcpp::Node {
public:
  Teleop() : Node("teleop") {
    pub_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&Teleop::loop, this));
  }

private:
  void loop() {
    char c;
    std::cin >> c;
    auto msg = geometry_msgs::msg::Twist();
    if(c=='w') msg.linear.x = 0.5;
    if(c=='s') msg.linear.x = -0.5;
    if(c=='a') msg.angular.z = 1.0;
    if(c=='d') msg.angular.z = -1.0;
    pub_->publish(msg);
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Teleop>());
  rclcpp::shutdown();
  return 0;
}
