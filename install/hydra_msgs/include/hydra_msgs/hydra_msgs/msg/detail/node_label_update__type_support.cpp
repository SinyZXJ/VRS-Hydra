// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/detail/node_label_update__functions.h"
#include "hydra_msgs/msg/detail/node_label_update__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydra_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NodeLabelUpdate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydra_msgs::msg::NodeLabelUpdate(_init);
}

void NodeLabelUpdate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydra_msgs::msg::NodeLabelUpdate *>(message_memory);
  typed_message->~NodeLabelUpdate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeLabelUpdate_message_member_array[2] = {
  {
    "node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::NodeLabelUpdate, node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "label",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::NodeLabelUpdate, label),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeLabelUpdate_message_members = {
  "hydra_msgs::msg",  // message namespace
  "NodeLabelUpdate",  // message name
  2,  // number of fields
  sizeof(hydra_msgs::msg::NodeLabelUpdate),
  false,  // has_any_key_member_
  NodeLabelUpdate_message_member_array,  // message members
  NodeLabelUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeLabelUpdate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeLabelUpdate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeLabelUpdate_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_hash,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hydra_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydra_msgs::msg::NodeLabelUpdate>()
{
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::NodeLabelUpdate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydra_msgs, msg, NodeLabelUpdate)() {
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::NodeLabelUpdate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
