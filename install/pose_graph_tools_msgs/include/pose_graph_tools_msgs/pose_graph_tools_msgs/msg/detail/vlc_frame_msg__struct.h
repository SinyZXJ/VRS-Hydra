// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frame_msg.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'descriptors_mat'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'versors'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'depths'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'submap_from_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/VLCFrameMsg in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__VLCFrameMsg
{
  uint32_t robot_id;
  uint32_t pose_id;
  uint32_t submap_id;
  /// Descriptor of all keypoints stored as a matrix.
  sensor_msgs__msg__Image descriptors_mat;
  /// Bearing vector of each keypoint expressed as a 3D vector.
  sensor_msgs__msg__PointCloud2 versors;
  /// Depth of each keypoint. The 3D keypoint v can be recovered from the depth d and bearing u by v = d * u / u
  rosidl_runtime_c__float__Sequence depths;
  geometry_msgs__msg__Pose submap_from_pose;
} pose_graph_tools_msgs__msg__VLCFrameMsg;

// Struct for a sequence of pose_graph_tools_msgs__msg__VLCFrameMsg.
typedef struct pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence
{
  pose_graph_tools_msgs__msg__VLCFrameMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_H_
