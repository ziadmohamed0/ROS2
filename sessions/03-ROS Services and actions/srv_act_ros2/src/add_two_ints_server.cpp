#include "rclcpp/rclcpp.hpp"
#include "srv_act_ros2/srv/add_two_ints.hpp"
using AddTwoInts = srv_act_ros2::srv::AddTwoInts;

class AddTwoIntsServer : public rclcpp::Node
{
public:
  AddTwoIntsServer() : Node("add_two_ints_server")
  {
    service_ = this->create_service<AddTwoInts>(
      "add_two_ints", 
      [](const std::shared_ptr<AddTwoInts::Request> request,
         std::shared_ptr<AddTwoInts::Response> response) {
        response->sum = request->a + request->b;
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: %ld + %ld = %ld",
                    request->a, request->b, response->sum);
      });
  }

private:
  rclcpp::Service<AddTwoInts>::SharedPtr service_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AddTwoIntsServer>());
  rclcpp::shutdown();
  return 0;
}
