// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector.h"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__FUNCTIONS_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__FUNCTIONS_H_

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

#include "semantic_inference_msgs/msg/detail/feature_vector__struct.h"

/// Initialize msg/FeatureVector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * semantic_inference_msgs__msg__FeatureVector
 * )) before or use
 * semantic_inference_msgs__msg__FeatureVector__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVector__init(semantic_inference_msgs__msg__FeatureVector * msg);

/// Finalize msg/FeatureVector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVector__fini(semantic_inference_msgs__msg__FeatureVector * msg);

/// Create msg/FeatureVector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * semantic_inference_msgs__msg__FeatureVector__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
semantic_inference_msgs__msg__FeatureVector *
semantic_inference_msgs__msg__FeatureVector__create(void);

/// Destroy msg/FeatureVector message.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVector__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVector__destroy(semantic_inference_msgs__msg__FeatureVector * msg);

/// Check for msg/FeatureVector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVector__are_equal(const semantic_inference_msgs__msg__FeatureVector * lhs, const semantic_inference_msgs__msg__FeatureVector * rhs);

/// Copy a msg/FeatureVector message.
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
semantic_inference_msgs__msg__FeatureVector__copy(
  const semantic_inference_msgs__msg__FeatureVector * input,
  semantic_inference_msgs__msg__FeatureVector * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_type_hash_t *
semantic_inference_msgs__msg__FeatureVector__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeDescription *
semantic_inference_msgs__msg__FeatureVector__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeSource *
semantic_inference_msgs__msg__FeatureVector__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
semantic_inference_msgs__msg__FeatureVector__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FeatureVector messages.
/**
 * It allocates the memory for the number of elements and calls
 * semantic_inference_msgs__msg__FeatureVector__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVector__Sequence__init(semantic_inference_msgs__msg__FeatureVector__Sequence * array, size_t size);

/// Finalize array of msg/FeatureVector messages.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVector__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVector__Sequence__fini(semantic_inference_msgs__msg__FeatureVector__Sequence * array);

/// Create array of msg/FeatureVector messages.
/**
 * It allocates the memory for the array and calls
 * semantic_inference_msgs__msg__FeatureVector__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
semantic_inference_msgs__msg__FeatureVector__Sequence *
semantic_inference_msgs__msg__FeatureVector__Sequence__create(size_t size);

/// Destroy array of msg/FeatureVector messages.
/**
 * It calls
 * semantic_inference_msgs__msg__FeatureVector__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
void
semantic_inference_msgs__msg__FeatureVector__Sequence__destroy(semantic_inference_msgs__msg__FeatureVector__Sequence * array);

/// Check for msg/FeatureVector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
bool
semantic_inference_msgs__msg__FeatureVector__Sequence__are_equal(const semantic_inference_msgs__msg__FeatureVector__Sequence * lhs, const semantic_inference_msgs__msg__FeatureVector__Sequence * rhs);

/// Copy an array of msg/FeatureVector messages.
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
semantic_inference_msgs__msg__FeatureVector__Sequence__copy(
  const semantic_inference_msgs__msg__FeatureVector__Sequence * input,
  semantic_inference_msgs__msg__FeatureVector__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__FUNCTIONS_H_
