// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_service:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_service/msg/num.hpp"


#ifndef ROS2_SERVICE__MSG__DETAIL__NUM__TRAITS_HPP_
#define ROS2_SERVICE__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_service/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_service
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_service

namespace rosidl_generator_traits
{

[[deprecated("use ros2_service::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_service::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_service::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_service::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_service::msg::Num & msg)
{
  return ros2_service::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_service::msg::Num>()
{
  return "ros2_service::msg::Num";
}

template<>
inline const char * name<ros2_service::msg::Num>()
{
  return "ros2_service/msg/Num";
}

template<>
struct has_fixed_size<ros2_service::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_service::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_service::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_SERVICE__MSG__DETAIL__NUM__TRAITS_HPP_
