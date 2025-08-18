// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_act_ros2:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef SRV_ACT_ROS2__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_
#define SRV_ACT_ROS2__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srv_act_ros2/action/detail/countdown__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_Goal & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_Goal>()
{
  return "srv_act_ros2::action::Countdown_Goal";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_Goal>()
{
  return "srv_act_ros2/action/Countdown_Goal";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final
  {
    out << "final: ";
    rosidl_generator_traits::value_to_yaml(msg.final, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final: ";
    rosidl_generator_traits::value_to_yaml(msg.final, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_Result & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_Result>()
{
  return "srv_act_ros2::action::Countdown_Result";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_Result>()
{
  return "srv_act_ros2/action/Countdown_Result";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_Feedback & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_Feedback>()
{
  return "srv_act_ros2::action::Countdown_Feedback";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_Feedback>()
{
  return "srv_act_ros2/action/Countdown_Feedback";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "srv_act_ros2/action/detail/countdown__traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_SendGoal_Request & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_SendGoal_Request>()
{
  return "srv_act_ros2::action::Countdown_SendGoal_Request";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_SendGoal_Request>()
{
  return "srv_act_ros2/action/Countdown_SendGoal_Request";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<srv_act_ros2::action::Countdown_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<srv_act_ros2::action::Countdown_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_SendGoal_Response & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_SendGoal_Response>()
{
  return "srv_act_ros2::action::Countdown_SendGoal_Response";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_SendGoal_Response>()
{
  return "srv_act_ros2/action/Countdown_SendGoal_Response";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_SendGoal>()
{
  return "srv_act_ros2::action::Countdown_SendGoal";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_SendGoal>()
{
  return "srv_act_ros2/action/Countdown_SendGoal";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_act_ros2::action::Countdown_SendGoal_Request>::value &&
    has_fixed_size<srv_act_ros2::action::Countdown_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_act_ros2::action::Countdown_SendGoal_Request>::value &&
    has_bounded_size<srv_act_ros2::action::Countdown_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<srv_act_ros2::action::Countdown_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<srv_act_ros2::action::Countdown_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_act_ros2::action::Countdown_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_GetResult_Request & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_GetResult_Request>()
{
  return "srv_act_ros2::action::Countdown_GetResult_Request";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_GetResult_Request>()
{
  return "srv_act_ros2/action/Countdown_GetResult_Request";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "srv_act_ros2/action/detail/countdown__traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_GetResult_Response & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_GetResult_Response>()
{
  return "srv_act_ros2::action::Countdown_GetResult_Response";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_GetResult_Response>()
{
  return "srv_act_ros2/action/Countdown_GetResult_Response";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<srv_act_ros2::action::Countdown_Result>::value> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<srv_act_ros2::action::Countdown_Result>::value> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_GetResult>()
{
  return "srv_act_ros2::action::Countdown_GetResult";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_GetResult>()
{
  return "srv_act_ros2/action/Countdown_GetResult";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_act_ros2::action::Countdown_GetResult_Request>::value &&
    has_fixed_size<srv_act_ros2::action::Countdown_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_act_ros2::action::Countdown_GetResult_Request>::value &&
    has_bounded_size<srv_act_ros2::action::Countdown_GetResult_Response>::value
  >
{
};

template<>
struct is_service<srv_act_ros2::action::Countdown_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<srv_act_ros2::action::Countdown_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_act_ros2::action::Countdown_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "srv_act_ros2/action/detail/countdown__traits.hpp"

namespace srv_act_ros2
{

namespace action
{

inline void to_flow_style_yaml(
  const Countdown_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Countdown_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Countdown_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace srv_act_ros2

namespace rosidl_generator_traits
{

[[deprecated("use srv_act_ros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_act_ros2::action::Countdown_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_act_ros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_act_ros2::action::to_yaml() instead")]]
inline std::string to_yaml(const srv_act_ros2::action::Countdown_FeedbackMessage & msg)
{
  return srv_act_ros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<srv_act_ros2::action::Countdown_FeedbackMessage>()
{
  return "srv_act_ros2::action::Countdown_FeedbackMessage";
}

template<>
inline const char * name<srv_act_ros2::action::Countdown_FeedbackMessage>()
{
  return "srv_act_ros2/action/Countdown_FeedbackMessage";
}

template<>
struct has_fixed_size<srv_act_ros2::action::Countdown_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<srv_act_ros2::action::Countdown_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<srv_act_ros2::action::Countdown_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<srv_act_ros2::action::Countdown_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<srv_act_ros2::action::Countdown_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<srv_act_ros2::action::Countdown>
  : std::true_type
{
};

template<>
struct is_action_goal<srv_act_ros2::action::Countdown_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<srv_act_ros2::action::Countdown_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<srv_act_ros2::action::Countdown_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SRV_ACT_ROS2__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_
