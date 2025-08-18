#include <iostream>
#include "example_interfaces/srv/add_two_ints.hpp"
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class add_numbers : public rclcpp::Node {
    public:
        add_numbers() : Node("add_two_number") {
            this->srv = this->create_service<example_interfaces::srv::AddTwoInts>("add_two_numbers", std::bind(&add_numbers::hundel_service, this, _1, _2));
        }
    private:
        void hundel_service(
            const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> req,
            std::shared_ptr<example_interfaces::srv::AddTwoInts::Response> res) {
                res->sum = req->a + req->b;
                RCLCPP_INFO(this->get_logger(), "summing: %ld + %ld = %ld", req->a, req->b, res->sum);
        }
        rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr srv;
};

int main (int argc, char* argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<add_numbers>());
    rclcpp::shutdown();
    return 0;
}