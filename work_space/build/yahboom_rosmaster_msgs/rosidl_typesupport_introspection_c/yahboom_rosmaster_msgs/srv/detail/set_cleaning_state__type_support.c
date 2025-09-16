// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__rosidl_typesupport_introspection_c.h"
#include "yahboom_rosmaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__init(message_memory);
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_fini_function(void * message_memory)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_member_array[1] = {
  {
    "desired_cleaning_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request, desired_cleaning_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_members = {
  "yahboom_rosmaster_msgs__srv",  // message namespace
  "SetCleaningState_Request",  // message name
  1,  // number of fields
  sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request),
  false,  // has_any_key_member_
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_member_array,  // message members
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle = {
  0,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_members,
  get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_rosmaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)() {
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle.typesupport_identifier) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yahboom_rosmaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__init(message_memory);
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_fini_function(void * message_memory)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_members = {
  "yahboom_rosmaster_msgs__srv",  // message namespace
  "SetCleaningState_Response",  // message name
  2,  // number of fields
  sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response),
  false,  // has_any_key_member_
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_member_array,  // message members
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle = {
  0,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_members,
  get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_rosmaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)() {
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle.typesupport_identifier) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yahboom_rosmaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "yahboom_rosmaster_msgs/srv/set_cleaning_state.h"
// Member `request`
// Member `response`
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__init(message_memory);
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_fini_function(void * message_memory)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(message_memory);
}

size_t yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__size_function__SetCleaningState_Event__request(
  const void * untyped_member)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * member =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__request(
  const void * untyped_member, size_t index)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * member =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__request(
  void * untyped_member, size_t index)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * member =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__fetch_function__SetCleaningState_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request * item =
    ((const yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__request(untyped_member, index));
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * value =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)(untyped_value);
  *value = *item;
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__assign_function__SetCleaningState_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * item =
    ((yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__request(untyped_member, index));
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request * value =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)(untyped_value);
  *item = *value;
}

bool yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__resize_function__SetCleaningState_Event__request(
  void * untyped_member, size_t size)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * member =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *)(untyped_member);
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__fini(member);
  return yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__init(member, size);
}

size_t yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__size_function__SetCleaningState_Event__response(
  const void * untyped_member)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * member =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__response(
  const void * untyped_member, size_t index)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * member =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__response(
  void * untyped_member, size_t index)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * member =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__fetch_function__SetCleaningState_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response * item =
    ((const yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__response(untyped_member, index));
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * value =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)(untyped_value);
  *value = *item;
}

void yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__assign_function__SetCleaningState_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * item =
    ((yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__response(untyped_member, index));
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response * value =
    (const yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)(untyped_value);
  *item = *value;
}

bool yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__resize_function__SetCleaningState_Event__response(
  void * untyped_member, size_t size)
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * member =
    (yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *)(untyped_member);
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__fini(member);
  return yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event, request),  // bytes offset in struct
    NULL,  // default value
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__size_function__SetCleaningState_Event__request,  // size() function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__request,  // get_const(index) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__request,  // get(index) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__fetch_function__SetCleaningState_Event__request,  // fetch(index, &value) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__assign_function__SetCleaningState_Event__request,  // assign(index, value) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__resize_function__SetCleaningState_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event, response),  // bytes offset in struct
    NULL,  // default value
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__size_function__SetCleaningState_Event__response,  // size() function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_const_function__SetCleaningState_Event__response,  // get_const(index) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__get_function__SetCleaningState_Event__response,  // get(index) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__fetch_function__SetCleaningState_Event__response,  // fetch(index, &value) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__assign_function__SetCleaningState_Event__response,  // assign(index, value) function pointer
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__resize_function__SetCleaningState_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_members = {
  "yahboom_rosmaster_msgs__srv",  // message namespace
  "SetCleaningState_Event",  // message name
  3,  // number of fields
  sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event),
  false,  // has_any_key_member_
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_member_array,  // message members
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_type_support_handle = {
  0,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_members,
  get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_rosmaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)() {
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)();
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_type_support_handle.typesupport_identifier) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yahboom_rosmaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_members = {
  "yahboom_rosmaster_msgs__srv",  // service namespace
  "SetCleaningState",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle,
  NULL,  // response message
  // yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle
  NULL  // event_message
  // yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle
};


static rosidl_service_type_support_t yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_type_support_handle = {
  0,
  &yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_members,
  get_service_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__rosidl_typesupport_introspection_c__SetCleaningState_Request_message_type_support_handle,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__rosidl_typesupport_introspection_c__SetCleaningState_Response_message_type_support_handle,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__rosidl_typesupport_introspection_c__SetCleaningState_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    yahboom_rosmaster_msgs,
    srv,
    SetCleaningState
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    yahboom_rosmaster_msgs,
    srv,
    SetCleaningState
  ),
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_rosmaster_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState)(void) {
  if (!yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_type_support_handle.typesupport_identifier) {
    yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)()->data;
  }

  return &yahboom_rosmaster_msgs__srv__detail__set_cleaning_state__rosidl_typesupport_introspection_c__SetCleaningState_service_type_support_handle;
}
