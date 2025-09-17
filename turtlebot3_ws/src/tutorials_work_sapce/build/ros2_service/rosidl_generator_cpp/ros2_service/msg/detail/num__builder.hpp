// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_service:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_service/msg/num.hpp"


#ifndef ROS2_SERVICE__MSG__DETAIL__NUM__BUILDER_HPP_
#define ROS2_SERVICE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_service/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_service
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_service::msg::Num num(::ros2_service::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_service::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_service::msg::Num>()
{
  return ros2_service::msg::builder::Init_Num_num();
}

}  // namespace ros2_service

#endif  // ROS2_SERVICE__MSG__DETAIL__NUM__BUILDER_HPP_
