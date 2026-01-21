// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/BowQueries.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/bow_queries__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__BowQueries__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0x95, 0x48, 0xcb, 0x4f, 0xd2, 0x7b, 0xc1,
      0x78, 0x56, 0xbc, 0xf5, 0xe8, 0x25, 0x89, 0x08,
      0x43, 0x3d, 0xbe, 0x1f, 0x9c, 0x16, 0xf9, 0xb4,
      0x32, 0xc0, 0xfc, 0x15, 0xfc, 0xb6, 0x3a, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"
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
static const rosidl_type_hash_t pose_graph_tools_msgs__msg__BowQuery__EXPECTED_HASH = {1, {
    0x0b, 0xa1, 0x5a, 0xb5, 0xbc, 0x11, 0xde, 0x64,
    0x27, 0xa5, 0x8c, 0x10, 0x92, 0x74, 0xbe, 0xd5,
    0x2f, 0x20, 0x01, 0xaf, 0x85, 0xbc, 0x8b, 0x0c,
    0xfc, 0x57, 0x11, 0x4d, 0x5e, 0x74, 0x63, 0x8d,
  }};
static const rosidl_type_hash_t pose_graph_tools_msgs__msg__BowVector__EXPECTED_HASH = {1, {
    0x83, 0xce, 0x43, 0x4b, 0x4c, 0x83, 0x48, 0x8d,
    0x80, 0x35, 0x4d, 0x28, 0xc8, 0x39, 0x64, 0xdc,
    0xbb, 0x55, 0x9d, 0xe1, 0x27, 0x27, 0xc3, 0x74,
    0x1a, 0xdf, 0x3d, 0x2e, 0xb0, 0x74, 0x79, 0xd4,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pose_graph_tools_msgs__msg__BowQueries__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowQueries";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowQuery";
static char pose_graph_tools_msgs__msg__BowVector__TYPE_NAME[] = "pose_graph_tools_msgs/msg/BowVector";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__header[] = "header";
static char pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__destination_robot_id[] = "destination_robot_id";
static char pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__queries[] = "queries";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__BowQueries__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__destination_robot_id, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowQueries__FIELD_NAME__queries, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pose_graph_tools_msgs__msg__BowQueries__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowQuery__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__BowVector__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__BowQueries__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__BowQueries__TYPE_NAME, 36, 36},
      {pose_graph_tools_msgs__msg__BowQueries__FIELDS, 3, 3},
    },
    {pose_graph_tools_msgs__msg__BowQueries__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pose_graph_tools_msgs__msg__BowQuery__EXPECTED_HASH, pose_graph_tools_msgs__msg__BowQuery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pose_graph_tools_msgs__msg__BowQuery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pose_graph_tools_msgs__msg__BowVector__EXPECTED_HASH, pose_graph_tools_msgs__msg__BowVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = pose_graph_tools_msgs__msg__BowVector__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint32 destination_robot_id\n"
  "pose_graph_tools_msgs/BowQuery[] queries";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__BowQueries__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__BowQueries__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 92, 92},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__BowQueries__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__BowQueries__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pose_graph_tools_msgs__msg__BowQuery__get_individual_type_description_source(NULL);
    sources[3] = *pose_graph_tools_msgs__msg__BowVector__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
