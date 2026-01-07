// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/bow_query__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace pose_graph_tools_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pose_graph_tools_msgs::msg::BowVector &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pose_graph_tools_msgs::msg::BowVector &);
size_t get_serialized_size(
  const pose_graph_tools_msgs::msg::BowVector &,
  size_t current_alignment);
size_t
max_serialized_size_BowVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const pose_graph_tools_msgs::msg::BowVector &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const pose_graph_tools_msgs::msg::BowVector &,
  size_t current_alignment);
size_t
max_serialized_size_key_BowVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
cdr_serialize(
  const pose_graph_tools_msgs::msg::BowQuery & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;

  // Member: pose_id
  cdr << ros_message.pose_id;

  // Member: bow_vector
  pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bow_vector,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pose_graph_tools_msgs::msg::BowQuery & ros_message)
{
  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: pose_id
  cdr >> ros_message.pose_id;

  // Member: bow_vector
  pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bow_vector);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
get_serialized_size(
  const pose_graph_tools_msgs::msg::BowQuery & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pose_id
  {
    size_t item_size = sizeof(ros_message.pose_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bow_vector
  current_alignment +=
    pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bow_vector, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
max_serialized_size_BowQuery(
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

  // Member: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pose_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: bow_vector
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BowVector(
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
    using DataType = pose_graph_tools_msgs::msg::BowQuery;
    is_plain =
      (
      offsetof(DataType, bow_vector) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
cdr_serialize_key(
  const pose_graph_tools_msgs::msg::BowQuery & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;

  // Member: pose_id
  cdr << ros_message.pose_id;

  // Member: bow_vector
  pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.bow_vector,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
get_serialized_size_key(
  const pose_graph_tools_msgs::msg::BowQuery & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pose_id
  {
    size_t item_size = sizeof(ros_message.pose_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bow_vector
  current_alignment +=
    pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.bow_vector, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pose_graph_tools_msgs
max_serialized_size_key_BowQuery(
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

  // Member: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pose_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bow_vector
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_BowVector(
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
    using DataType = pose_graph_tools_msgs::msg::BowQuery;
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
  auto typed_message =
    static_cast<const pose_graph_tools_msgs::msg::BowQuery *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BowQuery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pose_graph_tools_msgs::msg::BowQuery *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BowQuery__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pose_graph_tools_msgs::msg::BowQuery *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BowQuery__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BowQuery(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BowQuery__callbacks = {
  "pose_graph_tools_msgs::msg",
  "BowQuery",
  _BowQuery__cdr_serialize,
  _BowQuery__cdr_deserialize,
  _BowQuery__get_serialized_size,
  _BowQuery__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BowQuery__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BowQuery__callbacks,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_hash,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pose_graph_tools_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pose_graph_tools_msgs::msg::BowQuery>()
{
  return &pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::_BowQuery__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pose_graph_tools_msgs, msg, BowQuery)() {
  return &pose_graph_tools_msgs::msg::typesupport_fastrtps_cpp::_BowQuery__handle;
}

#ifdef __cplusplus
}
#endif
