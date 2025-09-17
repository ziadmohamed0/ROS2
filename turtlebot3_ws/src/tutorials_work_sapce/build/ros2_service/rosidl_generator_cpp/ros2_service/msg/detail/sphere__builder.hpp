// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_service:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_service/msg/sphere.hpp"


#ifndef ROS2_SERVICE__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define ROS2_SERVICE__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_service/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_service
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::ros2_service::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::ros2_service::msg::Sphere radius(::ros2_service::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_service::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::ros2_service::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::ros2_service::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_service::msg::Sphere>()
{
  return ros2_service::msg::builder::Init_Sphere_center();
}

}  // namespace ros2_service

#endif  // ROS2_SERVICE__MSG__DETAIL__SPHERE__BUILDER_HPP_
