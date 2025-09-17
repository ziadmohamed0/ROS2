#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>

class StopRobot : public rclcpp::Node {
    public:
        StopRobot() : Node("stop_robot") {
            this->publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>("/cmd_vel", 10);
            this->time_ = this->create_wall_timer(
                std::chrono::milliseconds(500),
                std::bind(&StopRobot::velocity, this)
            );
        }
    private:
        void velocity() {
            auto msg = geometry_msgs::msg::TwistStamped();
            msg.header.stamp = this->now();

            msg.twist.linear.x = 0;
            msg.twist.angular.z = 0;
            
            this->publisher_->publish(msg);

            RCLCPP_INFO(this->get_logger(), "Publishing: linear=%.2f angular=%.2f", 
                msg.twist.linear.x, msg.twist.angular.z);
        }
        rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr time_;
};

int main (int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StopRobot>());
    rclcpp::shutdown();
    return 0;
}