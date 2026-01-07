// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh_delta.h"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_H_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vertex_updates'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'vertex_updates_colors'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'stamp_updates'
// Member 'semantic_updates'
// Member 'deleted_indices'
// Member 'prev_indices'
// Member 'curr_indices'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'face_updates'
// Member 'face_archive_updates'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.h"

/// Struct defined in msg/MeshDelta in the package kimera_pgmo_msgs.
/**
  * This message encodes Triangle mesh message
 */
typedef struct kimera_pgmo_msgs__msg__MeshDelta
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point__Sequence vertex_updates;
  std_msgs__msg__ColorRGBA__Sequence vertex_updates_colors;
  rosidl_runtime_c__uint64__Sequence stamp_updates;
  rosidl_runtime_c__uint32__Sequence semantic_updates;
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence face_updates;
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence face_archive_updates;
  rosidl_runtime_c__uint64__Sequence deleted_indices;
  rosidl_runtime_c__uint64__Sequence prev_indices;
  rosidl_runtime_c__uint64__Sequence curr_indices;
  uint64_t vertex_start;
  uint64_t face_start;
  uint16_t sequence_number;
} kimera_pgmo_msgs__msg__MeshDelta;

// Struct for a sequence of kimera_pgmo_msgs__msg__MeshDelta.
typedef struct kimera_pgmo_msgs__msg__MeshDelta__Sequence
{
  kimera_pgmo_msgs__msg__MeshDelta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__msg__MeshDelta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_H_
