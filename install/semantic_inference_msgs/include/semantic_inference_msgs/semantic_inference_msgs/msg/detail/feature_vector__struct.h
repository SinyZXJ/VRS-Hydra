// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FeatureVector in the package semantic_inference_msgs.
/**
  * This message contains an arbitrary vector of feature data
 */
typedef struct semantic_inference_msgs__msg__FeatureVector
{
  rosidl_runtime_c__float__Sequence data;
} semantic_inference_msgs__msg__FeatureVector;

// Struct for a sequence of semantic_inference_msgs__msg__FeatureVector.
typedef struct semantic_inference_msgs__msg__FeatureVector__Sequence
{
  semantic_inference_msgs__msg__FeatureVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__msg__FeatureVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__STRUCT_H_
