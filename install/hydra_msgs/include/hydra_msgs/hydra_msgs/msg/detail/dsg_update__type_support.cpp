// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/detail/dsg_update__functions.h"
#include "hydra_msgs/msg/detail/dsg_update__struct.hpp"
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

void DsgUpdate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydra_msgs::msg::DsgUpdate(_init);
}

void DsgUpdate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydra_msgs::msg::DsgUpdate *>(message_memory);
  typed_message->~DsgUpdate();
}

size_t size_function__DsgUpdate__layer_contents(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DsgUpdate__layer_contents(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DsgUpdate__layer_contents(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DsgUpdate__layer_contents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__DsgUpdate__layer_contents(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__DsgUpdate__layer_contents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__DsgUpdate__layer_contents(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__DsgUpdate__layer_contents(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DsgUpdate__deleted_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DsgUpdate__deleted_nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DsgUpdate__deleted_nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DsgUpdate__deleted_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__DsgUpdate__deleted_nodes(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__DsgUpdate__deleted_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__DsgUpdate__deleted_nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__DsgUpdate__deleted_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DsgUpdate__deleted_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DsgUpdate__deleted_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DsgUpdate__deleted_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DsgUpdate__deleted_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__DsgUpdate__deleted_edges(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__DsgUpdate__deleted_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__DsgUpdate__deleted_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__DsgUpdate__deleted_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DsgUpdate_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "layer_contents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, layer_contents),  // bytes offset in struct
    nullptr,  // default value
    size_function__DsgUpdate__layer_contents,  // size() function pointer
    get_const_function__DsgUpdate__layer_contents,  // get_const(index) function pointer
    get_function__DsgUpdate__layer_contents,  // get(index) function pointer
    fetch_function__DsgUpdate__layer_contents,  // fetch(index, &value) function pointer
    assign_function__DsgUpdate__layer_contents,  // assign(index, value) function pointer
    resize_function__DsgUpdate__layer_contents  // resize(index) function pointer
  },
  {
    "deleted_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, deleted_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__DsgUpdate__deleted_nodes,  // size() function pointer
    get_const_function__DsgUpdate__deleted_nodes,  // get_const(index) function pointer
    get_function__DsgUpdate__deleted_nodes,  // get(index) function pointer
    fetch_function__DsgUpdate__deleted_nodes,  // fetch(index, &value) function pointer
    assign_function__DsgUpdate__deleted_nodes,  // assign(index, value) function pointer
    resize_function__DsgUpdate__deleted_nodes  // resize(index) function pointer
  },
  {
    "deleted_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, deleted_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__DsgUpdate__deleted_edges,  // size() function pointer
    get_const_function__DsgUpdate__deleted_edges,  // get_const(index) function pointer
    get_function__DsgUpdate__deleted_edges,  // get(index) function pointer
    fetch_function__DsgUpdate__deleted_edges,  // fetch(index, &value) function pointer
    assign_function__DsgUpdate__deleted_edges,  // assign(index, value) function pointer
    resize_function__DsgUpdate__deleted_edges  // resize(index) function pointer
  },
  {
    "full_update",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, full_update),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::DsgUpdate, sequence_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DsgUpdate_message_members = {
  "hydra_msgs::msg",  // message namespace
  "DsgUpdate",  // message name
  6,  // number of fields
  sizeof(hydra_msgs::msg::DsgUpdate),
  false,  // has_any_key_member_
  DsgUpdate_message_member_array,  // message members
  DsgUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  DsgUpdate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DsgUpdate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DsgUpdate_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__DsgUpdate__get_type_hash,
  &hydra_msgs__msg__DsgUpdate__get_type_description,
  &hydra_msgs__msg__DsgUpdate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hydra_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydra_msgs::msg::DsgUpdate>()
{
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::DsgUpdate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydra_msgs, msg, DsgUpdate)() {
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::DsgUpdate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
