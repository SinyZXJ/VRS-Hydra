// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x19, 0x5d, 0x19, 0xb9, 0x2a, 0x7a, 0xc2,
      0x13, 0x55, 0xe2, 0x82, 0xa3, 0x8a, 0xcd, 0x38,
      0x93, 0xbf, 0x8c, 0x06, 0xc5, 0x32, 0xef, 0x84,
      0x5c, 0x35, 0x87, 0x4a, 0x26, 0x12, 0xe6, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pose_graph_tools_msgs__msg__LoopClosuresAck__TYPE_NAME[] = "pose_graph_tools_msgs/msg/LoopClosuresAck";

// Define type names, field names, and default values
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__publishing_robot_id[] = "publishing_robot_id";
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__destination_robot_id[] = "destination_robot_id";
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__robot_src[] = "robot_src";
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__frame_src[] = "frame_src";
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__robot_dst[] = "robot_dst";
static char pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__frame_dst[] = "frame_dst";

static rosidl_runtime_c__type_description__Field pose_graph_tools_msgs__msg__LoopClosuresAck__FIELDS[] = {
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__publishing_robot_id, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__destination_robot_id, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__robot_src, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__frame_src, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__robot_dst, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELD_NAME__frame_dst, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pose_graph_tools_msgs__msg__LoopClosuresAck__TYPE_NAME, 41, 41},
      {pose_graph_tools_msgs__msg__LoopClosuresAck__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 publishing_robot_id\n"
  "uint16 destination_robot_id\n"
  "uint32[] robot_src\n"
  "uint32[] frame_src\n"
  "uint32[] robot_dst\n"
  "uint32[] frame_dst";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__LoopClosuresAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pose_graph_tools_msgs__msg__LoopClosuresAck__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 131, 131},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pose_graph_tools_msgs__msg__LoopClosuresAck__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
