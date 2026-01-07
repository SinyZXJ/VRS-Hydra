// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__functions.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.hpp"
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

void MeshDelta_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::msg::MeshDelta(_init);
}

void MeshDelta_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::msg::MeshDelta *>(message_memory);
  typed_message->~MeshDelta();
}

size_t size_function__MeshDelta__vertex_updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__vertex_updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__vertex_updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__vertex_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__MeshDelta__vertex_updates(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__vertex_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__MeshDelta__vertex_updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__vertex_updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__vertex_updates_colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__vertex_updates_colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__vertex_updates_colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__vertex_updates_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(
    get_const_function__MeshDelta__vertex_updates_colors(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__vertex_updates_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(
    get_function__MeshDelta__vertex_updates_colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__vertex_updates_colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__stamp_updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__stamp_updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__stamp_updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__stamp_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__MeshDelta__stamp_updates(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__stamp_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__MeshDelta__stamp_updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__stamp_updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__semantic_updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__semantic_updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__semantic_updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__semantic_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__MeshDelta__semantic_updates(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__semantic_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__MeshDelta__semantic_updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__semantic_updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__face_updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__face_updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__face_updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__face_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_const_function__MeshDelta__face_updates(untyped_member, index));
  auto & value = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__face_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_function__MeshDelta__face_updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__face_updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__face_archive_updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__face_archive_updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__face_archive_updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__face_archive_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_const_function__MeshDelta__face_archive_updates(untyped_member, index));
  auto & value = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__face_archive_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(
    get_function__MeshDelta__face_archive_updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__face_archive_updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kimera_pgmo_msgs::msg::TriangleIndices> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__deleted_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__deleted_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__deleted_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__deleted_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__MeshDelta__deleted_indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__deleted_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__MeshDelta__deleted_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__deleted_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__prev_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__prev_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__prev_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__prev_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__MeshDelta__prev_indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__prev_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__MeshDelta__prev_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__prev_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshDelta__curr_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshDelta__curr_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshDelta__curr_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshDelta__curr_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__MeshDelta__curr_indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__MeshDelta__curr_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__MeshDelta__curr_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__MeshDelta__curr_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeshDelta_message_member_array[13] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vertex_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, vertex_updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__vertex_updates,  // size() function pointer
    get_const_function__MeshDelta__vertex_updates,  // get_const(index) function pointer
    get_function__MeshDelta__vertex_updates,  // get(index) function pointer
    fetch_function__MeshDelta__vertex_updates,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__vertex_updates,  // assign(index, value) function pointer
    resize_function__MeshDelta__vertex_updates  // resize(index) function pointer
  },
  {
    "vertex_updates_colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::ColorRGBA>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, vertex_updates_colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__vertex_updates_colors,  // size() function pointer
    get_const_function__MeshDelta__vertex_updates_colors,  // get_const(index) function pointer
    get_function__MeshDelta__vertex_updates_colors,  // get(index) function pointer
    fetch_function__MeshDelta__vertex_updates_colors,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__vertex_updates_colors,  // assign(index, value) function pointer
    resize_function__MeshDelta__vertex_updates_colors  // resize(index) function pointer
  },
  {
    "stamp_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, stamp_updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__stamp_updates,  // size() function pointer
    get_const_function__MeshDelta__stamp_updates,  // get_const(index) function pointer
    get_function__MeshDelta__stamp_updates,  // get(index) function pointer
    fetch_function__MeshDelta__stamp_updates,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__stamp_updates,  // assign(index, value) function pointer
    resize_function__MeshDelta__stamp_updates  // resize(index) function pointer
  },
  {
    "semantic_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, semantic_updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__semantic_updates,  // size() function pointer
    get_const_function__MeshDelta__semantic_updates,  // get_const(index) function pointer
    get_function__MeshDelta__semantic_updates,  // get(index) function pointer
    fetch_function__MeshDelta__semantic_updates,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__semantic_updates,  // assign(index, value) function pointer
    resize_function__MeshDelta__semantic_updates  // resize(index) function pointer
  },
  {
    "face_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::msg::TriangleIndices>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, face_updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__face_updates,  // size() function pointer
    get_const_function__MeshDelta__face_updates,  // get_const(index) function pointer
    get_function__MeshDelta__face_updates,  // get(index) function pointer
    fetch_function__MeshDelta__face_updates,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__face_updates,  // assign(index, value) function pointer
    resize_function__MeshDelta__face_updates  // resize(index) function pointer
  },
  {
    "face_archive_updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::msg::TriangleIndices>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, face_archive_updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__face_archive_updates,  // size() function pointer
    get_const_function__MeshDelta__face_archive_updates,  // get_const(index) function pointer
    get_function__MeshDelta__face_archive_updates,  // get(index) function pointer
    fetch_function__MeshDelta__face_archive_updates,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__face_archive_updates,  // assign(index, value) function pointer
    resize_function__MeshDelta__face_archive_updates  // resize(index) function pointer
  },
  {
    "deleted_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, deleted_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__deleted_indices,  // size() function pointer
    get_const_function__MeshDelta__deleted_indices,  // get_const(index) function pointer
    get_function__MeshDelta__deleted_indices,  // get(index) function pointer
    fetch_function__MeshDelta__deleted_indices,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__deleted_indices,  // assign(index, value) function pointer
    resize_function__MeshDelta__deleted_indices  // resize(index) function pointer
  },
  {
    "prev_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, prev_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__prev_indices,  // size() function pointer
    get_const_function__MeshDelta__prev_indices,  // get_const(index) function pointer
    get_function__MeshDelta__prev_indices,  // get(index) function pointer
    fetch_function__MeshDelta__prev_indices,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__prev_indices,  // assign(index, value) function pointer
    resize_function__MeshDelta__prev_indices  // resize(index) function pointer
  },
  {
    "curr_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, curr_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshDelta__curr_indices,  // size() function pointer
    get_const_function__MeshDelta__curr_indices,  // get_const(index) function pointer
    get_function__MeshDelta__curr_indices,  // get(index) function pointer
    fetch_function__MeshDelta__curr_indices,  // fetch(index, &value) function pointer
    assign_function__MeshDelta__curr_indices,  // assign(index, value) function pointer
    resize_function__MeshDelta__curr_indices  // resize(index) function pointer
  },
  {
    "vertex_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, vertex_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "face_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, face_start),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::MeshDelta, sequence_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeshDelta_message_members = {
  "kimera_pgmo_msgs::msg",  // message namespace
  "MeshDelta",  // message name
  13,  // number of fields
  sizeof(kimera_pgmo_msgs::msg::MeshDelta),
  false,  // has_any_key_member_
  MeshDelta_message_member_array,  // message members
  MeshDelta_init_function,  // function to initialize message memory (memory has to be allocated)
  MeshDelta_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeshDelta_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeshDelta_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_hash,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::msg::MeshDelta>()
{
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::MeshDelta_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, msg, MeshDelta)() {
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::MeshDelta_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
