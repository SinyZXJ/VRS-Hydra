// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pose_graph_tools_msgs:msg/VLCRequests.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_requests.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__FUNCTIONS_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__FUNCTIONS_H_

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
#include "pose_graph_tools_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pose_graph_tools_msgs/msg/detail/vlc_requests__struct.h"

/// Initialize msg/VLCRequests message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pose_graph_tools_msgs__msg__VLCRequests
 * )) before or use
 * pose_graph_tools_msgs__msg__VLCRequests__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__init(pose_graph_tools_msgs__msg__VLCRequests * msg);

/// Finalize msg/VLCRequests message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__msg__VLCRequests__fini(pose_graph_tools_msgs__msg__VLCRequests * msg);

/// Create msg/VLCRequests message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pose_graph_tools_msgs__msg__VLCRequests__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__msg__VLCRequests *
pose_graph_tools_msgs__msg__VLCRequests__create(void);

/// Destroy msg/VLCRequests message.
/**
 * It calls
 * pose_graph_tools_msgs__msg__VLCRequests__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__msg__VLCRequests__destroy(pose_graph_tools_msgs__msg__VLCRequests * msg);

/// Check for msg/VLCRequests message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__are_equal(const pose_graph_tools_msgs__msg__VLCRequests * lhs, const pose_graph_tools_msgs__msg__VLCRequests * rhs);

/// Copy a msg/VLCRequests message.
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
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__copy(
  const pose_graph_tools_msgs__msg__VLCRequests * input,
  pose_graph_tools_msgs__msg__VLCRequests * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__msg__VLCRequests__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__msg__VLCRequests__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__msg__VLCRequests__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__msg__VLCRequests__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/VLCRequests messages.
/**
 * It allocates the memory for the number of elements and calls
 * pose_graph_tools_msgs__msg__VLCRequests__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__Sequence__init(pose_graph_tools_msgs__msg__VLCRequests__Sequence * array, size_t size);

/// Finalize array of msg/VLCRequests messages.
/**
 * It calls
 * pose_graph_tools_msgs__msg__VLCRequests__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__msg__VLCRequests__Sequence__fini(pose_graph_tools_msgs__msg__VLCRequests__Sequence * array);

/// Create array of msg/VLCRequests messages.
/**
 * It allocates the memory for the array and calls
 * pose_graph_tools_msgs__msg__VLCRequests__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__msg__VLCRequests__Sequence *
pose_graph_tools_msgs__msg__VLCRequests__Sequence__create(size_t size);

/// Destroy array of msg/VLCRequests messages.
/**
 * It calls
 * pose_graph_tools_msgs__msg__VLCRequests__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__msg__VLCRequests__Sequence__destroy(pose_graph_tools_msgs__msg__VLCRequests__Sequence * array);

/// Check for msg/VLCRequests message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__Sequence__are_equal(const pose_graph_tools_msgs__msg__VLCRequests__Sequence * lhs, const pose_graph_tools_msgs__msg__VLCRequests__Sequence * rhs);

/// Copy an array of msg/VLCRequests messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__msg__VLCRequests__Sequence__copy(
  const pose_graph_tools_msgs__msg__VLCRequests__Sequence * input,
  pose_graph_tools_msgs__msg__VLCRequests__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__FUNCTIONS_H_
