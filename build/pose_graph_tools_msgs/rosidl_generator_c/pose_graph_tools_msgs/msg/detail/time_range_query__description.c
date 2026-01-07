// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/time_range_query__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__TimeRangeQuery__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xe2, 0x7a, 0xed, 0x0f, 0x41, 0x8c, 0x68,
      0x94, 0xb0, 0x47, 0xf9, 0x7e, 0x52, 0xc8, 0xda,
      0x02, 0x35, 0x06, 0x4c, 0x9d, 0x14, 0x36, 0x56,
      0x64, 0x93, 0x6c, 0x00, 0x40, 0x98, 0xd5, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pose_graph_tools_msgs__msg__TimeRangeQuery__TYPE_NAME[] = "pose_graph_tools_msgs/msg/TimeRangeQuery";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__header[] = "header";
static char pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__source_robot_id[] = "source_robot_id";
static char pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__destination_robot_id[] = "destination_robot_id";
static char pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__start[] = "start";
static char pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__end[] = "end";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__TimeRangeQuery__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__source_robot_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__destination_robot_id, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELD_NAME__end, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pose_graph_tools_msgs__msg__TimeRangeQuery__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__TimeRangeQuery__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__TimeRangeQuery__TYPE_NAME, 40, 40},
      {pose_graph_tools_msgs__msg__TimeRangeQuery__FIELDS, 5, 5},
    },
    {pose_graph_tools_msgs__msg__TimeRangeQuery__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint32 source_robot_id        # Robot that sends this request\n"
  "uint32 destination_robot_id   # Robot that receives this request\n"
  "builtin_interfaces/Time start # Start of time range\n"
  "builtin_interfaces/Time end   # End of time range";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__TimeRangeQuery__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__TimeRangeQuery__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 252, 252},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__TimeRangeQuery__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__TimeRangeQuery__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
