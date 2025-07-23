/**
 * @file pub.cpp
 * @author Ziad Fathy
 * @brief simple publisher msg
 * @version 0.1
 * @date 2025-07-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class publisher : public rclcpp::Node {
    public:
        /**
         * @brief Construct a new publisher object
         * 
         */
        publisher() : Node("publisher"), counter_(0) {
            this->publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10); // create publisher node with standared msg
            this->time_ = this->create_wall_timer(500ms, std::bind(&publisher::callBack, this)); // delay timer
        }
    private:
        /**
         * @brief 
         * 
         */
        void callBack() {
            auto massege = std_msgs::msg::String(); // create message buffer
            massege.data = "hello Worled " + std::to_string(this->counter_++);  
            RCLCPP_INFO(this->get_logger(), "%s", massege.data.c_str());    
            this->publisher_->publish(massege); 
        }

        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_; // create shared pointer publisher
        rclcpp::TimerBase::SharedPtr time_; // create shared pointer delay
        int counter_;
};

int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);   // init node
    rclcpp::spin(std::make_shared<publisher>());    
    rclcpp::shutdown(); // end node
    return 0;
}