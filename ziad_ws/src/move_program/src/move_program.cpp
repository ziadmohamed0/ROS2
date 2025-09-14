#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.hpp>

int main(int argc, char ** argv) {
  rclcpp::init(argc, argv);
  
  auto const node = std::make_shared<rclcpp::Node>(
    "move_program",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  auto const logger = rclcpp::get_logger("move_program");
  moveit::planning_interface::MoveGroupInterface MoveGroupInterface(node, "panda_arm");

  tf2::Quaternion tf2_quat;
  tf2_quat.setRPY(0, 0, -3.14/2);

  geometry_msgs::msg::Quaternion msg_quat = tf2::toMsg(tf2_quat);
  geometry_msgs::msg::Pose GoalPose;

  GoalPose.orientation = msg_quat;
  GoalPose.position.x = 0.3;
  GoalPose.position.y = -0.3;
  GoalPose.position.z = 0.4;

  MoveGroupInterface.setPoseTarget(GoalPose);

  moveit::planning_interface::MoveGroupInterface::Plan plan1;
  auto const outcome = static_cast<bool>(MoveGroupInterface.plan(plan1));
  if(outcome) {
    MoveGroupInterface.execute(plan1);
  }
  
  else {
    RCLCPP_INFO(logger, "We were not able to plan and execute!");
  }

  rclcpp::shutdown();
  return 0;
}
