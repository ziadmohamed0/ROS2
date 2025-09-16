// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yahboom_rosmaster_msgs/srv/set_cleaning_state.hpp"


#ifndef YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__BUILDER_HPP_
#define YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCleaningState_Request_desired_cleaning_state
{
public:
  Init_SetCleaningState_Request_desired_cleaning_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Request desired_cleaning_state(::yahboom_rosmaster_msgs::srv::SetCleaningState_Request::_desired_cleaning_state_type arg)
  {
    msg_.desired_cleaning_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::srv::SetCleaningState_Request>()
{
  return yahboom_rosmaster_msgs::srv::builder::Init_SetCleaningState_Request_desired_cleaning_state();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCleaningState_Response_message
{
public:
  explicit Init_SetCleaningState_Response_message(::yahboom_rosmaster_msgs::srv::SetCleaningState_Response & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Response message(::yahboom_rosmaster_msgs::srv::SetCleaningState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Response msg_;
};

class Init_SetCleaningState_Response_success
{
public:
  Init_SetCleaningState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCleaningState_Response_message success(::yahboom_rosmaster_msgs::srv::SetCleaningState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetCleaningState_Response_message(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::srv::SetCleaningState_Response>()
{
  return yahboom_rosmaster_msgs::srv::builder::Init_SetCleaningState_Response_success();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCleaningState_Event_response
{
public:
  explicit Init_SetCleaningState_Event_response(::yahboom_rosmaster_msgs::srv::SetCleaningState_Event & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Event response(::yahboom_rosmaster_msgs::srv::SetCleaningState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Event msg_;
};

class Init_SetCleaningState_Event_request
{
public:
  explicit Init_SetCleaningState_Event_request(::yahboom_rosmaster_msgs::srv::SetCleaningState_Event & msg)
  : msg_(msg)
  {}
  Init_SetCleaningState_Event_response request(::yahboom_rosmaster_msgs::srv::SetCleaningState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCleaningState_Event_response(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Event msg_;
};

class Init_SetCleaningState_Event_info
{
public:
  Init_SetCleaningState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCleaningState_Event_request info(::yahboom_rosmaster_msgs::srv::SetCleaningState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCleaningState_Event_request(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::srv::SetCleaningState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::srv::SetCleaningState_Event>()
{
  return yahboom_rosmaster_msgs::srv::builder::Init_SetCleaningState_Event_info();
}

}  // namespace yahboom_rosmaster_msgs

#endif  // YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__BUILDER_HPP_
