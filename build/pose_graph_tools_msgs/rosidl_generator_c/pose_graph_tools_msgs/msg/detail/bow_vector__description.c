// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__BowVector__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xce, 0x43, 0x4b, 0x4c, 0x83, 0x48, 0x8d,
      0x80, 0x35, 0x4d, 0x28, 0xc8, 0x39, 0x64, 0xdc,
      0xbb, 0x55, 0x9d, 0xe1, 0x27, 0x27, 0xc3, 0x74,
      0x1a, 0xdf, 0x3d, 0x2e, 0xb0, 0x74, 0x79, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pose_graph_tools_msgs__msg__BowVector__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowVector";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__BowVector__FIELD_NAME__word_ids[] = "word_ids";
static char pose_graph_tools_msgs__msg__BowVector__FIELD_NAME__word_values[] = "word_values";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__BowVector__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__BowVector__FIELD_NAME__word_ids, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowVector__FIELD_NAME__word_values, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__BowVector__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__BowVector__TYPE_NAME, 35, 35},
      {pose_graph_tools_msgs__msg__BowVector__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32[] word_ids\n"
  "float32[] word_values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__BowVector__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__BowVector__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__BowVector__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__BowVector__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
