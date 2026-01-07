// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hydra_msgs:msg/ActiveLayer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/active_layer.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__FUNCTIONS_H_
#define HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__FUNCTIONS_H_

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
#include "hydra_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hydra_msgs/msg/detail/active_layer__struct.h"

/// Initialize msg/ActiveLayer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hydra_msgs__msg__ActiveLayer
 * )) before or use
 * hydra_msgs__msg__ActiveLayer__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__init(hydra_msgs__msg__ActiveLayer * msg);

/// Finalize msg/ActiveLayer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__ActiveLayer__fini(hydra_msgs__msg__ActiveLayer * msg);

/// Create msg/ActiveLayer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hydra_msgs__msg__ActiveLayer__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
hydra_msgs__msg__ActiveLayer *
hydra_msgs__msg__ActiveLayer__create(void);

/// Destroy msg/ActiveLayer message.
/**
 * It calls
 * hydra_msgs__msg__ActiveLayer__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__ActiveLayer__destroy(hydra_msgs__msg__ActiveLayer * msg);

/// Check for msg/ActiveLayer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__are_equal(const hydra_msgs__msg__ActiveLayer * lhs, const hydra_msgs__msg__ActiveLayer * rhs);

/// Copy a msg/ActiveLayer message.
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
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__copy(
  const hydra_msgs__msg__ActiveLayer * input,
  hydra_msgs__msg__ActiveLayer * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__msg__ActiveLayer__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__msg__ActiveLayer__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__msg__ActiveLayer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__msg__ActiveLayer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ActiveLayer messages.
/**
 * It allocates the memory for the number of elements and calls
 * hydra_msgs__msg__ActiveLayer__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__Sequence__init(hydra_msgs__msg__ActiveLayer__Sequence * array, size_t size);

/// Finalize array of msg/ActiveLayer messages.
/**
 * It calls
 * hydra_msgs__msg__ActiveLayer__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__ActiveLayer__Sequence__fini(hydra_msgs__msg__ActiveLayer__Sequence * array);

/// Create array of msg/ActiveLayer messages.
/**
 * It allocates the memory for the array and calls
 * hydra_msgs__msg__ActiveLayer__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
hydra_msgs__msg__ActiveLayer__Sequence *
hydra_msgs__msg__ActiveLayer__Sequence__create(size_t size);

/// Destroy array of msg/ActiveLayer messages.
/**
 * It calls
 * hydra_msgs__msg__ActiveLayer__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__ActiveLayer__Sequence__destroy(hydra_msgs__msg__ActiveLayer__Sequence * array);

/// Check for msg/ActiveLayer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__Sequence__are_equal(const hydra_msgs__msg__ActiveLayer__Sequence * lhs, const hydra_msgs__msg__ActiveLayer__Sequence * rhs);

/// Copy an array of msg/ActiveLayer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__ActiveLayer__Sequence__copy(
  const hydra_msgs__msg__ActiveLayer__Sequence * input,
  hydra_msgs__msg__ActiveLayer__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__FUNCTIONS_H_
