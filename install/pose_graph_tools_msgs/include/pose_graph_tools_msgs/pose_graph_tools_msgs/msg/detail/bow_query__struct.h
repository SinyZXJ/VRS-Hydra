// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_query.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'bow_vector'
#include "pose_graph_tools_msgs/msg/detail/bow_vector__struct.h"

/// Struct defined in msg/BowQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__BowQuery
{
  uint32_t robot_id;
  uint32_t pose_id;
  pose_graph_tools_msgs__msg__BowVector bow_vector;
} pose_graph_tools_msgs__msg__BowQuery;

// Struct for a sequence of pose_graph_tools_msgs__msg__BowQuery.
typedef struct pose_graph_tools_msgs__msg__BowQuery__Sequence
{
  pose_graph_tools_msgs__msg__BowQuery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__BowQuery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_H_
