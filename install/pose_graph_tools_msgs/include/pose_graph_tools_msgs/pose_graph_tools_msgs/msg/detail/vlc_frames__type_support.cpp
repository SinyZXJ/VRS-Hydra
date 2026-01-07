// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrames.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_frames__functions.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_frames__struct.hpp"
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

void VLCFrames_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pose_graph_tools_msgs::msg::VLCFrames(_init);
}

void VLCFrames_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pose_graph_tools_msgs::msg::VLCFrames *>(message_memory);
  typed_message->~VLCFrames();
}

size_t size_function__VLCFrames__frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VLCFrames__frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__VLCFrames__frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg> *>(untyped_member);
  return &member[index];
}

void fetch_function__VLCFrames__frames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pose_graph_tools_msgs::msg::VLCFrameMsg *>(
    get_const_function__VLCFrames__frames(untyped_member, index));
  auto & value = *reinterpret_cast<pose_graph_tools_msgs::msg::VLCFrameMsg *>(untyped_value);
  value = item;
}

void assign_function__VLCFrames__frames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pose_graph_tools_msgs::msg::VLCFrameMsg *>(
    get_function__VLCFrames__frames(untyped_member, index));
  const auto & value = *reinterpret_cast<const pose_graph_tools_msgs::msg::VLCFrameMsg *>(untyped_value);
  item = value;
}

void resize_function__VLCFrames__frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VLCFrames_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::VLCFrames, header),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::VLCFrames, destination_robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pose_graph_tools_msgs::msg::VLCFrameMsg>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::VLCFrames, frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__VLCFrames__frames,  // size() function pointer
    get_const_function__VLCFrames__frames,  // get_const(index) function pointer
    get_function__VLCFrames__frames,  // get(index) function pointer
    fetch_function__VLCFrames__frames,  // fetch(index, &value) function pointer
    assign_function__VLCFrames__frames,  // assign(index, value) function pointer
    resize_function__VLCFrames__frames  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VLCFrames_message_members = {
  "pose_graph_tools_msgs::msg",  // message namespace
  "VLCFrames",  // message name
  3,  // number of fields
  sizeof(pose_graph_tools_msgs::msg::VLCFrames),
  false,  // has_any_key_member_
  VLCFrames_message_member_array,  // message members
  VLCFrames_init_function,  // function to initialize message memory (memory has to be allocated)
  VLCFrames_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VLCFrames_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VLCFrames_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__VLCFrames__get_type_hash,
  &pose_graph_tools_msgs__msg__VLCFrames__get_type_description,
  &pose_graph_tools_msgs__msg__VLCFrames__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pose_graph_tools_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pose_graph_tools_msgs::msg::VLCFrames>()
{
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::VLCFrames_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pose_graph_tools_msgs, msg, VLCFrames)() {
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::VLCFrames_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
