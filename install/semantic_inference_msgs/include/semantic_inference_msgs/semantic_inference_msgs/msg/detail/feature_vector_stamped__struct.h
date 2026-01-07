// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector_stamped.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_H_

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
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.h"

/// Struct defined in msg/FeatureVectorStamped in the package semantic_inference_msgs.
/**
  * This message contains a stamped arbitrary vector of feature data
 */
typedef struct semantic_inference_msgs__msg__FeatureVectorStamped
{
  /// source header where the feature was extracted from
  std_msgs__msg__Header header;
  /// underlying feature vector
  semantic_inference_msgs__msg__FeatureVector feature;
} semantic_inference_msgs__msg__FeatureVectorStamped;

// Struct for a sequence of semantic_inference_msgs__msg__FeatureVectorStamped.
typedef struct semantic_inference_msgs__msg__FeatureVectorStamped__Sequence
{
  semantic_inference_msgs__msg__FeatureVectorStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__msg__FeatureVectorStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__STRUCT_H_
