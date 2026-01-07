// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/ActiveLayer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/active_layer.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__STRUCT_H_

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
// Member 'layer_contents'
#include "rosidl_runtime_c/string.h"
// Member 'deleted_nodes'
// Member 'deleted_edges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActiveLayer in the package hydra_msgs.
typedef struct hydra_msgs__msg__ActiveLayer
{
  std_msgs__msg__Header header;
  /// serialized nodes that are active
  rosidl_runtime_c__String layer_contents;
  /// nodes that were previously active and removed (rather than archived)
  rosidl_runtime_c__int64__Sequence deleted_nodes;
  /// edges that were removed
  rosidl_runtime_c__int64__Sequence deleted_edges;
} hydra_msgs__msg__ActiveLayer;

// Struct for a sequence of hydra_msgs__msg__ActiveLayer.
typedef struct hydra_msgs__msg__ActiveLayer__Sequence
{
  hydra_msgs__msg__ActiveLayer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__ActiveLayer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__STRUCT_H_
