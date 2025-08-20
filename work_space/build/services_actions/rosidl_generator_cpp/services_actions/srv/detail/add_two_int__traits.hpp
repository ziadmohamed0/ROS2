// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from services_actions:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_
#define SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "services_actions/srv/detail/add_two_int__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace services_actions
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInt_Request & msg, bool use_flow_style = false)
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

}  // namespace services_actions

namespace rosidl_generator_traits
{

[[deprecated("use services_actions::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const services_actions::srv::AddTwoInt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  services_actions::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use services_actions::srv::to_yaml() instead")]]
inline std::string to_yaml(const services_actions::srv::AddTwoInt_Request & msg)
{
  return services_actions::srv::to_yaml(msg);
}

template<>
inline const char * data_type<services_actions::srv::AddTwoInt_Request>()
{
  return "services_actions::srv::AddTwoInt_Request";
}

template<>
inline const char * name<services_actions::srv::AddTwoInt_Request>()
{
  return "services_actions/srv/AddTwoInt_Request";
}

template<>
struct has_fixed_size<services_actions::srv::AddTwoInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<services_actions::srv::AddTwoInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<services_actions::srv::AddTwoInt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace services_actions
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInt_Response & msg, bool use_flow_style = false)
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

}  // namespace services_actions

namespace rosidl_generator_traits
{

[[deprecated("use services_actions::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const services_actions::srv::AddTwoInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  services_actions::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use services_actions::srv::to_yaml() instead")]]
inline std::string to_yaml(const services_actions::srv::AddTwoInt_Response & msg)
{
  return services_actions::srv::to_yaml(msg);
}

template<>
inline const char * data_type<services_actions::srv::AddTwoInt_Response>()
{
  return "services_actions::srv::AddTwoInt_Response";
}

template<>
inline const char * name<services_actions::srv::AddTwoInt_Response>()
{
  return "services_actions/srv/AddTwoInt_Response";
}

template<>
struct has_fixed_size<services_actions::srv::AddTwoInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<services_actions::srv::AddTwoInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<services_actions::srv::AddTwoInt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<services_actions::srv::AddTwoInt>()
{
  return "services_actions::srv::AddTwoInt";
}

template<>
inline const char * name<services_actions::srv::AddTwoInt>()
{
  return "services_actions/srv/AddTwoInt";
}

template<>
struct has_fixed_size<services_actions::srv::AddTwoInt>
  : std::integral_constant<
    bool,
    has_fixed_size<services_actions::srv::AddTwoInt_Request>::value &&
    has_fixed_size<services_actions::srv::AddTwoInt_Response>::value
  >
{
};

template<>
struct has_bounded_size<services_actions::srv::AddTwoInt>
  : std::integral_constant<
    bool,
    has_bounded_size<services_actions::srv::AddTwoInt_Request>::value &&
    has_bounded_size<services_actions::srv::AddTwoInt_Response>::value
  >
{
};

template<>
struct is_service<services_actions::srv::AddTwoInt>
  : std::true_type
{
};

template<>
struct is_service_request<services_actions::srv::AddTwoInt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<services_actions::srv::AddTwoInt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_
