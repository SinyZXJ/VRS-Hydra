// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__BowQuery__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0xa1, 0x5a, 0xb5, 0xbc, 0x11, 0xde, 0x64,
      0x27, 0xa5, 0x8c, 0x10, 0x92, 0x74, 0xbe, 0xd5,
      0x2f, 0x20, 0x01, 0xaf, 0x85, 0xbc, 0x8b, 0x0c,
      0xfc, 0x57, 0x11, 0x4d, 0x5e, 0x74, 0x63, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t pose_graph_tools_msgs__msg__BowVector__EXPECTED_HASH = {1, {
    0x83, 0xce, 0x43, 0x4b, 0x4c, 0x83, 0x48, 0x8d,
    0x80, 0x35, 0x4d, 0x28, 0xc8, 0x39, 0x64, 0xdc,
    0xbb, 0x55, 0x9d, 0xe1, 0x27, 0x27, 0xc3, 0x74,
    0x1a, 0xdf, 0x3d, 0x2e, 0xb0, 0x74, 0x79, 0xd4,
  }};
#endif

static char pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowQuery";
static char pose_graph_tools_msgs__msg__BowVector__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowVector";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__robot_id[] = "robot_id";
static char pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__pose_id[] = "pose_id";
static char pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__bow_vector[] = "bow_vector";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__BowQuery__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__pose_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowQuery__FIELD_NAME__bow_vector, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pose_graph_tools_msgs__msg__BowVector__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pose_graph_tools_msgs__msg__BowQuery__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {pose_graph_tools_msgs__msg__BowVector__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__BowQuery__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME, 34, 34},
      {pose_graph_tools_msgs__msg__BowQuery__FIELDS, 3, 3},
    },
    {pose_graph_tools_msgs__msg__BowQuery__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&pose_graph_tools_msgs__msg__BowVector__EXPECTED_HASH, pose_graph_tools_msgs__msg__BowVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = pose_graph_tools_msgs__msg__BowVector__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 robot_id\n"
  "uint32 pose_id\n"
  "pose_graph_tools_msgs/BowVector bow_vector";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__BowQuery__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__BowQuery__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__BowQuery__get_individual_type_description_source(NULL),
    sources[1] = *pose_graph_tools_msgs__msg__BowVector__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
