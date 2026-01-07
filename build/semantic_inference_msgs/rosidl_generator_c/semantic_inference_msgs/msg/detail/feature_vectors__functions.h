// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vectors.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__FUNCTIONS_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "semantic_inference_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "semantic_inference_msgs/msg/detail/feature_vectors__struct.h"

/// Initialize msg/FeatureVectors message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * semantic_inference_msgs__msg__FeatureVectors
 * )) before or use
 * semantic_inference_msgs__msg__FeatureVectors__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__init(semantic_inference_msgs__msg__FeatureVectors * msg);

/// Finalize msg/FeatureVectors message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVectors__fini(semantic_inference_msgs__msg__FeatureVectors * msg);

/// Create msg/FeatureVectors message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * semantic_inference_msgs__msg__FeatureVectors__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
semantic_inference_msgs__msg__FeatureVectors *
semantic_inference_msgs__msg__FeatureVectors__create(void);

/// Destroy msg/FeatureVectors message.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVectors__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVectors__destroy(semantic_inference_msgs__msg__FeatureVectors * msg);

/// Check for msg/FeatureVectors message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__are_equal(const semantic_inference_msgs__msg__FeatureVectors * lhs, const semantic_inference_msgs__msg__FeatureVectors * rhs);

/// Copy a msg/FeatureVectors message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__copy(
  const semantic_inference_msgs__msg__FeatureVectors * input,
  semantic_inference_msgs__msg__FeatureVectors * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_type_hash_t *
semantic_inference_msgs__msg__FeatureVectors__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeDescription *
semantic_inference_msgs__msg__FeatureVectors__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeSource *
semantic_inference_msgs__msg__FeatureVectors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
semantic_inference_msgs__msg__FeatureVectors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FeatureVectors messages.
/**
 * It allocates the memory for the number of elements and calls
 * semantic_inference_msgs__msg__FeatureVectors__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__Sequence__init(semantic_inference_msgs__msg__FeatureVectors__Sequence * array, size_t size);

/// Finalize array of msg/FeatureVectors messages.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVectors__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVectors__Sequence__fini(semantic_inference_msgs__msg__FeatureVectors__Sequence * array);

/// Create array of msg/FeatureVectors messages.
/**
 * It allocates the memory for the array and calls
 * semantic_inference_msgs__msg__FeatureVectors__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
semantic_inference_msgs__msg__FeatureVectors__Sequence *
semantic_inference_msgs__msg__FeatureVectors__Sequence__create(size_t size);

/// Destroy array of msg/FeatureVectors messages.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVectors__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVectors__Sequence__destroy(semantic_inference_msgs__msg__FeatureVectors__Sequence * array);

/// Check for msg/FeatureVectors message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__Sequence__are_equal(const semantic_inference_msgs__msg__FeatureVectors__Sequence * lhs, const semantic_inference_msgs__msg__FeatureVectors__Sequence * rhs);

/// Copy an array of msg/FeatureVectors messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVectors__Sequence__copy(
  const semantic_inference_msgs__msg__FeatureVectors__Sequence * input,
  semantic_inference_msgs__msg__FeatureVectors__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__FUNCTIONS_H_
