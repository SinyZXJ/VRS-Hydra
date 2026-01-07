// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kimera_pgmo_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kimera_pgmo_msgs/msg/detail/mesh__functions.h"
#include "kimera_pgmo_msgs/msg/detail/mesh__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ns`
#include "rosidl_runtime_c/string_functions.h"
// Member `triangles`
#include "kimera_pgmo_msgs/msg/triangle_indices.h"
// Member `triangles`
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__rosidl_typesupport_introspection_c.h"
// Member `vertices`
#include "geometry_msgs/msg/point.h"
// Member `vertices`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `vertex_stamps`
#include "builtin_interfaces/msg/time.h"
// Member `vertex_stamps`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `vertex_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `vertex_colors`
#include "std_msgs/msg/color_rgba.h"
// Member `vertex_colors`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__msg__Mesh__init(message_memory);
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__msg__Mesh__fini(message_memory);
}

size_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__triangles(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__triangles(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (const kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__triangles(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((const kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__triangles(untyped_member, index));
  kimera_pgmo_msgs__msg__TriangleIndices * value =
    (kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__msg__TriangleIndices * item =
    ((kimera_pgmo_msgs__msg__TriangleIndices *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__triangles(untyped_member, index));
  const kimera_pgmo_msgs__msg__TriangleIndices * value =
    (const kimera_pgmo_msgs__msg__TriangleIndices *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__triangles(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * member =
    (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)(untyped_member);
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(member);
  return kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertices(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_stamps(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_stamps(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_stamps(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_stamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Time * item =
    ((const builtin_interfaces__msg__Time *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_stamps(untyped_member, index));
  builtin_interfaces__msg__Time * value =
    (builtin_interfaces__msg__Time *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_stamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Time * item =
    ((builtin_interfaces__msg__Time *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_stamps(untyped_member, index));
  const builtin_interfaces__msg__Time * value =
    (const builtin_interfaces__msg__Time *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_stamps(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  builtin_interfaces__msg__Time__Sequence__fini(member);
  return builtin_interfaces__msg__Time__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_indices(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_indices(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_colors(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_colors(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_colors(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_colors(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_colors(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_colors(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, ns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "triangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, triangles),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__triangles,  // size() function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__triangles,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__triangles,  // get(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__triangles,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__triangles,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__triangles  // resize(index) function pointer
  },
  {
    "vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, vertices),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertices,  // size() function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices,  // get(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertices,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertices,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices  // resize(index) function pointer
  },
  {
    "vertex_stamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, vertex_stamps),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_stamps,  // size() function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_stamps,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_stamps,  // get(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_stamps,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_stamps,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_stamps  // resize(index) function pointer
  },
  {
    "vertex_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, vertex_indices),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_indices,  // size() function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_indices,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_indices,  // get(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_indices,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_indices,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_indices  // resize(index) function pointer
  },
  {
    "vertex_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__Mesh, vertex_colors),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertex_colors,  // size() function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertex_colors,  // get_const(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertex_colors,  // get(index) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertex_colors,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertex_colors,  // assign(index, value) function pointer
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertex_colors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_members = {
  "kimera_pgmo_msgs__msg",  // message namespace
  "Mesh",  // message name
  7,  // number of fields
  sizeof(kimera_pgmo_msgs__msg__Mesh),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array,  // message members
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__Mesh__get_type_hash,
  &kimera_pgmo_msgs__msg__Mesh__get_type_description,
  &kimera_pgmo_msgs__msg__Mesh__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, Mesh)() {
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, TriangleIndices)();
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
