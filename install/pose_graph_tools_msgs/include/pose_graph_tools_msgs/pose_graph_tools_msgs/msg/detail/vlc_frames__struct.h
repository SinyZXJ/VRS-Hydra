// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/VLCFrames.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frames.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__STRUCT_H_

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
// Member 'frames'
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.h"

/// Struct defined in msg/VLCFrames in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__VLCFrames
{
  std_msgs__msg__Header header;
  uint32_t destination_robot_id;
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence frames;
} pose_graph_tools_msgs__msg__VLCFrames;

// Struct for a sequence of pose_graph_tools_msgs__msg__VLCFrames.
typedef struct pose_graph_tools_msgs__msg__VLCFrames__Sequence
{
  pose_graph_tools_msgs__msg__VLCFrames * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__VLCFrames__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__STRUCT_H_
