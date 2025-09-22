/**
 * @file move_robot.cpp
 * @author Ziad Mohammed Fathy
 * @brief custom move robot 
 * @version 0.1
 * @date 2025-09-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>

using namespace std::chrono_literals;

class MoveRobot : public rclcpp::Node {
    public:
        MoveRobot() : Node("move_robot") {
            this->vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
                "/cmd_vel",
                10
            );
            this->timer1_ = this->create_wall_timer(
                std::chrono::milliseconds(100),
                std::bind(&MoveRobot::forward, this)
            );
        }
    private:
        void forward() {
            geometry_msgs::msg::Twist cmd;
            cmd.linear.x = -0.5;
            this->vel_pub_->publish(cmd);

            RCLCPP_INFO(this->get_logger(), "Forward");
            this->timer1_->cancel();

            this->timer2_ = this->create_wall_timer(
                3s, std::bind(&MoveRobot::right, this));
        }

        void right() {
            geometry_msgs::msg::Twist cmd;
            cmd.angular.z = -0.5;
            this->vel_pub_->publish(cmd);

            RCLCPP_INFO(this->get_logger(), "Right");
            this->timer2_->cancel();

            this->timer3_ = this->create_wall_timer(
                2s, std::bind(&MoveRobot::left, this));
        }

        void left() {
            geometry_msgs::msg::Twist cmd;
            cmd.angular.z = 0.5;
            this->vel_pub_->publish(cmd);

            RCLCPP_INFO(this->get_logger(), "Left");
            this->timer3_->cancel();

            this->timer4_ = this->create_wall_timer(
                2s, std::bind(&MoveRobot::stop, this));
        }

        void stop() {
            geometry_msgs::msg::Twist cmd;
            this->vel_pub_->publish(cmd);

            RCLCPP_INFO(this->get_logger(), "Stop");
            this->timer4_->cancel();
            this->timer1_ = this->create_wall_timer(
                2s, std::bind(&MoveRobot::forward, this));
        }
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
        rclcpp::TimerBase::SharedPtr timer1_, timer2_, timer3_, timer4_;

};

int main (int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveRobot>());
    rclcpp::shutdown();
    return 0;
}