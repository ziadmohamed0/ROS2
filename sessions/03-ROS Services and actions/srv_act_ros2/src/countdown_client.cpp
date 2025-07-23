#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "srv_act_ros2/action/countdown.hpp"

class CountdownActionClient : public rclcpp::Node
{
public:
  using Countdown = srv_act_ros2::action::Countdown;
  using GoalHandleCountdown = rclcpp_action::ClientGoalHandle<Countdown>;

  CountdownActionClient() : Node("countdown_client")
  {
    client_ = rclcpp_action::create_client<Countdown>(this, "countdown");

    if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available");
      rclcpp::shutdown();
      return;
    }

    auto goal_msg = Countdown::Goal();
    goal_msg.start = 5;

    auto send_goal_options = rclcpp_action::Client<Countdown>::SendGoalOptions();
    send_goal_options.feedback_callback =
      [this](GoalHandleCountdown::SharedPtr, const std::shared_ptr<const Countdown::Feedback> feedback) {
        RCLCPP_INFO(this->get_logger(), "Received feedback: %d", feedback->current);
      };
    send_goal_options.result_callback =
      [this](const GoalHandleCountdown::WrappedResult & result) {
        RCLCPP_INFO(this->get_logger(), "Final result: %d", result.result->final);
        rclcpp::shutdown();
      };

    client_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<Countdown>::SharedPtr client_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<CountdownActionClient>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
