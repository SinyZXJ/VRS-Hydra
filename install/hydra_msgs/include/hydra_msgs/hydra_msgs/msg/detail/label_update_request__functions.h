// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/label_update_request.h"


#ifndef HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__FUNCTIONS_H_
#define HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__FUNCTIONS_H_

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

#include "hydra_msgs/msg/detail/label_update_request__struct.h"

/// Initialize msg/LabelUpdateRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hydra_msgs__msg__LabelUpdateRequest
 * )) before or use
 * hydra_msgs__msg__LabelUpdateRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__LabelUpdateRequest__init(hydra_msgs__msg__LabelUpdateRequest * msg);

/// Finalize msg/LabelUpdateRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__LabelUpdateRequest__fini(hydra_msgs__msg__LabelUpdateRequest * msg);

/// Create msg/LabelUpdateRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hydra_msgs__msg__LabelUpdateRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
hydra_msgs__msg__LabelUpdateRequest *
hydra_msgs__msg__LabelUpdateRequest__create(void);

/// Destroy msg/LabelUpdateRequest message.
/**
 * It calls
 * hydra_msgs__msg__LabelUpdateRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__LabelUpdateRequest__destroy(hydra_msgs__msg__LabelUpdateRequest * msg);

/// Check for msg/LabelUpdateRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__LabelUpdateRequest__are_equal(const hydra_msgs__msg__LabelUpdateRequest * lhs, const hydra_msgs__msg__LabelUpdateRequest * rhs);

/// Copy a msg/LabelUpdateRequest message.
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
hydra_msgs__msg__LabelUpdateRequest__copy(
  const hydra_msgs__msg__LabelUpdateRequest * input,
  hydra_msgs__msg__LabelUpdateRequest * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__msg__LabelUpdateRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__msg__LabelUpdateRequest__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__msg__LabelUpdateRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__msg__LabelUpdateRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LabelUpdateRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * hydra_msgs__msg__LabelUpdateRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__LabelUpdateRequest__Sequence__init(hydra_msgs__msg__LabelUpdateRequest__Sequence * array, size_t size);

/// Finalize array of msg/LabelUpdateRequest messages.
/**
 * It calls
 * hydra_msgs__msg__LabelUpdateRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__LabelUpdateRequest__Sequence__fini(hydra_msgs__msg__LabelUpdateRequest__Sequence * array);

/// Create array of msg/LabelUpdateRequest messages.
/**
 * It allocates the memory for the array and calls
 * hydra_msgs__msg__LabelUpdateRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
hydra_msgs__msg__LabelUpdateRequest__Sequence *
hydra_msgs__msg__LabelUpdateRequest__Sequence__create(size_t size);

/// Destroy array of msg/LabelUpdateRequest messages.
/**
 * It calls
 * hydra_msgs__msg__LabelUpdateRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
void
hydra_msgs__msg__LabelUpdateRequest__Sequence__destroy(hydra_msgs__msg__LabelUpdateRequest__Sequence * array);

/// Check for msg/LabelUpdateRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
bool
hydra_msgs__msg__LabelUpdateRequest__Sequence__are_equal(const hydra_msgs__msg__LabelUpdateRequest__Sequence * lhs, const hydra_msgs__msg__LabelUpdateRequest__Sequence * rhs);

/// Copy an array of msg/LabelUpdateRequest messages.
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
hydra_msgs__msg__LabelUpdateRequest__Sequence__copy(
  const hydra_msgs__msg__LabelUpdateRequest__Sequence * input,
  hydra_msgs__msg__LabelUpdateRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__FUNCTIONS_H_
