// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kimera_pgmo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TriangleIndices_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::msg::TriangleIndices(_init);
}

void TriangleIndices_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(message_memory);
  typed_message->~TriangleIndices();
}

size_t size_function__TriangleIndices__vertex_indices(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TriangleIndices__vertex_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TriangleIndices__vertex_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TriangleIndices__vertex_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__TriangleIndices__vertex_indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__TriangleIndices__vertex_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__TriangleIndices__vertex_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TriangleIndices_message_member_array[1] = {
  {
    "vertex_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::TriangleIndices, vertex_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__TriangleIndices__vertex_indices,  // size() function pointer
    get_const_function__TriangleIndices__vertex_indices,  // get_const(index) function pointer
    get_function__TriangleIndices__vertex_indices,  // get(index) function pointer
    fetch_function__TriangleIndices__vertex_indices,  // fetch(index, &value) function pointer
    assign_function__TriangleIndices__vertex_indices,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TriangleIndices_message_members = {
  "kimera_pgmo_msgs::msg",  // message namespace
  "TriangleIndices",  // message name
  1,  // number of fields
  sizeof(kimera_pgmo_msgs::msg::TriangleIndices),
  false,  // has_any_key_member_
  TriangleIndices_message_member_array,  // message members
  TriangleIndices_init_function,  // function to initialize message memory (memory has to be allocated)
  TriangleIndices_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TriangleIndices_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TriangleIndices_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_hash,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_description,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::msg::TriangleIndices>()
{
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::TriangleIndices_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, msg, TriangleIndices)() {
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::TriangleIndices_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
