// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__functions.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__struct.hpp"
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

void PoseGraphNode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pose_graph_tools_msgs::msg::PoseGraphNode(_init);
}

void PoseGraphNode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pose_graph_tools_msgs::msg::PoseGraphNode *>(message_memory);
  typed_message->~PoseGraphNode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseGraphNode_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::PoseGraphNode, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::PoseGraphNode, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::PoseGraphNode, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs::msg::PoseGraphNode, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseGraphNode_message_members = {
  "pose_graph_tools_msgs::msg",  // message namespace
  "PoseGraphNode",  // message name
  4,  // number of fields
  sizeof(pose_graph_tools_msgs::msg::PoseGraphNode),
  false,  // has_any_key_member_
  PoseGraphNode_message_member_array,  // message members
  PoseGraphNode_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseGraphNode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseGraphNode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseGraphNode_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_hash,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_description,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pose_graph_tools_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pose_graph_tools_msgs::msg::PoseGraphNode>()
{
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::PoseGraphNode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pose_graph_tools_msgs, msg, PoseGraphNode)() {
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_introspection_cpp::PoseGraphNode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
