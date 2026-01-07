// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vertex_updates`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `vertex_updates_colors`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `stamp_updates`
// Member `semantic_updates`
// Member `deleted_indices`
// Member `prev_indices`
// Member `curr_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `face_updates`
// Member `face_archive_updates`
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"

bool
kimera_pgmo_msgs__msg__MeshDelta__init(kimera_pgmo_msgs__msg__MeshDelta * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // vertex_updates
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertex_updates, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // vertex_updates_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->vertex_updates_colors, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // stamp_updates
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->stamp_updates, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // semantic_updates
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->semantic_updates, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // face_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(&msg->face_updates, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // face_archive_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(&msg->face_archive_updates, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // deleted_indices
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->deleted_indices, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // prev_indices
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->prev_indices, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // curr_indices
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->curr_indices, 0)) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
    return false;
  }
  // vertex_start
  // face_start
  // sequence_number
  return true;
}

void
kimera_pgmo_msgs__msg__MeshDelta__fini(kimera_pgmo_msgs__msg__MeshDelta * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vertex_updates
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertex_updates);
  // vertex_updates_colors
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->vertex_updates_colors);
  // stamp_updates
  rosidl_runtime_c__uint64__Sequence__fini(&msg->stamp_updates);
  // semantic_updates
  rosidl_runtime_c__uint32__Sequence__fini(&msg->semantic_updates);
  // face_updates
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(&msg->face_updates);
  // face_archive_updates
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(&msg->face_archive_updates);
  // deleted_indices
  rosidl_runtime_c__uint64__Sequence__fini(&msg->deleted_indices);
  // prev_indices
  rosidl_runtime_c__uint64__Sequence__fini(&msg->prev_indices);
  // curr_indices
  rosidl_runtime_c__uint64__Sequence__fini(&msg->curr_indices);
  // vertex_start
  // face_start
  // sequence_number
}

bool
kimera_pgmo_msgs__msg__MeshDelta__are_equal(const kimera_pgmo_msgs__msg__MeshDelta * lhs, const kimera_pgmo_msgs__msg__MeshDelta * rhs)
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
  // vertex_updates
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->vertex_updates), &(rhs->vertex_updates)))
  {
    return false;
  }
  // vertex_updates_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__are_equal(
      &(lhs->vertex_updates_colors), &(rhs->vertex_updates_colors)))
  {
    return false;
  }
  // stamp_updates
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->stamp_updates), &(rhs->stamp_updates)))
  {
    return false;
  }
  // semantic_updates
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->semantic_updates), &(rhs->semantic_updates)))
  {
    return false;
  }
  // face_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__are_equal(
      &(lhs->face_updates), &(rhs->face_updates)))
  {
    return false;
  }
  // face_archive_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__are_equal(
      &(lhs->face_archive_updates), &(rhs->face_archive_updates)))
  {
    return false;
  }
  // deleted_indices
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->deleted_indices), &(rhs->deleted_indices)))
  {
    return false;
  }
  // prev_indices
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->prev_indices), &(rhs->prev_indices)))
  {
    return false;
  }
  // curr_indices
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->curr_indices), &(rhs->curr_indices)))
  {
    return false;
  }
  // vertex_start
  if (lhs->vertex_start != rhs->vertex_start) {
    return false;
  }
  // face_start
  if (lhs->face_start != rhs->face_start) {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__MeshDelta__copy(
  const kimera_pgmo_msgs__msg__MeshDelta * input,
  kimera_pgmo_msgs__msg__MeshDelta * output)
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
  // vertex_updates
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->vertex_updates), &(output->vertex_updates)))
  {
    return false;
  }
  // vertex_updates_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__copy(
      &(input->vertex_updates_colors), &(output->vertex_updates_colors)))
  {
    return false;
  }
  // stamp_updates
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->stamp_updates), &(output->stamp_updates)))
  {
    return false;
  }
  // semantic_updates
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->semantic_updates), &(output->semantic_updates)))
  {
    return false;
  }
  // face_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__copy(
      &(input->face_updates), &(output->face_updates)))
  {
    return false;
  }
  // face_archive_updates
  if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__copy(
      &(input->face_archive_updates), &(output->face_archive_updates)))
  {
    return false;
  }
  // deleted_indices
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->deleted_indices), &(output->deleted_indices)))
  {
    return false;
  }
  // prev_indices
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->prev_indices), &(output->prev_indices)))
  {
    return false;
  }
  // curr_indices
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->curr_indices), &(output->curr_indices)))
  {
    return false;
  }
  // vertex_start
  output->vertex_start = input->vertex_start;
  // face_start
  output->face_start = input->face_start;
  // sequence_number
  output->sequence_number = input->sequence_number;
  return true;
}

kimera_pgmo_msgs__msg__MeshDelta *
kimera_pgmo_msgs__msg__MeshDelta__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__MeshDelta * msg = (kimera_pgmo_msgs__msg__MeshDelta *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__MeshDelta), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__msg__MeshDelta));
  bool success = kimera_pgmo_msgs__msg__MeshDelta__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__msg__MeshDelta__destroy(kimera_pgmo_msgs__msg__MeshDelta * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__msg__MeshDelta__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__msg__MeshDelta__Sequence__init(kimera_pgmo_msgs__msg__MeshDelta__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__MeshDelta * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__msg__MeshDelta *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__msg__MeshDelta), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__msg__MeshDelta__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__msg__MeshDelta__fini(&data[i - 1]);
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
kimera_pgmo_msgs__msg__MeshDelta__Sequence__fini(kimera_pgmo_msgs__msg__MeshDelta__Sequence * array)
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
      kimera_pgmo_msgs__msg__MeshDelta__fini(&array->data[i]);
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

kimera_pgmo_msgs__msg__MeshDelta__Sequence *
kimera_pgmo_msgs__msg__MeshDelta__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__MeshDelta__Sequence * array = (kimera_pgmo_msgs__msg__MeshDelta__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__MeshDelta__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__msg__MeshDelta__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__msg__MeshDelta__Sequence__destroy(kimera_pgmo_msgs__msg__MeshDelta__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__msg__MeshDelta__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__msg__MeshDelta__Sequence__are_equal(const kimera_pgmo_msgs__msg__MeshDelta__Sequence * lhs, const kimera_pgmo_msgs__msg__MeshDelta__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__msg__MeshDelta__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__MeshDelta__Sequence__copy(
  const kimera_pgmo_msgs__msg__MeshDelta__Sequence * input,
  kimera_pgmo_msgs__msg__MeshDelta__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__msg__MeshDelta);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__msg__MeshDelta * data =
      (kimera_pgmo_msgs__msg__MeshDelta *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__msg__MeshDelta__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__msg__MeshDelta__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__msg__MeshDelta__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
