// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/msg/detail/mesh__functions.h"
#include "kimera_pgmo_msgs/msg/detail/mesh__struct.hpp"
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

void Mesh_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::msg::Mesh(_init);
}

void Mesh_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::msg::Mesh *>(message_memory);
  typed_message->~Mesh();
}

size_t size_function__Mesh__triangles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__triangles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__triangles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void fetch_function__Mesh__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_const_function__Mesh__triangles(untyped_member, index));
  auto & value = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  value = item;
}

void assign_function__Mesh__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_function__Mesh__triangles(untyped_member, index));
  const auto & value = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  item = value;
}

void resize_function__Mesh__triangles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Mesh__vertices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__vertices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__vertices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__Mesh__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__Mesh__vertices(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__Mesh__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__Mesh__vertices(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__Mesh__vertices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Mesh__vertex_stamps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__vertex_stamps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__vertex_stamps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void fetch_function__Mesh__vertex_stamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__Mesh__vertex_stamps(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__Mesh__vertex_stamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__Mesh__vertex_stamps(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

void resize_function__Mesh__vertex_stamps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Mesh__vertex_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__vertex_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__vertex_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Mesh__vertex_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Mesh__vertex_indices(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Mesh__vertex_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Mesh__vertex_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__Mesh__vertex_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Mesh__vertex_colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mesh__vertex_colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void * get_function__Mesh__vertex_colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void fetch_function__Mesh__vertex_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(
    get_const_function__Mesh__vertex_colors(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(untyped_value);
  value = item;
}

void assign_function__Mesh__vertex_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(
    get_function__Mesh__vertex_colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(untyped_value);
  item = value;
}

void resize_function__Mesh__vertex_colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Mesh_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ns",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, ns),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "triangles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::msg::TriangleIndices>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, triangles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__triangles,  // size() function pointer
    get_const_function__Mesh__triangles,  // get_const(index) function pointer
    get_function__Mesh__triangles,  // get(index) function pointer
    fetch_function__Mesh__triangles,  // fetch(index, &value) function pointer
    assign_function__Mesh__triangles,  // assign(index, value) function pointer
    resize_function__Mesh__triangles  // resize(index) function pointer
  },
  {
    "vertices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, vertices),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__vertices,  // size() function pointer
    get_const_function__Mesh__vertices,  // get_const(index) function pointer
    get_function__Mesh__vertices,  // get(index) function pointer
    fetch_function__Mesh__vertices,  // fetch(index, &value) function pointer
    assign_function__Mesh__vertices,  // assign(index, value) function pointer
    resize_function__Mesh__vertices  // resize(index) function pointer
  },
  {
    "vertex_stamps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, vertex_stamps),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__vertex_stamps,  // size() function pointer
    get_const_function__Mesh__vertex_stamps,  // get_const(index) function pointer
    get_function__Mesh__vertex_stamps,  // get(index) function pointer
    fetch_function__Mesh__vertex_stamps,  // fetch(index, &value) function pointer
    assign_function__Mesh__vertex_stamps,  // assign(index, value) function pointer
    resize_function__Mesh__vertex_stamps  // resize(index) function pointer
  },
  {
    "vertex_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, vertex_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__vertex_indices,  // size() function pointer
    get_const_function__Mesh__vertex_indices,  // get_const(index) function pointer
    get_function__Mesh__vertex_indices,  // get(index) function pointer
    fetch_function__Mesh__vertex_indices,  // fetch(index, &value) function pointer
    assign_function__Mesh__vertex_indices,  // assign(index, value) function pointer
    resize_function__Mesh__vertex_indices  // resize(index) function pointer
  },
  {
    "vertex_colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::ColorRGBA>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::Mesh, vertex_colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mesh__vertex_colors,  // size() function pointer
    get_const_function__Mesh__vertex_colors,  // get_const(index) function pointer
    get_function__Mesh__vertex_colors,  // get(index) function pointer
    fetch_function__Mesh__vertex_colors,  // fetch(index, &value) function pointer
    assign_function__Mesh__vertex_colors,  // assign(index, value) function pointer
    resize_function__Mesh__vertex_colors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Mesh_message_members = {
  "kimera_pgmo_msgs::msg",  // message namespace
  "Mesh",  // message name
  7,  // number of fields
  sizeof(kimera_pgmo_msgs::msg::Mesh),
  false,  // has_any_key_member_
  Mesh_message_member_array,  // message members
  Mesh_init_function,  // function to initialize message memory (memory has to be allocated)
  Mesh_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Mesh_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Mesh_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__Mesh__get_type_hash,
  &kimera_pgmo_msgs__msg__Mesh__get_type_description,
  &kimera_pgmo_msgs__msg__Mesh__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::msg::Mesh>()
{
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::Mesh_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, msg, Mesh)() {
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::Mesh_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
