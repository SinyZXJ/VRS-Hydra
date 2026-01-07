// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_edge.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * Type enums
 */
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__UNKNOWN = -1l
};

/// Constant 'ODOM'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__ODOM = 0l
};

/// Constant 'LOOPCLOSE'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__LOOPCLOSE = 1l
};

/// Constant 'LANDMARK'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__LANDMARK = 2l
};

/// Constant 'REJECTED_LOOPCLOSE'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__REJECTED_LOOPCLOSE = 3l
};

/// Constant 'MESH'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__MESH = 4l
};

/// Constant 'POSE_MESH'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__POSE_MESH = 5l
};

/// Constant 'MESH_POSE'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__MESH_POSE = 6l
};

/// Constant 'PRIOR'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__PRIOR = 7l
};

/// Constant 'REJECTED_PRIOR'.
enum
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__REJECTED_PRIOR = 8l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseGraphEdge in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__PoseGraphEdge
{
  std_msgs__msg__Header header;
  uint64_t key_from;
  uint64_t key_to;
  int32_t robot_from;
  int32_t robot_to;
  int32_t type;
  /// Transforms in ede
  geometry_msgs__msg__Pose pose;
  double covariance[36];
} pose_graph_tools_msgs__msg__PoseGraphEdge;

// Struct for a sequence of pose_graph_tools_msgs__msg__PoseGraphEdge.
typedef struct pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence
{
  pose_graph_tools_msgs__msg__PoseGraphEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_H_
