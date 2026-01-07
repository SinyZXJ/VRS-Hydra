// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/time_range_query.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_H_

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
// Member 'start'
// Member 'end'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TimeRangeQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__msg__TimeRangeQuery
{
  std_msgs__msg__Header header;
  /// Robot that sends this request
  uint32_t source_robot_id;
  /// Robot that receives this request
  uint32_t destination_robot_id;
  /// Start of time range
  builtin_interfaces__msg__Time start;
  /// End of time range
  builtin_interfaces__msg__Time end;
} pose_graph_tools_msgs__msg__TimeRangeQuery;

// Struct for a sequence of pose_graph_tools_msgs__msg__TimeRangeQuery.
typedef struct pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence
{
  pose_graph_tools_msgs__msg__TimeRangeQuery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_H_
