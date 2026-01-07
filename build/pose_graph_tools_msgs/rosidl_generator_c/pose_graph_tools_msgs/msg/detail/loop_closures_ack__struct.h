// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures_ack.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'robot_src'
// Member 'frame_src'
// Member 'robot_dst'
// Member 'frame_dst'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LoopClosuresAck in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__LoopClosuresAck
{
  uint16_t publishing_robot_id;
  uint16_t destination_robot_id;
  rosidl_runtime_c__uint32__Sequence robot_src;
  rosidl_runtime_c__uint32__Sequence frame_src;
  rosidl_runtime_c__uint32__Sequence robot_dst;
  rosidl_runtime_c__uint32__Sequence frame_dst;
} pose_graph_tools_msgs__msg__LoopClosuresAck;

// Struct for a sequence of pose_graph_tools_msgs__msg__LoopClosuresAck.
typedef struct pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence
{
  pose_graph_tools_msgs__msg__LoopClosuresAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_H_
