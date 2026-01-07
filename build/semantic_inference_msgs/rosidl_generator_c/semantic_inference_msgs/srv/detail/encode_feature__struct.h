// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semantic_inference_msgs:srv/EncodeFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/srv/encode_feature.h"


#ifndef SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_H_
#define SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EncodeFeature in the package semantic_inference_msgs.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Request
{
  rosidl_runtime_c__String prompt;
} semantic_inference_msgs__srv__EncodeFeature_Request;

// Struct for a sequence of semantic_inference_msgs__srv__EncodeFeature_Request.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Request__Sequence
{
  semantic_inference_msgs__srv__EncodeFeature_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__srv__EncodeFeature_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.h"

/// Struct defined in srv/EncodeFeature in the package semantic_inference_msgs.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Response
{
  semantic_inference_msgs__msg__FeatureVectorStamped feature;
} semantic_inference_msgs__srv__EncodeFeature_Response;

// Struct for a sequence of semantic_inference_msgs__srv__EncodeFeature_Response.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Response__Sequence
{
  semantic_inference_msgs__srv__EncodeFeature_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__srv__EncodeFeature_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  semantic_inference_msgs__srv__EncodeFeature_Event__request__MAX_SIZE = 1
};
// response
enum
{
  semantic_inference_msgs__srv__EncodeFeature_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/EncodeFeature in the package semantic_inference_msgs.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Event
{
  service_msgs__msg__ServiceEventInfo info;
  semantic_inference_msgs__srv__EncodeFeature_Request__Sequence request;
  semantic_inference_msgs__srv__EncodeFeature_Response__Sequence response;
} semantic_inference_msgs__srv__EncodeFeature_Event;

// Struct for a sequence of semantic_inference_msgs__srv__EncodeFeature_Event.
typedef struct semantic_inference_msgs__srv__EncodeFeature_Event__Sequence
{
  semantic_inference_msgs__srv__EncodeFeature_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semantic_inference_msgs__srv__EncodeFeature_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_H_
