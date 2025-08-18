#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

int main (int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("add_client");
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_numbers");

    while(!client->wait_for_service(std::chrono::seconds(1))) {
        RCLCPP_INFO(node->get_logger(), "....wait for servece");
    }

    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request->a = 20;
    request->b = 30;

    auto resulte = client->async_send_request(request);

    if(rclcpp::spin_until_future_complete(node, resulte) == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(node->get_logger(), "Result = %ld", resulte.get()->sum);
    }
    rclcpp::shutdown();

    return 0;
}