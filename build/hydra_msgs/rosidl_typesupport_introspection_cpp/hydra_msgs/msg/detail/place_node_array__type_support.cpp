// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/detail/place_node_array__functions.h"
#include "hydra_msgs/msg/detail/place_node_array__struct.hpp"
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

void PlaceNodeArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydra_msgs::msg::PlaceNodeArray(_init);
}

void PlaceNodeArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydra_msgs::msg::PlaceNodeArray *>(message_memory);
  typed_message->~PlaceNodeArray();
}

size_t size_function__PlaceNodeArray__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hydra_msgs::msg::PlaceNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlaceNodeArray__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hydra_msgs::msg::PlaceNode> *>(untyped_member);
  return &member[index];
}

void * get_function__PlaceNodeArray__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hydra_msgs::msg::PlaceNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlaceNodeArray__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hydra_msgs::msg::PlaceNode *>(
    get_const_function__PlaceNodeArray__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<hydra_msgs::msg::PlaceNode *>(untyped_value);
  value = item;
}

void assign_function__PlaceNodeArray__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hydra_msgs::msg::PlaceNode *>(
    get_function__PlaceNodeArray__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const hydra_msgs::msg::PlaceNode *>(untyped_value);
  item = value;
}

void resize_function__PlaceNodeArray__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hydra_msgs::msg::PlaceNode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlaceNodeArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::PlaceNodeArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hydra_msgs::msg::PlaceNode>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::PlaceNodeArray, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlaceNodeArray__nodes,  // size() function pointer
    get_const_function__PlaceNodeArray__nodes,  // get_const(index) function pointer
    get_function__PlaceNodeArray__nodes,  // get(index) function pointer
    fetch_function__PlaceNodeArray__nodes,  // fetch(index, &value) function pointer
    assign_function__PlaceNodeArray__nodes,  // assign(index, value) function pointer
    resize_function__PlaceNodeArray__nodes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlaceNodeArray_message_members = {
  "hydra_msgs::msg",  // message namespace
  "PlaceNodeArray",  // message name
  2,  // number of fields
  sizeof(hydra_msgs::msg::PlaceNodeArray),
  false,  // has_any_key_member_
  PlaceNodeArray_message_member_array,  // message members
  PlaceNodeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PlaceNodeArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlaceNodeArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlaceNodeArray_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__PlaceNodeArray__get_type_hash,
  &hydra_msgs__msg__PlaceNodeArray__get_type_description,
  &hydra_msgs__msg__PlaceNodeArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hydra_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydra_msgs::msg::PlaceNodeArray>()
{
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::PlaceNodeArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydra_msgs, msg, PlaceNodeArray)() {
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::PlaceNodeArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
