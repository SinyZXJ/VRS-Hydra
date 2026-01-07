// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__rosidl_typesupport_introspection_c.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__functions.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vertex_updates`
#include "geometry_msgs/msg/point.h"
// Member `vertex_updates`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `vertex_updates_colors`
#include "std_msgs/msg/color_rgba.h"
// Member `vertex_updates_colors`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"
// Member `stamp_updates`
// Member `semantic_updates`
// Member `deleted_indices`
// Member `prev_indices`
// Member `curr_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `face_updates`
// Member `face_archive_updates`
#include "kimera_pgmo_msgs/msg/triangle_indices.h"
// Member `face_updates`
// Member `face_archive_updates`
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__msg__MeshDelta__init(message_memory);
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__msg__MeshDelta__fini(message_memory);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__vertex_updates(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__vertex_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__vertex_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__vertex_updates(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__vertex_updates_colors(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates_colors(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates_colors(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__vertex_updates_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates_colors(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__vertex_updates_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates_colors(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__vertex_updates_colors(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__stamp_updates(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__stamp_updates(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__stamp_updates(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__stamp_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__stamp_updates(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__stamp_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__stamp_updates(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__stamp_updates(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__semantic_updates(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__semantic_updates(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__semantic_updates(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__semantic_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__semantic_updates(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__semantic_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__semantic_updates(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__semantic_updates(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__face_updates(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_updates(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_updates(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__face_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((const kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_updates(untyped_member, index));
  kimera_pgmo_msgs__msg__TriangleIndices * value =
    (kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__face_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_updates(untyped_member, index));
  const kimera_pgmo_msgs__msg__TriangleIndices * value =
    (const kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__face_updates(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(member);
  return kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__face_archive_updates(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_archive_updates(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_archive_updates(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__face_archive_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((const kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_archive_updates(untyped_member, index));
  kimera_pgmo_msgs__msg__TriangleIndices * value =
    (kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__face_archive_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_archive_updates(untyped_member, index));
  const kimera_pgmo_msgs__msg__TriangleIndices * value =
    (const kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__face_archive_updates(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(member);
  return kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__deleted_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__deleted_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__deleted_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__deleted_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__deleted_indices(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__deleted_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__deleted_indices(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__deleted_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__prev_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__prev_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__prev_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__prev_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__prev_indices(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__prev_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__prev_indices(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__prev_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__curr_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__curr_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__curr_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__curr_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__curr_indices(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__curr_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__curr_indices(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__curr_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertex_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, vertex_updates),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__vertex_updates,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__vertex_updates,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__vertex_updates,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__vertex_updates  // resize(index) function pointer
  },
  {
    "vertex_updates_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, vertex_updates_colors),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__vertex_updates_colors,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__vertex_updates_colors,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__vertex_updates_colors,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__vertex_updates_colors,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__vertex_updates_colors,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__vertex_updates_colors  // resize(index) function pointer
  },
  {
    "stamp_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, stamp_updates),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__stamp_updates,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__stamp_updates,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__stamp_updates,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__stamp_updates,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__stamp_updates,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__stamp_updates  // resize(index) function pointer
  },
  {
    "semantic_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, semantic_updates),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__semantic_updates,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__semantic_updates,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__semantic_updates,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__semantic_updates,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__semantic_updates,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__semantic_updates  // resize(index) function pointer
  },
  {
    "face_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, face_updates),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__face_updates,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_updates,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_updates,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__face_updates,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__face_updates,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__face_updates  // resize(index) function pointer
  },
  {
    "face_archive_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, face_archive_updates),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__face_archive_updates,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__face_archive_updates,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__face_archive_updates,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__face_archive_updates,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__face_archive_updates,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__face_archive_updates  // resize(index) function pointer
  },
  {
    "deleted_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, deleted_indices),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__deleted_indices,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__deleted_indices,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__deleted_indices,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__deleted_indices,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__deleted_indices,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__deleted_indices  // resize(index) function pointer
  },
  {
    "prev_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, prev_indices),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__prev_indices,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__prev_indices,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__prev_indices,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__prev_indices,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__prev_indices,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__prev_indices  // resize(index) function pointer
  },
  {
    "curr_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, curr_indices),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__size_function__MeshDelta__curr_indices,  // size() function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_const_function__MeshDelta__curr_indices,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__get_function__MeshDelta__curr_indices,  // get(index) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__fetch_function__MeshDelta__curr_indices,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__assign_function__MeshDelta__curr_indices,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__resize_function__MeshDelta__curr_indices  // resize(index) function pointer
  },
  {
    "vertex_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, vertex_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, face_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__MeshDelta, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_members = {
  "kimera_pgmo_msgs__msg",  // message namespace
  "MeshDelta",  // message name
  13,  // number of fields
  sizeof(kimera_pgmo_msgs__msg__MeshDelta),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array,  // message members
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_hash,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, MeshDelta)() {
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, TriangleIndices)();
  kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, TriangleIndices)();
  if (!kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__msg__MeshDelta__rosidl_typesupport_introspection_c__MeshDelta_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
