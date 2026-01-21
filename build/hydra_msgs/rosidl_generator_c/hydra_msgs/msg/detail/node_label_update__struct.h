// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/node_label_update.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/NodeLabelUpdate in the package hydra_msgs.
typedef struct hydra_msgs__msg__NodeLabelUpdate
{
  uint64_t node_id;
  uint32_t label;
} hydra_msgs__msg__NodeLabelUpdate;

// Struct for a sequence of hydra_msgs__msg__NodeLabelUpdate.
typedef struct hydra_msgs__msg__NodeLabelUpdate__Sequence
{
  hydra_msgs__msg__NodeLabelUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__NodeLabelUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_H_
