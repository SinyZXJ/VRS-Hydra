// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/label_update_request.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__STRUCT_H_
#define HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__STRUCT_H_

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
// Member 'updates'
#include "hydra_msgs/msg/detail/node_label_update__struct.h"

/// Struct defined in msg/LabelUpdateRequest in the package hydra_msgs.
typedef struct hydra_msgs__msg__LabelUpdateRequest
{
  std_msgs__msg__Header header;
  hydra_msgs__msg__NodeLabelUpdate__Sequence updates;
} hydra_msgs__msg__LabelUpdateRequest;

// Struct for a sequence of hydra_msgs__msg__LabelUpdateRequest.
typedef struct hydra_msgs__msg__LabelUpdateRequest__Sequence
{
  hydra_msgs__msg__LabelUpdateRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__msg__LabelUpdateRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__STRUCT_H_
