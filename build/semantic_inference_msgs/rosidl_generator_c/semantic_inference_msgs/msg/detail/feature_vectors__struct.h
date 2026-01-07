// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vectors.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.h"

/// Struct defined in msg/FeatureVectors in the package semantic_inference_msgs.
typedef struct semantic_inference_msgs__msg__FeatureVectors
{
  /// optional
  rosidl_runtime_c__String__Sequence names;
  semantic_inference_msgs__msg__FeatureVector__Sequence features;
} semantic_inference_msgs__msg__FeatureVectors;

// Struct for a sequence of semantic_inference_msgs__msg__FeatureVectors.
typedef struct semantic_inference_msgs__msg__FeatureVectors__Sequence
{
  semantic_inference_msgs__msg__FeatureVectors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__msg__FeatureVectors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__STRUCT_H_
