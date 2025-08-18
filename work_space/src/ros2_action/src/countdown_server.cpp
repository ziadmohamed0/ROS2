#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ros2_action/action/countdown.hpp"

class CountdownActionServer : public rclcpp::Node
{
public:
  using Countdown = ros2_action::action::Countdown;
  using GoalHandle = rclcpp_action::ServerGoalHandle<Countdown>;

  CountdownActionServer() : Node("countdown_server")
  {
    action_server_ = rclcpp_action::create_server<Countdown>(
      this, "countdown",
      std::bind(&CountdownActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&CountdownActionServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&CountdownActionServer::handle_accepted, this, std::placeholders::_1));
  }

private:
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &, std::shared_ptr<const Countdown::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal: start from %d", goal->start);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  {
    RCLCPP_INFO(this->get_logger(), "Received cancel request");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    std::thread([this, goal_handle]() {
      auto goal = goal_handle->get_goal();
      auto feedback = std::make_shared<Countdown::Feedback>();
      for (int i = goal->start; i >= 0; --i) {
        if (goal_handle->is_canceling()) {
          goal_handle->canceled(std::make_shared<Countdown::Result>());
          RCLCPP_INFO(this->get_logger(), "Goal canceled");
          return;
        }
        feedback->current = i;
        goal_handle->publish_feedback(feedback);
        RCLCPP_INFO(this->get_logger(), "Countdown: %d", i);
        rclcpp::sleep_for(std::chrono::milliseconds(500));
      }
      auto result = std::make_shared<Countdown::Result>();
      result->final = 0;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }).detach();
  }

  rclcpp_action::Server<Countdown>::SharedPtr action_server_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CountdownActionServer>());
  rclcpp::shutdown();
  return 0;
}
