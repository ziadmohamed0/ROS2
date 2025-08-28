// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice
#include "turtlebot3_custom/srv/detail/get_robot_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtlebot3_custom/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot3_custom/srv/detail/get_robot_status__struct.h"
#include "turtlebot3_custom/srv/detail/get_robot_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // query_type
#include "rosidl_runtime_c/string_functions.h"  // query_type

// forward declare type support functions


using _GetRobotStatus_Request__ros_msg_type = turtlebot3_custom__srv__GetRobotStatus_Request;

static bool _GetRobotStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRobotStatus_Request__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: query_type
  {
    const rosidl_runtime_c__String * str = &ros_message->query_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetRobotStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRobotStatus_Request__ros_msg_type * ros_message = static_cast<_GetRobotStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: query_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->query_type.data) {
      rosidl_runtime_c__String__init(&ros_message->query_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->query_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'query_type'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot3_custom
size_t get_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Request__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name query_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->query_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetRobotStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot3_custom
size_t max_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: query_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot3_custom__srv__GetRobotStatus_Request;
    is_plain =
      (
      offsetof(DataType, query_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRobotStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRobotStatus_Request = {
  "turtlebot3_custom::srv",
  "GetRobotStatus_Request",
  _GetRobotStatus_Request__cdr_serialize,
  _GetRobotStatus_Request__cdr_deserialize,
  _GetRobotStatus_Request__get_serialized_size,
  _GetRobotStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRobotStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRobotStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot3_custom, srv, GetRobotStatus_Request)() {
  return &_GetRobotStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlebot3_custom/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__struct.h"
// already included above
// #include "turtlebot3_custom/srv/detail/get_robot_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // current_pose
// already included above
// #include "rosidl_runtime_c/string.h"  // status_message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // status_message
#include "sensor_msgs/msg/detail/battery_state__functions.h"  // battery_info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
size_t get_serialized_size_sensor_msgs__msg__BatteryState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
size_t max_serialized_size_sensor_msgs__msg__BatteryState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlebot3_custom
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, BatteryState)();


using _GetRobotStatus_Response__ros_msg_type = turtlebot3_custom__srv__GetRobotStatus_Response;

static bool _GetRobotStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRobotStatus_Response__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: status_message
  {
    const rosidl_runtime_c__String * str = &ros_message->status_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_pose, cdr))
    {
      return false;
    }
  }

  // Field name: battery_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, BatteryState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->battery_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetRobotStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRobotStatus_Response__ros_msg_type * ros_message = static_cast<_GetRobotStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: status_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status_message.data) {
      rosidl_runtime_c__String__init(&ros_message->status_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status_message'\n");
      return false;
    }
  }

  // Field name: current_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_pose))
    {
      return false;
    }
  }

  // Field name: battery_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, BatteryState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->battery_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot3_custom
size_t get_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Response__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_message.size + 1);
  // field.name current_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->current_pose), current_alignment);
  // field.name battery_info

  current_alignment += get_serialized_size_sensor_msgs__msg__BatteryState(
    &(ros_message->battery_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetRobotStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot3_custom
size_t max_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: battery_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__BatteryState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot3_custom__srv__GetRobotStatus_Response;
    is_plain =
      (
      offsetof(DataType, battery_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRobotStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtlebot3_custom__srv__GetRobotStatus_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRobotStatus_Response = {
  "turtlebot3_custom::srv",
  "GetRobotStatus_Response",
  _GetRobotStatus_Response__cdr_serialize,
  _GetRobotStatus_Response__cdr_deserialize,
  _GetRobotStatus_Response__get_serialized_size,
  _GetRobotStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRobotStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRobotStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot3_custom, srv, GetRobotStatus_Response)() {
  return &_GetRobotStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "turtlebot3_custom/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot3_custom/srv/get_robot_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetRobotStatus__callbacks = {
  "turtlebot3_custom::srv",
  "GetRobotStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot3_custom, srv, GetRobotStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot3_custom, srv, GetRobotStatus_Response)(),
};

static rosidl_service_type_support_t GetRobotStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetRobotStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot3_custom, srv, GetRobotStatus)() {
  return &GetRobotStatus__handle;
}

#if defined(__cplusplus)
}
#endif
