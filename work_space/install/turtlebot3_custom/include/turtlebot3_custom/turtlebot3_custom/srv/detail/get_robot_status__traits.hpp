// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_
#define TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlebot3_custom/srv/detail/get_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlebot3_custom
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: query_type
  {
    out << "query_type: ";
    rosidl_generator_traits::value_to_yaml(msg.query_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: query_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query_type: ";
    rosidl_generator_traits::value_to_yaml(msg.query_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlebot3_custom

namespace rosidl_generator_traits
{

[[deprecated("use turtlebot3_custom::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlebot3_custom::srv::GetRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot3_custom::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot3_custom::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot3_custom::srv::GetRobotStatus_Request & msg)
{
  return turtlebot3_custom::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot3_custom::srv::GetRobotStatus_Request>()
{
  return "turtlebot3_custom::srv::GetRobotStatus_Request";
}

template<>
inline const char * name<turtlebot3_custom::srv::GetRobotStatus_Request>()
{
  return "turtlebot3_custom/srv/GetRobotStatus_Request";
}

template<>
struct has_fixed_size<turtlebot3_custom::srv::GetRobotStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlebot3_custom::srv::GetRobotStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlebot3_custom::srv::GetRobotStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'battery_info'
#include "sensor_msgs/msg/detail/battery_state__traits.hpp"

namespace turtlebot3_custom
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << ", ";
  }

  // member: current_pose
  {
    out << "current_pose: ";
    to_flow_style_yaml(msg.current_pose, out);
    out << ", ";
  }

  // member: battery_info
  {
    out << "battery_info: ";
    to_flow_style_yaml(msg.battery_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }

  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose:\n";
    to_block_style_yaml(msg.current_pose, out, indentation + 2);
  }

  // member: battery_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_info:\n";
    to_block_style_yaml(msg.battery_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlebot3_custom

namespace rosidl_generator_traits
{

[[deprecated("use turtlebot3_custom::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlebot3_custom::srv::GetRobotStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot3_custom::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot3_custom::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot3_custom::srv::GetRobotStatus_Response & msg)
{
  return turtlebot3_custom::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot3_custom::srv::GetRobotStatus_Response>()
{
  return "turtlebot3_custom::srv::GetRobotStatus_Response";
}

template<>
inline const char * name<turtlebot3_custom::srv::GetRobotStatus_Response>()
{
  return "turtlebot3_custom/srv/GetRobotStatus_Response";
}

template<>
struct has_fixed_size<turtlebot3_custom::srv::GetRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlebot3_custom::srv::GetRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlebot3_custom::srv::GetRobotStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_custom::srv::GetRobotStatus>()
{
  return "turtlebot3_custom::srv::GetRobotStatus";
}

template<>
inline const char * name<turtlebot3_custom::srv::GetRobotStatus>()
{
  return "turtlebot3_custom/srv/GetRobotStatus";
}

template<>
struct has_fixed_size<turtlebot3_custom::srv::GetRobotStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlebot3_custom::srv::GetRobotStatus_Request>::value &&
    has_fixed_size<turtlebot3_custom::srv::GetRobotStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlebot3_custom::srv::GetRobotStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlebot3_custom::srv::GetRobotStatus_Request>::value &&
    has_bounded_size<turtlebot3_custom::srv::GetRobotStatus_Response>::value
  >
{
};

template<>
struct is_service<turtlebot3_custom::srv::GetRobotStatus>
  : std::true_type
{
};

template<>
struct is_service_request<turtlebot3_custom::srv::GetRobotStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlebot3_custom::srv::GetRobotStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_
