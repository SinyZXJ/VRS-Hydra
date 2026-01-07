// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__functions.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pose_graph_tools_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LoopClosuresAck_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pose_graph_tools_msgs::msg::LoopClosuresAck(_init);
}

void LoopClosuresAck_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pose_graph_tools_msgs::msg::LoopClosuresAck *>(message_memory);
  typed_message->~LoopClosuresAck();
}

size_t size_function__LoopClosuresAck__robot_src(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoopClosuresAck__robot_src(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LoopClosuresAck__robot_src(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoopClosuresAck__robot_src(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LoopClosuresAck__robot_src(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LoopClosuresAck__robot_src(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LoopClosuresAck__robot_src(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__LoopClosuresAck__robot_src(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoopClosuresAck__frame_src(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoopClosuresAck__frame_src(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LoopClosuresAck__frame_src(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoopClosuresAck__frame_src(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LoopClosuresAck__frame_src(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LoopClosuresAck__frame_src(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LoopClosuresAck__frame_src(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__LoopClosuresAck__frame_src(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoopClosuresAck__robot_dst(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoopClosuresAck__robot_dst(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LoopClosuresAck__robot_dst(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoopClosuresAck__robot_dst(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LoopClosuresAck__robot_dst(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LoopClosuresAck__robot_dst(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LoopClosuresAck__robot_dst(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__LoopClosuresAck__robot_dst(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoopClosuresAck__frame_dst(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoopClosuresAck__frame_dst(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LoopClosuresAck__frame_dst(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoopClosuresAck__frame_dst(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LoopClosuresAck__frame_dst(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LoopClosuresAck__frame_dst(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LoopClosuresAck__frame_dst(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__LoopClosuresAck__frame_dst(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoopClosuresAck_message_member_array[6] = {
  {
    "publishing_robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, publishing_robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination_robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, destination_robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_src",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, robot_src),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoopClosuresAck__robot_src,  // size() function pointer
    get_const_function__LoopClosuresAck__robot_src,  // get_const(index) function pointer
    get_function__LoopClosuresAck__robot_src,  // get(index) function pointer
    fetch_function__LoopClosuresAck__robot_src,  // fetch(index, &value) function pointer
    assign_function__LoopClosuresAck__robot_src,  // assign(index, value) function pointer
    resize_function__LoopClosuresAck__robot_src  // resize(index) function pointer
  },
  {
    "frame_src",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, frame_src),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoopClosuresAck__frame_src,  // size() function pointer
    get_const_function__LoopClosuresAck__frame_src,  // get_const(index) function pointer
    get_function__LoopClosuresAck__frame_src,  // get(index) function pointer
    fetch_function__LoopClosuresAck__frame_src,  // fetch(index, &value) function pointer
    assign_function__LoopClosuresAck__frame_src,  // assign(index, value) function pointer
    resize_function__LoopClosuresAck__frame_src  // resize(index) function pointer
  },
  {
    "robot_dst",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, robot_dst),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoopClosuresAck__robot_dst,  // size() function pointer
    get_const_function__LoopClosuresAck__robot_dst,  // get_const(index) function pointer
    get_function__LoopClosuresAck__robot_dst,  // get(index) function pointer
    fetch_function__LoopClosuresAck__robot_dst,  // fetch(index, &value) function pointer
    assign_function__LoopClosuresAck__robot_dst,  // assign(index, value) function pointer
    resize_function__LoopClosuresAck__robot_dst  // resize(index) function pointer
  },
  {
    "frame_dst",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::LoopClosuresAck, frame_dst),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoopClosuresAck__frame_dst,  // size() function pointer
    get_const_function__LoopClosuresAck__frame_dst,  // get_const(index) function pointer
    get_function__LoopClosuresAck__frame_dst,  // get(index) function pointer
    fetch_function__LoopClosuresAck__frame_dst,  // fetch(index, &value) function pointer
    assign_function__LoopClosuresAck__frame_dst,  // assign(index, value) function pointer
    resize_function__LoopClosuresAck__frame_dst  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoopClosuresAck_message_members = {
  "pose_graph_tools_msgs::msg",  // message namespace
  "LoopClosuresAck",  // message name
  6,  // number of fields
  sizeof(pose_graph_tools_msgs::msg::LoopClosuresAck),
  false,  // has_any_key_member_
  LoopClosuresAck_message_member_array,  // message members
  LoopClosuresAck_init_function,  // function to initialize message memory (memory has to be allocated)
  LoopClosuresAck_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoopClosuresAck_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoopClosuresAck_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_hash,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pose_graph_tools_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pose_graph_tools_msgs::msg::LoopClosuresAck>()
{
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::LoopClosuresAck_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pose_graph_tools_msgs, msg, LoopClosuresAck)() {
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::LoopClosuresAck_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
