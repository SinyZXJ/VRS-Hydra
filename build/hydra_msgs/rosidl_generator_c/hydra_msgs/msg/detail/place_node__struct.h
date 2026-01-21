// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PlaceNode in the package hydra_msgs.
typedef struct hydra_msgs__msg__PlaceNode
{
  uint64_t node_id;
  geometry_msgs__msg__Point position;
} hydra_msgs__msg__PlaceNode;

// Struct for a sequence of hydra_msgs__msg__PlaceNode.
typedef struct hydra_msgs__msg__PlaceNode__Sequence
{
  hydra_msgs__msg__PlaceNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__PlaceNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_H_
