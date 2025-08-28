// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlebot3_custom/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
#include "turtlebot3_custom/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlebot3_custom/srv/detail/get_robot_status__functions.h"
#include "turtlebot3_custom/srv/detail/get_robot_status__struct.h"


// Include directives for member types
// Member `query_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot3_custom__srv__GetRobotStatus_Request__init(message_memory);
}

void turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_fini_function(void * message_memory)
{
  turtlebot3_custom__srv__GetRobotStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_member_array[1] = {
  {
    "query_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom__srv__GetRobotStatus_Request, query_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_members = {
  "turtlebot3_custom__srv",  // message namespace
  "GetRobotStatus_Request",  // message name
  1,  // number of fields
  sizeof(turtlebot3_custom__srv__GetRobotStatus_Request),
  turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_member_array,  // message members
  turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle = {
  0,
  &turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_custom
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Request)() {
  if (!turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle.typesupport_identifier) {
    turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot3_custom__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlebot3_custom/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__functions.h"
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_pose`
#include "geometry_msgs/msg/pose.h"
// Member `current_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `battery_info`
#include "sensor_msgs/msg/battery_state.h"
// Member `battery_info`
#include "sensor_msgs/msg/detail/battery_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot3_custom__srv__GetRobotStatus_Response__init(message_memory);
}

void turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_fini_function(void * message_memory)
{
  turtlebot3_custom__srv__GetRobotStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom__srv__GetRobotStatus_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom__srv__GetRobotStatus_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom__srv__GetRobotStatus_Response, current_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_custom__srv__GetRobotStatus_Response, battery_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_members = {
  "turtlebot3_custom__srv",  // message namespace
  "GetRobotStatus_Response",  // message name
  4,  // number of fields
  sizeof(turtlebot3_custom__srv__GetRobotStatus_Response),
  turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array,  // message members
  turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle = {
  0,
  &turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_custom
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Response)() {
  turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, BatteryState)();
  if (!turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle.typesupport_identifier) {
    turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot3_custom__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlebot3_custom/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_members = {
  "turtlebot3_custom__srv",  // service namespace
  "GetRobotStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle,
  NULL  // response message
  // turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle = {
  0,
  &turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_custom
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus)() {
  if (!turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.typesupport_identifier) {
    turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_custom, srv, GetRobotStatus_Response)()->data;
  }

  return &turtlebot3_custom__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle;
}
