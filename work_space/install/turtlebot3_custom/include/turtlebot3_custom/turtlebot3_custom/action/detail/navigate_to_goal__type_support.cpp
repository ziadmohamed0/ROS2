// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot3_custom:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_Goal(_init);
}

void NavigateToGoal_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_Goal *>(message_memory);
  typed_message->~NavigateToGoal_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_Goal_message_member_array[1] = {
  {
    "target_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Goal, target_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_Goal_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_Goal",  // message name
  1,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_Goal),
  NavigateToGoal_Goal_message_member_array,  // message members
  NavigateToGoal_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Goal>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_Goal)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_Result(_init);
}

void NavigateToGoal_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_Result *>(message_memory);
  typed_message->~NavigateToGoal_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_Result_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Result, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Result, final_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_Result_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_Result",  // message name
  3,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_Result),
  NavigateToGoal_Result_message_member_array,  // message members
  NavigateToGoal_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Result>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_Result)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_Feedback(_init);
}

void NavigateToGoal_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_Feedback *>(message_memory);
  typed_message->~NavigateToGoal_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_Feedback_message_member_array[3] = {
  {
    "current_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Feedback, current_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_remaining",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Feedback, distance_remaining),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_elapsed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_Feedback, time_elapsed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_Feedback_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_Feedback",  // message name
  3,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_Feedback),
  NavigateToGoal_Feedback_message_member_array,  // message members
  NavigateToGoal_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Feedback>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_Feedback)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_SendGoal_Request(_init);
}

void NavigateToGoal_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_SendGoal_Request *>(message_memory);
  typed_message->~NavigateToGoal_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_SendGoal_Request_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Request),
  NavigateToGoal_SendGoal_Request_message_member_array,  // message members
  NavigateToGoal_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_SendGoal_Request>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_SendGoal_Request)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_SendGoal_Response(_init);
}

void NavigateToGoal_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_SendGoal_Response *>(message_memory);
  typed_message->~NavigateToGoal_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_SendGoal_Response_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_SendGoal_Response),
  NavigateToGoal_SendGoal_Response_message_member_array,  // message members
  NavigateToGoal_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_SendGoal_Response>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_SendGoal_Response)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NavigateToGoal_SendGoal_service_members = {
  "turtlebot3_custom::action",  // service namespace
  "NavigateToGoal_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NavigateToGoal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_GetResult_Request(_init);
}

void NavigateToGoal_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_GetResult_Request *>(message_memory);
  typed_message->~NavigateToGoal_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_GetResult_Request_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_GetResult_Request),
  NavigateToGoal_GetResult_Request_message_member_array,  // message members
  NavigateToGoal_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_GetResult_Request>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_GetResult_Request)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_GetResult_Response(_init);
}

void NavigateToGoal_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_GetResult_Response *>(message_memory);
  typed_message->~NavigateToGoal_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_GetResult_Response_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_GetResult_Response),
  NavigateToGoal_GetResult_Response_message_member_array,  // message members
  NavigateToGoal_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_GetResult_Response>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_GetResult_Response)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NavigateToGoal_GetResult_service_members = {
  "turtlebot3_custom::action",  // service namespace
  "NavigateToGoal_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NavigateToGoal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlebot3_custom::action::NavigateToGoal_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlebot3_custom::action::NavigateToGoal_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<turtlebot3_custom::action::NavigateToGoal_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlebot3_custom
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateToGoal_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlebot3_custom::action::NavigateToGoal_FeedbackMessage(_init);
}

void NavigateToGoal_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlebot3_custom::action::NavigateToGoal_FeedbackMessage *>(message_memory);
  typed_message->~NavigateToGoal_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateToGoal_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom::action::NavigateToGoal_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateToGoal_FeedbackMessage_message_members = {
  "turtlebot3_custom::action",  // message namespace
  "NavigateToGoal_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(turtlebot3_custom::action::NavigateToGoal_FeedbackMessage),
  NavigateToGoal_FeedbackMessage_message_member_array,  // message members
  NavigateToGoal_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateToGoal_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateToGoal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateToGoal_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace turtlebot3_custom


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_custom::action::NavigateToGoal_FeedbackMessage>()
{
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot3_custom, action, NavigateToGoal_FeedbackMessage)() {
  return &::turtlebot3_custom::action::rosidl_typesupport_introspection_cpp::NavigateToGoal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
