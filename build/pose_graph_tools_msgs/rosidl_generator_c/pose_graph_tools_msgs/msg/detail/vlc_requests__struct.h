// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/VLCRequests.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_requests.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__STRUCT_H_

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
// Member 'pose_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VLCRequests in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__VLCRequests
{
  std_msgs__msg__Header header;
  /// Robot that sends this request
  uint32_t source_robot_id;
  /// Robot that receives this request
  uint32_t destination_robot_id;
  /// Pose IDs of requested VLC frames of the destination robot
  rosidl_runtime_c__uint32__Sequence pose_ids;
} pose_graph_tools_msgs__msg__VLCRequests;

// Struct for a sequence of pose_graph_tools_msgs__msg__VLCRequests.
typedef struct pose_graph_tools_msgs__msg__VLCRequests__Sequence
{
  pose_graph_tools_msgs__msg__VLCRequests * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__VLCRequests__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__STRUCT_H_
