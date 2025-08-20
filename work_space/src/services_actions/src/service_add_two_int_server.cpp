#include "rclcpp/rclcpp.hpp"
#include "services_actions/srv/add_two_int.hpp"
using AddTwoInt = services_actions::srv::AddTwoInt;

class AddTwoIntsServer : public rclcpp::Node
{
public:
  AddTwoIntsServer() : Node("add_two_ints_server")
  {
    service_ = this->create_service<AddTwoInt>(
      "add_two_ints", 
      [](const std::shared_ptr<AddTwoInt::Request> request,
         std::shared_ptr<AddTwoInt::Response> response) {
        response->sum = request->a + request->b;
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: %ld + %ld = %ld",
                    request->a, request->b, response->sum);
      });
  }

private:
  rclcpp::Service<AddTwoInt>::SharedPtr service_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AddTwoIntsServer>());
  rclcpp::shutdown();
  return 0;
}