// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/triangle_indices.h"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_H_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TriangleIndices in the package kimera_pgmo_msgs.
/**
  * Definition of a triangle's vertices
 */
typedef struct kimera_pgmo_msgs__msg__TriangleIndices
{
  uint32_t vertex_indices[3];
} kimera_pgmo_msgs__msg__TriangleIndices;

// Struct for a sequence of kimera_pgmo_msgs__msg__TriangleIndices.
typedef struct kimera_pgmo_msgs__msg__TriangleIndices__Sequence
{
  kimera_pgmo_msgs__msg__TriangleIndices * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__msg__TriangleIndices__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_H_
