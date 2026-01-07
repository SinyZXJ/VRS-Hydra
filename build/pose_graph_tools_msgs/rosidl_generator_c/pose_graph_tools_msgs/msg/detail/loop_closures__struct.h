// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'edges'
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__struct.h"

/// Struct defined in msg/LoopClosures in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__LoopClosures
{
  uint16_t publishing_robot_id;
  uint16_t destination_robot_id;
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence edges;
} pose_graph_tools_msgs__msg__LoopClosures;

// Struct for a sequence of pose_graph_tools_msgs__msg__LoopClosures.
typedef struct pose_graph_tools_msgs__msg__LoopClosures__Sequence
{
  pose_graph_tools_msgs__msg__LoopClosures * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__LoopClosures__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__STRUCT_H_
