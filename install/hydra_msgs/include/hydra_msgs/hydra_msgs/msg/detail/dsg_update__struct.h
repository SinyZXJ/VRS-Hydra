// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/dsg_update.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_H_

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
// Member 'deleted_nodes'
// Member 'deleted_edges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DsgUpdate in the package hydra_msgs.
typedef struct hydra_msgs__msg__DsgUpdate
{
  std_msgs__msg__Header header;
  /// serialized nodes that are active
  rosidl_runtime_c__uint8__Sequence layer_contents;
  /// node ids that were deleted
  rosidl_runtime_c__uint64__Sequence deleted_nodes;
  /// node ids for edges that were deleted
  rosidl_runtime_c__uint64__Sequence deleted_edges;
  /// whether or not the message contains the entire scene graph
  bool full_update;
  /// update index
  int64_t sequence_number;
} hydra_msgs__msg__DsgUpdate;

// Struct for a sequence of hydra_msgs__msg__DsgUpdate.
typedef struct hydra_msgs__msg__DsgUpdate__Sequence
{
  hydra_msgs__msg__DsgUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__DsgUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__STRUCT_H_
