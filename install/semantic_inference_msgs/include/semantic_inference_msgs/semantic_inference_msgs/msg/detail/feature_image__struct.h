// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_image.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_H_

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
// Member 'mask_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.h"

/// Struct defined in msg/FeatureImage in the package semantic_inference_msgs.
/**
  * Message containing an image masked by instance ids and associated feature vectors
 */
typedef struct semantic_inference_msgs__msg__FeatureImage
{
  /// Header of image that the features were sourced from
  std_msgs__msg__Header header;
  /// Mask IDs if non-sequential (should be empty otherwise)
  rosidl_runtime_c__int32__Sequence mask_ids;
  /// Masked image by segment/feature ID
  sensor_msgs__msg__Image image;
  /// Feature vectors for each segment. Size must be equal to the number of masks
  semantic_inference_msgs__msg__FeatureVector__Sequence features;
} semantic_inference_msgs__msg__FeatureImage;

// Struct for a sequence of semantic_inference_msgs__msg__FeatureImage.
typedef struct semantic_inference_msgs__msg__FeatureImage__Sequence
{
  semantic_inference_msgs__msg__FeatureImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__msg__FeatureImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__STRUCT_H_
