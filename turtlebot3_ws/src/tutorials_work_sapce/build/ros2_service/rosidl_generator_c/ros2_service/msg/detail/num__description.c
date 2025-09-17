// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_service:msg/Num.idl
// generated code does not contain a copyright notice

#include "ros2_service/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_service
const rosidl_type_hash_t *
ros2_service__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0x10, 0xe0, 0x51, 0x04, 0xa7, 0x1a, 0x74,
      0xf9, 0xe3, 0x5d, 0xca, 0xd8, 0xb1, 0x86, 0xa5,
      0x70, 0x54, 0xe5, 0x83, 0x8c, 0x69, 0x6f, 0x82,
      0xe9, 0x51, 0x4e, 0x60, 0xa4, 0x08, 0x46, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_service__msg__Num__TYPE_NAME[] = "ros2_service/msg/Num";

// Define type names, field names, and default values
static char ros2_service__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field ros2_service__msg__Num__FIELDS[] = {
  {
    {ros2_service__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_service__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_service__msg__Num__TYPE_NAME, 20, 20},
      {ros2_service__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_service__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_service__msg__Num__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_service__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_service__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
