// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/bow_query__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"  // bow_vector

// forward declare type support functions

bool cdr_serialize_pose_graph_tools_msgs__msg__BowVector(
  const pose_graph_tools_msgs__msg__BowVector * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pose_graph_tools_msgs__msg__BowVector(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs__msg__BowVector * ros_message);

size_t get_serialized_size_pose_graph_tools_msgs__msg__BowVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pose_graph_tools_msgs__msg__BowVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pose_graph_tools_msgs__msg__BowVector(
  const pose_graph_tools_msgs__msg__BowVector * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pose_graph_tools_msgs__msg__BowVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pose_graph_tools_msgs__msg__BowVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, BowVector)();


using _BowQuery__ros_msg_type = pose_graph_tools_msgs__msg__BowQuery;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_pose_graph_tools_msgs__msg__BowQuery(
  const pose_graph_tools_msgs__msg__BowQuery * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: pose_id
  {
    cdr << ros_message->pose_id;
  }

  // Field name: bow_vector
  {
    cdr_serialize_pose_graph_tools_msgs__msg__BowVector(
      &ros_message->bow_vector, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_deserialize_pose_graph_tools_msgs__msg__BowQuery(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs__msg__BowQuery * ros_message)
{
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: pose_id
  {
    cdr >> ros_message->pose_id;
  }

  // Field name: bow_vector
  {
    cdr_deserialize_pose_graph_tools_msgs__msg__BowVector(cdr, &ros_message->bow_vector);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_pose_graph_tools_msgs__msg__BowQuery(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BowQuery__ros_msg_type * ros_message = static_cast<const _BowQuery__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose_id
  {
    size_t item_size = sizeof(ros_message->pose_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bow_vector
  current_alignment += get_serialized_size_pose_graph_tools_msgs__msg__BowVector(
    &(ros_message->bow_vector), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_pose_graph_tools_msgs__msg__BowQuery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pose_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bow_vector
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pose_graph_tools_msgs__msg__BowVector(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pose_graph_tools_msgs__msg__BowQuery;
    is_plain =
      (
      offsetof(DataType, bow_vector) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_key_pose_graph_tools_msgs__msg__BowQuery(
  const pose_graph_tools_msgs__msg__BowQuery * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: pose_id
  {
    cdr << ros_message->pose_id;
  }

  // Field name: bow_vector
  {
    cdr_serialize_key_pose_graph_tools_msgs__msg__BowVector(
      &ros_message->bow_vector, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_key_pose_graph_tools_msgs__msg__BowQuery(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BowQuery__ros_msg_type * ros_message = static_cast<const _BowQuery__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose_id
  {
    size_t item_size = sizeof(ros_message->pose_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bow_vector
  current_alignment += get_serialized_size_key_pose_graph_tools_msgs__msg__BowVector(
    &(ros_message->bow_vector), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_key_pose_graph_tools_msgs__msg__BowQuery(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pose_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bow_vector
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pose_graph_tools_msgs__msg__BowVector(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pose_graph_tools_msgs__msg__BowQuery;
    is_plain =
      (
      offsetof(DataType, bow_vector) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BowQuery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const pose_graph_tools_msgs__msg__BowQuery * ros_message = static_cast<const pose_graph_tools_msgs__msg__BowQuery *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_pose_graph_tools_msgs__msg__BowQuery(ros_message, cdr);
}

static bool _BowQuery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  pose_graph_tools_msgs__msg__BowQuery * ros_message = static_cast<pose_graph_tools_msgs__msg__BowQuery *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_pose_graph_tools_msgs__msg__BowQuery(cdr, ros_message);
}

static uint32_t _BowQuery__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pose_graph_tools_msgs__msg__BowQuery(
      untyped_ros_message, 0));
}

static size_t _BowQuery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pose_graph_tools_msgs__msg__BowQuery(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BowQuery = {
  "pose_graph_tools_msgs::msg",
  "BowQuery",
  _BowQuery__cdr_serialize,
  _BowQuery__cdr_deserialize,
  _BowQuery__get_serialized_size,
  _BowQuery__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BowQuery__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BowQuery,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_hash,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, BowQuery)() {
  return &_BowQuery__type_support;
}

#if defined(__cplusplus)
}
#endif
