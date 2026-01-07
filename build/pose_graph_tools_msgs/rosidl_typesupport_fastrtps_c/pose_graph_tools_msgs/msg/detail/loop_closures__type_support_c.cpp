// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/loop_closures__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__struct.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__functions.h"
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

#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__functions.h"  // edges

// forward declare type support functions

bool cdr_serialize_pose_graph_tools_msgs__msg__PoseGraphEdge(
  const pose_graph_tools_msgs__msg__PoseGraphEdge * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pose_graph_tools_msgs__msg__PoseGraphEdge(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs__msg__PoseGraphEdge * ros_message);

size_t get_serialized_size_pose_graph_tools_msgs__msg__PoseGraphEdge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pose_graph_tools_msgs__msg__PoseGraphEdge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
  const pose_graph_tools_msgs__msg__PoseGraphEdge * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, PoseGraphEdge)();


using _LoopClosures__ros_msg_type = pose_graph_tools_msgs__msg__LoopClosures;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_pose_graph_tools_msgs__msg__LoopClosures(
  const pose_graph_tools_msgs__msg__LoopClosures * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: publishing_robot_id
  {
    cdr << ros_message->publishing_robot_id;
  }

  // Field name: destination_robot_id
  {
    cdr << ros_message->destination_robot_id;
  }

  // Field name: edges
  {
    size_t size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pose_graph_tools_msgs__msg__PoseGraphEdge(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_deserialize_pose_graph_tools_msgs__msg__LoopClosures(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs__msg__LoopClosures * ros_message)
{
  // Field name: publishing_robot_id
  {
    cdr >> ros_message->publishing_robot_id;
  }

  // Field name: destination_robot_id
  {
    cdr >> ros_message->destination_robot_id;
  }

  // Field name: edges
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->edges.data) {
      pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__fini(&ros_message->edges);
    }
    if (!pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(&ros_message->edges, size)) {
      fprintf(stderr, "failed to create array for field 'edges'");
      return false;
    }
    auto array_ptr = ros_message->edges.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pose_graph_tools_msgs__msg__PoseGraphEdge(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_pose_graph_tools_msgs__msg__LoopClosures(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoopClosures__ros_msg_type * ros_message = static_cast<const _LoopClosures__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: publishing_robot_id
  {
    size_t item_size = sizeof(ros_message->publishing_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_robot_id
  {
    size_t item_size = sizeof(ros_message->destination_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: edges
  {
    size_t array_size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pose_graph_tools_msgs__msg__PoseGraphEdge(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_pose_graph_tools_msgs__msg__LoopClosures(
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

  // Field name: publishing_robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: edges
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pose_graph_tools_msgs__msg__PoseGraphEdge(
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
    using DataType = pose_graph_tools_msgs__msg__LoopClosures;
    is_plain =
      (
      offsetof(DataType, edges) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_key_pose_graph_tools_msgs__msg__LoopClosures(
  const pose_graph_tools_msgs__msg__LoopClosures * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: publishing_robot_id
  {
    cdr << ros_message->publishing_robot_id;
  }

  // Field name: destination_robot_id
  {
    cdr << ros_message->destination_robot_id;
  }

  // Field name: edges
  {
    size_t size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosures(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoopClosures__ros_msg_type * ros_message = static_cast<const _LoopClosures__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: publishing_robot_id
  {
    size_t item_size = sizeof(ros_message->publishing_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_robot_id
  {
    size_t item_size = sizeof(ros_message->destination_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: edges
  {
    size_t array_size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosures(
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
  // Field name: publishing_robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: edges
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pose_graph_tools_msgs__msg__PoseGraphEdge(
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
    using DataType = pose_graph_tools_msgs__msg__LoopClosures;
    is_plain =
      (
      offsetof(DataType, edges) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoopClosures__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const pose_graph_tools_msgs__msg__LoopClosures * ros_message = static_cast<const pose_graph_tools_msgs__msg__LoopClosures *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_pose_graph_tools_msgs__msg__LoopClosures(ros_message, cdr);
}

static bool _LoopClosures__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  pose_graph_tools_msgs__msg__LoopClosures * ros_message = static_cast<pose_graph_tools_msgs__msg__LoopClosures *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_pose_graph_tools_msgs__msg__LoopClosures(cdr, ros_message);
}

static uint32_t _LoopClosures__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pose_graph_tools_msgs__msg__LoopClosures(
      untyped_ros_message, 0));
}

static size_t _LoopClosures__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pose_graph_tools_msgs__msg__LoopClosures(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoopClosures = {
  "pose_graph_tools_msgs::msg",
  "LoopClosures",
  _LoopClosures__cdr_serialize,
  _LoopClosures__cdr_deserialize,
  _LoopClosures__get_serialized_size,
  _LoopClosures__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoopClosures__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoopClosures,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_hash,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_description,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, LoopClosures)() {
  return &_LoopClosures__type_support;
}

#if defined(__cplusplus)
}
#endif
