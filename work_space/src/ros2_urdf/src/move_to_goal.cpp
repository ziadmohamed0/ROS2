#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class MoveRobot : public rclcpp::Node
{
public:
    MoveRobot() : Node("move_robot")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("green_robot/cmd_vel", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&MoveRobot::move_to_goal, this));
        count_ = 0;
    }

private:
    void move_to_goal()
    {
        auto msg = geometry_msgs::msg::Twist();
        if (count_ < 10) {
            msg.linear.x = 0.2; // سرعة التحرك للأمام
            msg.angular.z = 0.0; // بدون دوران
        } else if (count_ < 20) {
            msg.linear.x = 0.0;
            msg.angular.z = 0.5; // دوران
        } else {
            msg.linear.x = 0.0;
            msg.angular.z = 0.0;
        }
        publisher_->publish(msg);
        count_++;
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int count_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveRobot>());
    rclcpp::shutdown();
    return 0;
}
