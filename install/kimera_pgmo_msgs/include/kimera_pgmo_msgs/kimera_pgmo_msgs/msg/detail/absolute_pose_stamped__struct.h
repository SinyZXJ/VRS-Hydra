// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/absolute_pose_stamped.h"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__STRUCT_H_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__STRUCT_H_

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

/// Struct defined in msg/AbsolutePoseStamped in the package kimera_pgmo_msgs.
/**
  * This message encodes a relative SE(3) measurement
 */
typedef struct kimera_pgmo_msgs__msg__AbsolutePoseStamped
{
  /// Used for timestamp
  std_msgs__msg__Header header;
  /// ID of first node
  uint32_t idx;
  /// absolute pose
  geometry_msgs__msg__Pose pose;
} kimera_pgmo_msgs__msg__AbsolutePoseStamped;

// Struct for a sequence of kimera_pgmo_msgs__msg__AbsolutePoseStamped.
typedef struct kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence
{
  kimera_pgmo_msgs__msg__AbsolutePoseStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__msg__AbsolutePoseStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__STRUCT_H_
