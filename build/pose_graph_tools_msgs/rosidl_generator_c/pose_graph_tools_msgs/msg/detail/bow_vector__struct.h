// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_vector.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'word_ids'
// Member 'word_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BowVector in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__BowVector
{
  rosidl_runtime_c__uint32__Sequence word_ids;
  rosidl_runtime_c__float__Sequence word_values;
} pose_graph_tools_msgs__msg__BowVector;

// Struct for a sequence of pose_graph_tools_msgs__msg__BowVector.
typedef struct pose_graph_tools_msgs__msg__BowVector__Sequence
{
  pose_graph_tools_msgs__msg__BowVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__BowVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_H_
