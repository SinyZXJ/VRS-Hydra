// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_node.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseGraphNode in the package pose_graph_tools_msgs.
/**
  * Timestamp and frame ID of the pose
 */
typedef struct pose_graph_tools_msgs__msg__PoseGraphNode
{
  std_msgs__msg__Header header;
  /// Robot ID of the pose
  int32_t robot_id;
  /// Key of the pose
  uint64_t key;
  /// Pose of the robot body
  geometry_msgs__msg__Pose pose;
} pose_graph_tools_msgs__msg__PoseGraphNode;

// Struct for a sequence of pose_graph_tools_msgs__msg__PoseGraphNode.
typedef struct pose_graph_tools_msgs__msg__PoseGraphNode__Sequence
{
  pose_graph_tools_msgs__msg__PoseGraphNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__PoseGraphNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__STRUCT_H_
