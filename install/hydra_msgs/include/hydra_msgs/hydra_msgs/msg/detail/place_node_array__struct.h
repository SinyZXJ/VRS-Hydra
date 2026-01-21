// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node_array.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_H_

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
// Member 'nodes'
#include "hydra_msgs/msg/detail/place_node__struct.h"

/// Struct defined in msg/PlaceNodeArray in the package hydra_msgs.
typedef struct hydra_msgs__msg__PlaceNodeArray
{
  std_msgs__msg__Header header;
  hydra_msgs__msg__PlaceNode__Sequence nodes;
} hydra_msgs__msg__PlaceNodeArray;

// Struct for a sequence of hydra_msgs__msg__PlaceNodeArray.
typedef struct hydra_msgs__msg__PlaceNodeArray__Sequence
{
  hydra_msgs__msg__PlaceNodeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__PlaceNodeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_H_
