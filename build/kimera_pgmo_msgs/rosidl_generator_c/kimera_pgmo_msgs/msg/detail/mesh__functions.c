// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ns`
#include "rosidl_runtime_c/string_functions.h"
// Member `triangles`
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"
// Member `vertices`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `vertex_stamps`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `vertex_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `vertex_colors`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
kimera_pgmo_msgs__msg__Mesh__init(kimera_pgmo_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // ns
  if (!rosidl_runtime_c__String__init(&msg->ns)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // triangles
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(&msg->triangles, 0)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertices, 0)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // vertex_stamps
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->vertex_stamps, 0)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // vertex_indices
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->vertex_indices, 0)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // vertex_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->vertex_colors, 0)) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
    return false;
  }
  return true;
}

void
kimera_pgmo_msgs__msg__Mesh__fini(kimera_pgmo_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ns
  rosidl_runtime_c__String__fini(&msg->ns);
  // triangles
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(&msg->triangles);
  // vertices
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertices);
  // vertex_stamps
  builtin_interfaces__msg__Time__Sequence__fini(&msg->vertex_stamps);
  // vertex_indices
  rosidl_runtime_c__int32__Sequence__fini(&msg->vertex_indices);
  // vertex_colors
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->vertex_colors);
}

bool
kimera_pgmo_msgs__msg__Mesh__are_equal(const kimera_pgmo_msgs__msg__Mesh * lhs, const kimera_pgmo_msgs__msg__Mesh * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // ns
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ns), &(rhs->ns)))
  {
    return false;
  }
  // triangles
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__are_equal(
      &(lhs->triangles), &(rhs->triangles)))
  {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->vertices), &(rhs->vertices)))
  {
    return false;
  }
  // vertex_stamps
  if (!builtin_interfaces__msg__Time__Sequence__are_equal(
      &(lhs->vertex_stamps), &(rhs->vertex_stamps)))
  {
    return false;
  }
  // vertex_indices
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->vertex_indices), &(rhs->vertex_indices)))
  {
    return false;
  }
  // vertex_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__are_equal(
      &(lhs->vertex_colors), &(rhs->vertex_colors)))
  {
    return false;
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__Mesh__copy(
  const kimera_pgmo_msgs__msg__Mesh * input,
  kimera_pgmo_msgs__msg__Mesh * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // ns
  if (!rosidl_runtime_c__String__copy(
      &(input->ns), &(output->ns)))
  {
    return false;
  }
  // triangles
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__copy(
      &(input->triangles), &(output->triangles)))
  {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->vertices), &(output->vertices)))
  {
    return false;
  }
  // vertex_stamps
  if (!builtin_interfaces__msg__Time__Sequence__copy(
      &(input->vertex_stamps), &(output->vertex_stamps)))
  {
    return false;
  }
  // vertex_indices
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->vertex_indices), &(output->vertex_indices)))
  {
    return false;
  }
  // vertex_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__copy(
      &(input->vertex_colors), &(output->vertex_colors)))
  {
    return false;
  }
  return true;
}

kimera_pgmo_msgs__msg__Mesh *
kimera_pgmo_msgs__msg__Mesh__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__Mesh * msg = (kimera_pgmo_msgs__msg__Mesh *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__Mesh), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__msg__Mesh));
  bool success = kimera_pgmo_msgs__msg__Mesh__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__msg__Mesh__destroy(kimera_pgmo_msgs__msg__Mesh * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__msg__Mesh__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__msg__Mesh__Sequence__init(kimera_pgmo_msgs__msg__Mesh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__Mesh * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__msg__Mesh *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__msg__Mesh), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__msg__Mesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__msg__Mesh__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kimera_pgmo_msgs__msg__Mesh__Sequence__fini(kimera_pgmo_msgs__msg__Mesh__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kimera_pgmo_msgs__msg__Mesh__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kimera_pgmo_msgs__msg__Mesh__Sequence *
kimera_pgmo_msgs__msg__Mesh__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__Mesh__Sequence * array = (kimera_pgmo_msgs__msg__Mesh__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__Mesh__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__msg__Mesh__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__msg__Mesh__Sequence__destroy(kimera_pgmo_msgs__msg__Mesh__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__msg__Mesh__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__msg__Mesh__Sequence__are_equal(const kimera_pgmo_msgs__msg__Mesh__Sequence * lhs, const kimera_pgmo_msgs__msg__Mesh__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__msg__Mesh__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__Mesh__Sequence__copy(
  const kimera_pgmo_msgs__msg__Mesh__Sequence * input,
  kimera_pgmo_msgs__msg__Mesh__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__msg__Mesh);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__msg__Mesh * data =
      (kimera_pgmo_msgs__msg__Mesh *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__msg__Mesh__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__msg__Mesh__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__msg__Mesh__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
