// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCleaningState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCleaningState_Request_type_support_ids_t;

static const _SetCleaningState_Request_type_support_ids_t _SetCleaningState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCleaningState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCleaningState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCleaningState_Request_type_support_symbol_names_t _SetCleaningState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)),
  }
};

typedef struct _SetCleaningState_Request_type_support_data_t
{
  void * data[2];
} _SetCleaningState_Request_type_support_data_t;

static _SetCleaningState_Request_type_support_data_t _SetCleaningState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCleaningState_Request_message_typesupport_map = {
  2,
  "yahboom_rosmaster_msgs",
  &_SetCleaningState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCleaningState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCleaningState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCleaningState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCleaningState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>()
{
  return &::yahboom_rosmaster_msgs::srv::rosidl_typesupport_cpp::SetCleaningState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Request)() {
  return get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCleaningState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCleaningState_Response_type_support_ids_t;

static const _SetCleaningState_Response_type_support_ids_t _SetCleaningState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCleaningState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCleaningState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCleaningState_Response_type_support_symbol_names_t _SetCleaningState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)),
  }
};

typedef struct _SetCleaningState_Response_type_support_data_t
{
  void * data[2];
} _SetCleaningState_Response_type_support_data_t;

static _SetCleaningState_Response_type_support_data_t _SetCleaningState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCleaningState_Response_message_typesupport_map = {
  2,
  "yahboom_rosmaster_msgs",
  &_SetCleaningState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCleaningState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCleaningState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCleaningState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCleaningState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>()
{
  return &::yahboom_rosmaster_msgs::srv::rosidl_typesupport_cpp::SetCleaningState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Response)() {
  return get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCleaningState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCleaningState_Event_type_support_ids_t;

static const _SetCleaningState_Event_type_support_ids_t _SetCleaningState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCleaningState_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCleaningState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCleaningState_Event_type_support_symbol_names_t _SetCleaningState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)),
  }
};

typedef struct _SetCleaningState_Event_type_support_data_t
{
  void * data[2];
} _SetCleaningState_Event_type_support_data_t;

static _SetCleaningState_Event_type_support_data_t _SetCleaningState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCleaningState_Event_message_typesupport_map = {
  2,
  "yahboom_rosmaster_msgs",
  &_SetCleaningState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCleaningState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCleaningState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCleaningState_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCleaningState_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>()
{
  return &::yahboom_rosmaster_msgs::srv::rosidl_typesupport_cpp::SetCleaningState_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState_Event)() {
  return get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace yahboom_rosmaster_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCleaningState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCleaningState_type_support_ids_t;

static const _SetCleaningState_type_support_ids_t _SetCleaningState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCleaningState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCleaningState_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCleaningState_type_support_symbol_names_t _SetCleaningState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState)),
  }
};

typedef struct _SetCleaningState_type_support_data_t
{
  void * data[2];
} _SetCleaningState_type_support_data_t;

static _SetCleaningState_type_support_data_t _SetCleaningState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCleaningState_service_typesupport_map = {
  2,
  "yahboom_rosmaster_msgs",
  &_SetCleaningState_service_typesupport_ids.typesupport_identifier[0],
  &_SetCleaningState_service_typesupport_symbol_names.symbol_name[0],
  &_SetCleaningState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCleaningState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCleaningState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<yahboom_rosmaster_msgs::srv::SetCleaningState>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<yahboom_rosmaster_msgs::srv::SetCleaningState>,
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_hash,
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_description,
  &yahboom_rosmaster_msgs__srv__SetCleaningState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace yahboom_rosmaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState>()
{
  return &::yahboom_rosmaster_msgs::srv::rosidl_typesupport_cpp::SetCleaningState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, yahboom_rosmaster_msgs, srv, SetCleaningState)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<yahboom_rosmaster_msgs::srv::SetCleaningState>();
}

#ifdef __cplusplus
}
#endif
