// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pose_graph_tools_msgs:srv/VLCFrameQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/vlc_frame_query.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__FUNCTIONS_H_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__FUNCTIONS_H_

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

#include "pose_graph_tools_msgs/srv/detail/vlc_frame_query__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__srv__VLCFrameQuery__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__srv__VLCFrameQuery__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__srv__VLCFrameQuery__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/VLCFrameQuery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request
 * )) before or use
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg);

/// Finalize srv/VLCFrameQuery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg);

/// Create srv/VLCFrameQuery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Request *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__create(void);

/// Destroy srv/VLCFrameQuery message.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg);

/// Check for srv/VLCFrameQuery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * rhs);

/// Copy a srv/VLCFrameQuery message.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the number of elements and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array, size_t size);

/// Finalize array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array);

/// Create array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the array and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__create(size_t size);

/// Destroy array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array);

/// Check for srv/VLCFrameQuery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * rhs);

/// Copy an array of srv/VLCFrameQuery messages.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * output);

/// Initialize srv/VLCFrameQuery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response
 * )) before or use
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg);

/// Finalize srv/VLCFrameQuery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg);

/// Create srv/VLCFrameQuery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Response *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__create(void);

/// Destroy srv/VLCFrameQuery message.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg);

/// Check for srv/VLCFrameQuery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * rhs);

/// Copy a srv/VLCFrameQuery message.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the number of elements and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array, size_t size);

/// Finalize array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array);

/// Create array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the array and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__create(size_t size);

/// Destroy array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array);

/// Check for srv/VLCFrameQuery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * rhs);

/// Copy an array of srv/VLCFrameQuery messages.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * output);

/// Initialize srv/VLCFrameQuery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event
 * )) before or use
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg);

/// Finalize srv/VLCFrameQuery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg);

/// Create srv/VLCFrameQuery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Event *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__create(void);

/// Destroy srv/VLCFrameQuery message.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg);

/// Check for srv/VLCFrameQuery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * rhs);

/// Copy a srv/VLCFrameQuery message.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_type_hash_t *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeDescription *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the number of elements and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array, size_t size);

/// Finalize array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array);

/// Create array of srv/VLCFrameQuery messages.
/**
 * It allocates the memory for the array and calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__create(size_t size);

/// Destroy array of srv/VLCFrameQuery messages.
/**
 * It calls
 * pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array);

/// Check for srv/VLCFrameQuery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * rhs);

/// Copy an array of srv/VLCFrameQuery messages.
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__FUNCTIONS_H_
