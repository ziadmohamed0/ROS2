// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yahboom_rosmaster_msgs/srv/set_cleaning_state.hpp"


#ifndef YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__TRAITS_HPP_
#define YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCleaningState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_cleaning_state
  {
    out << "desired_cleaning_state: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_cleaning_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCleaningState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_cleaning_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_cleaning_state: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_cleaning_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCleaningState_Request & msg, bool use_flow_style = false)
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

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yahboom_rosmaster_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yahboom_rosmaster_msgs::srv::SetCleaningState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  yahboom_rosmaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yahboom_rosmaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yahboom_rosmaster_msgs::srv::SetCleaningState_Request & msg)
{
  return yahboom_rosmaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>()
{
  return "yahboom_rosmaster_msgs::srv::SetCleaningState_Request";
}

template<>
inline const char * name<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>()
{
  return "yahboom_rosmaster_msgs/srv/SetCleaningState_Request";
}

template<>
struct has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace yahboom_rosmaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCleaningState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCleaningState_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCleaningState_Response & msg, bool use_flow_style = false)
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

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yahboom_rosmaster_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yahboom_rosmaster_msgs::srv::SetCleaningState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  yahboom_rosmaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yahboom_rosmaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yahboom_rosmaster_msgs::srv::SetCleaningState_Response & msg)
{
  return yahboom_rosmaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>()
{
  return "yahboom_rosmaster_msgs::srv::SetCleaningState_Response";
}

template<>
inline const char * name<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>()
{
  return "yahboom_rosmaster_msgs/srv/SetCleaningState_Response";
}

template<>
struct has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCleaningState_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCleaningState_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCleaningState_Event & msg, bool use_flow_style = false)
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

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yahboom_rosmaster_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yahboom_rosmaster_msgs::srv::SetCleaningState_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  yahboom_rosmaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yahboom_rosmaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yahboom_rosmaster_msgs::srv::SetCleaningState_Event & msg)
{
  return yahboom_rosmaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>()
{
  return "yahboom_rosmaster_msgs::srv::SetCleaningState_Event";
}

template<>
inline const char * name<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>()
{
  return "yahboom_rosmaster_msgs/srv/SetCleaningState_Event";
}

template<>
struct has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>::value && has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>::value> {};

template<>
struct is_message<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboom_rosmaster_msgs::srv::SetCleaningState>()
{
  return "yahboom_rosmaster_msgs::srv::SetCleaningState";
}

template<>
inline const char * name<yahboom_rosmaster_msgs::srv::SetCleaningState>()
{
  return "yahboom_rosmaster_msgs/srv/SetCleaningState";
}

template<>
struct has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState>
  : std::integral_constant<
    bool,
    has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>::value &&
    has_fixed_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>::value
  >
{
};

template<>
struct has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState>
  : std::integral_constant<
    bool,
    has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>::value &&
    has_bounded_size<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>::value
  >
{
};

template<>
struct is_service<yahboom_rosmaster_msgs::srv::SetCleaningState>
  : std::true_type
{
};

template<>
struct is_service_request<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__TRAITS_HPP_
