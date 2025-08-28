// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_
#define TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot3_custom/srv/detail/get_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot3_custom
{

namespace srv
{

namespace builder
{

class Init_GetRobotStatus_Request_query_type
{
public:
  Init_GetRobotStatus_Request_query_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_custom::srv::GetRobotStatus_Request query_type(::turtlebot3_custom::srv::GetRobotStatus_Request::_query_type_type arg)
  {
    msg_.query_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::srv::GetRobotStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::srv::GetRobotStatus_Request>()
{
  return turtlebot3_custom::srv::builder::Init_GetRobotStatus_Request_query_type();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace srv
{

namespace builder
{

class Init_GetRobotStatus_Response_battery_info
{
public:
  explicit Init_GetRobotStatus_Response_battery_info(::turtlebot3_custom::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::srv::GetRobotStatus_Response battery_info(::turtlebot3_custom::srv::GetRobotStatus_Response::_battery_info_type arg)
  {
    msg_.battery_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_current_pose
{
public:
  explicit Init_GetRobotStatus_Response_current_pose(::turtlebot3_custom::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_battery_info current_pose(::turtlebot3_custom::srv::GetRobotStatus_Response::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_GetRobotStatus_Response_battery_info(msg_);
  }

private:
  ::turtlebot3_custom::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_status_message
{
public:
  explicit Init_GetRobotStatus_Response_status_message(::turtlebot3_custom::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_current_pose status_message(::turtlebot3_custom::srv::GetRobotStatus_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return Init_GetRobotStatus_Response_current_pose(msg_);
  }

private:
  ::turtlebot3_custom::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_success
{
public:
  Init_GetRobotStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotStatus_Response_status_message success(::turtlebot3_custom::srv::GetRobotStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetRobotStatus_Response_status_message(msg_);
  }

private:
  ::turtlebot3_custom::srv::GetRobotStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::srv::GetRobotStatus_Response>()
{
  return turtlebot3_custom::srv::builder::Init_GetRobotStatus_Response_success();
}

}  // namespace turtlebot3_custom

#endif  // TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_
