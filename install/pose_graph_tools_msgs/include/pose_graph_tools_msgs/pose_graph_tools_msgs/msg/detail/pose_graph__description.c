// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/pose_graph__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__PoseGraph__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x10, 0x61, 0x1e, 0xb1, 0x4a, 0xdb, 0x91,
      0x14, 0x0b, 0x5d, 0xeb, 0xb2, 0x88, 0x86, 0x5b,
      0xf9, 0x88, 0x1a, 0xd3, 0x58, 0x35, 0x62, 0x2b,
      0x2e, 0x3a, 0x0f, 0xc5, 0xc9, 0x05, 0xfb, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t pose_graph_tools_msgs__msg__PoseGraphEdge__EXPECTED_HASH = {1, {
    0x89, 0xf0, 0x82, 0x31, 0x69, 0x85, 0x61, 0x72,
    0x91, 0x7c, 0xce, 0x15, 0x38, 0x07, 0x37, 0x40,
    0xcb, 0x5a, 0x3d, 0x0d, 0xe9, 0x86, 0x05, 0x3f,
    0xfa, 0x0a, 0x19, 0xd3, 0xe1, 0x77, 0x71, 0x5d,
  }};
static const rosidl_type_hash_t pose_graph_tools_msgs__msg__PoseGraphNode__EXPECTED_HASH = {1, {
    0xef, 0x37, 0x8c, 0xac, 0xf3, 0x93, 0x8b, 0xcf,
    0x84, 0x14, 0x7c, 0x37, 0x62, 0x00, 0x13, 0xf5,
    0xdf, 0x4a, 0x12, 0x64, 0xc9, 0xa4, 0xcf, 0x9d,
    0x53, 0xb8, 0xa7, 0x0b, 0x5f, 0x0d, 0x6b, 0x93,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pose_graph_tools_msgs__msg__PoseGraph__TYPE_NAME[] = "pose_graph_tools_msgs/msg/PoseGraph";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char pose_graph_tools_msgs__msg__PoseGraphEdge__TYPE_NAME[] = "pose_graph_tools_msgs/msg/PoseGraphEdge";
static char pose_graph_tools_msgs__msg__PoseGraphNode__TYPE_NAME[] = "pose_graph_tools_msgs/msg/PoseGraphNode";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__header[] = "header";
static char pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__nodes[] = "nodes";
static char pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__edges[] = "edges";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__PoseGraph__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__nodes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pose_graph_tools_msgs__msg__PoseGraphNode__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__PoseGraph__FIELD_NAME__edges, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pose_graph_tools_msgs__msg__PoseGraphEdge__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pose_graph_tools_msgs__msg__PoseGraph__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__PoseGraphEdge__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__PoseGraphNode__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__PoseGraph__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__PoseGraph__TYPE_NAME, 35, 35},
      {pose_graph_tools_msgs__msg__PoseGraph__FIELDS, 3, 3},
    },
    {pose_graph_tools_msgs__msg__PoseGraph__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pose_graph_tools_msgs__msg__PoseGraphEdge__EXPECTED_HASH, pose_graph_tools_msgs__msg__PoseGraphEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = pose_graph_tools_msgs__msg__PoseGraphEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pose_graph_tools_msgs__msg__PoseGraphNode__EXPECTED_HASH, pose_graph_tools_msgs__msg__PoseGraphNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = pose_graph_tools_msgs__msg__PoseGraphNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Timestamp of last update and map frame ID\n"
  "std_msgs/Header header\n"
  "\n"
  "# Nodes and edges\n"
  "pose_graph_tools_msgs/PoseGraphNode[] nodes\n"
  "pose_graph_tools_msgs/PoseGraphEdge[] edges";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__PoseGraph__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__PoseGraph__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 174, 174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__PoseGraph__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__PoseGraph__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *pose_graph_tools_msgs__msg__PoseGraphEdge__get_individual_type_description_source(NULL);
    sources[6] = *pose_graph_tools_msgs__msg__PoseGraphNode__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
