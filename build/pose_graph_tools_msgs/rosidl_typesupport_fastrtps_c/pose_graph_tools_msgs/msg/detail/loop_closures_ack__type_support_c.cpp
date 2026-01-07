// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // frame_dst, frame_src, robot_dst, robot_src
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // frame_dst, frame_src, robot_dst, robot_src

// forward declare type support functions


using _LoopClosuresAck__ros_msg_type = pose_graph_tools_msgs__msg__LoopClosuresAck;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message,
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

  // Field name: robot_src
  {
    size_t size = ros_message->robot_src.size;
    auto array_ptr = ros_message->robot_src.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: frame_src
  {
    size_t size = ros_message->frame_src.size;
    auto array_ptr = ros_message->frame_src.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: robot_dst
  {
    size_t size = ros_message->robot_dst.size;
    auto array_ptr = ros_message->robot_dst.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: frame_dst
  {
    size_t size = ros_message->frame_dst.size;
    auto array_ptr = ros_message->frame_dst.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_deserialize_pose_graph_tools_msgs__msg__LoopClosuresAck(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message)
{
  // Field name: publishing_robot_id
  {
    cdr >> ros_message->publishing_robot_id;
  }

  // Field name: destination_robot_id
  {
    cdr >> ros_message->destination_robot_id;
  }

  // Field name: robot_src
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

    if (ros_message->robot_src.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->robot_src);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->robot_src, size)) {
      fprintf(stderr, "failed to create array for field 'robot_src'");
      return false;
    }
    auto array_ptr = ros_message->robot_src.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: frame_src
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

    if (ros_message->frame_src.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->frame_src);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->frame_src, size)) {
      fprintf(stderr, "failed to create array for field 'frame_src'");
      return false;
    }
    auto array_ptr = ros_message->frame_src.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: robot_dst
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

    if (ros_message->robot_dst.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->robot_dst);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->robot_dst, size)) {
      fprintf(stderr, "failed to create array for field 'robot_dst'");
      return false;
    }
    auto array_ptr = ros_message->robot_dst.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: frame_dst
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

    if (ros_message->frame_dst.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->frame_dst);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->frame_dst, size)) {
      fprintf(stderr, "failed to create array for field 'frame_dst'");
      return false;
    }
    auto array_ptr = ros_message->frame_dst.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoopClosuresAck__ros_msg_type * ros_message = static_cast<const _LoopClosuresAck__ros_msg_type *>(untyped_ros_message);
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

  // Field name: robot_src
  {
    size_t array_size = ros_message->robot_src.size;
    auto array_ptr = ros_message->robot_src.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_src
  {
    size_t array_size = ros_message->frame_src.size;
    auto array_ptr = ros_message->frame_src.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: robot_dst
  {
    size_t array_size = ros_message->robot_dst.size;
    auto array_ptr = ros_message->robot_dst.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_dst
  {
    size_t array_size = ros_message->frame_dst.size;
    auto array_ptr = ros_message->frame_dst.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
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

  // Field name: robot_src
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: frame_src
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: robot_dst
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: frame_dst
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pose_graph_tools_msgs__msg__LoopClosuresAck;
    is_plain =
      (
      offsetof(DataType, frame_dst) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message,
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

  // Field name: robot_src
  {
    size_t size = ros_message->robot_src.size;
    auto array_ptr = ros_message->robot_src.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: frame_src
  {
    size_t size = ros_message->frame_src.size;
    auto array_ptr = ros_message->frame_src.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: robot_dst
  {
    size_t size = ros_message->robot_dst.size;
    auto array_ptr = ros_message->robot_dst.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: frame_dst
  {
    size_t size = ros_message->frame_dst.size;
    auto array_ptr = ros_message->frame_dst.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoopClosuresAck__ros_msg_type * ros_message = static_cast<const _LoopClosuresAck__ros_msg_type *>(untyped_ros_message);
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

  // Field name: robot_src
  {
    size_t array_size = ros_message->robot_src.size;
    auto array_ptr = ros_message->robot_src.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_src
  {
    size_t array_size = ros_message->frame_src.size;
    auto array_ptr = ros_message->frame_src.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: robot_dst
  {
    size_t array_size = ros_message->robot_dst.size;
    auto array_ptr = ros_message->robot_dst.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_dst
  {
    size_t array_size = ros_message->frame_dst.size;
    auto array_ptr = ros_message->frame_dst.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
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

  // Field name: robot_src
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: frame_src
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: robot_dst
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: frame_dst
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pose_graph_tools_msgs__msg__LoopClosuresAck;
    is_plain =
      (
      offsetof(DataType, frame_dst) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoopClosuresAck__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message = static_cast<const pose_graph_tools_msgs__msg__LoopClosuresAck *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_pose_graph_tools_msgs__msg__LoopClosuresAck(ros_message, cdr);
}

static bool _LoopClosuresAck__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message = static_cast<pose_graph_tools_msgs__msg__LoopClosuresAck *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_pose_graph_tools_msgs__msg__LoopClosuresAck(cdr, ros_message);
}

static uint32_t _LoopClosuresAck__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
      untyped_ros_message, 0));
}

static size_t _LoopClosuresAck__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoopClosuresAck = {
  "pose_graph_tools_msgs::msg",
  "LoopClosuresAck",
  _LoopClosuresAck__cdr_serialize,
  _LoopClosuresAck__cdr_deserialize,
  _LoopClosuresAck__get_serialized_size,
  _LoopClosuresAck__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoopClosuresAck__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoopClosuresAck,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_hash,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, LoopClosuresAck)() {
  return &_LoopClosuresAck__type_support;
}

#if defined(__cplusplus)
}
#endif
