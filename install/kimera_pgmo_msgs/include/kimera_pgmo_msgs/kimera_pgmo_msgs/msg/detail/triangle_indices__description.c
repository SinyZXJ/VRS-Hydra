// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__msg__TriangleIndices__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0x02, 0x3f, 0xd1, 0xac, 0xe6, 0x25, 0xff,
      0x25, 0xe7, 0x0b, 0xf6, 0x02, 0xb7, 0x4c, 0xed,
      0x6a, 0x9a, 0xec, 0xc3, 0x3d, 0x47, 0x25, 0xe2,
      0x05, 0x3d, 0x1e, 0x9a, 0xb3, 0x42, 0x88, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME[] = "kimera_pgmo_msgs/msg/TriangleIndices";

// Define type names, field names, and default values
static char kimera_pgmo_msgs__msg__TriangleIndices__FIELD_NAME__vertex_indices[] = "vertex_indices";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__msg__TriangleIndices__FIELDS[] = {
  {
    {kimera_pgmo_msgs__msg__TriangleIndices__FIELD_NAME__vertex_indices, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__msg__TriangleIndices__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME, 36, 36},
      {kimera_pgmo_msgs__msg__TriangleIndices__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Definition of a triangle's vertices\n"
  "uint32[3] vertex_indices";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__msg__TriangleIndices__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__msg__TriangleIndices__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__msg__TriangleIndices__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
