// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh.h"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_H_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_H_

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
// Member 'ns'
#include "rosidl_runtime_c/string.h"
// Member 'triangles'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.h"
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'vertex_stamps'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'vertex_indices'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'vertex_colors'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/Mesh in the package kimera_pgmo_msgs.
/**
  * This message encodes Triangle mesh message
 */
typedef struct kimera_pgmo_msgs__msg__Mesh
{
  std_msgs__msg__Header header;
  /// namespace of the mesh used to identify the corresponding robot and visual. Separating hierarchical namespaces with '/' is supported (e.g. robot0/mesh123)
  rosidl_runtime_c__String ns;
  /// list of triangles; the index values refer to positions in vertices (and vertex_normals, if given)
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence triangles;
  /// the actual vertices that make up the mesh
  geometry_msgs__msg__Point__Sequence vertices;
  /// time stamps associated to each of the vertices
  builtin_interfaces__msg__Time__Sequence vertex_stamps;
  /// index of mesh graph vertex associated to each of the vertices
  rosidl_runtime_c__int32__Sequence vertex_indices;
  std_msgs__msg__ColorRGBA__Sequence vertex_colors;
} kimera_pgmo_msgs__msg__Mesh;

// Struct for a sequence of kimera_pgmo_msgs__msg__Mesh.
typedef struct kimera_pgmo_msgs__msg__Mesh__Sequence
{
  kimera_pgmo_msgs__msg__Mesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__msg__Mesh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_H_
