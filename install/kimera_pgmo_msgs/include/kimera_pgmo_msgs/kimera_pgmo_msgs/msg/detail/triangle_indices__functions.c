// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kimera_pgmo_msgs__msg__TriangleIndices__init(kimera_pgmo_msgs__msg__TriangleIndices * msg)
{
  if (!msg) {
    return false;
  }
  // vertex_indices
  return true;
}

void
kimera_pgmo_msgs__msg__TriangleIndices__fini(kimera_pgmo_msgs__msg__TriangleIndices * msg)
{
  if (!msg) {
    return;
  }
  // vertex_indices
}

bool
kimera_pgmo_msgs__msg__TriangleIndices__are_equal(const kimera_pgmo_msgs__msg__TriangleIndices * lhs, const kimera_pgmo_msgs__msg__TriangleIndices * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vertex_indices
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vertex_indices[i] != rhs->vertex_indices[i]) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__TriangleIndices__copy(
  const kimera_pgmo_msgs__msg__TriangleIndices * input,
  kimera_pgmo_msgs__msg__TriangleIndices * output)
{
  if (!input || !output) {
    return false;
  }
  // vertex_indices
  for (size_t i = 0; i < 3; ++i) {
    output->vertex_indices[i] = input->vertex_indices[i];
  }
  return true;
}

kimera_pgmo_msgs__msg__TriangleIndices *
kimera_pgmo_msgs__msg__TriangleIndices__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__TriangleIndices * msg = (kimera_pgmo_msgs__msg__TriangleIndices *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__TriangleIndices), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__msg__TriangleIndices));
  bool success = kimera_pgmo_msgs__msg__TriangleIndices__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__msg__TriangleIndices__destroy(kimera_pgmo_msgs__msg__TriangleIndices * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__msg__TriangleIndices__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(kimera_pgmo_msgs__msg__TriangleIndices__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__TriangleIndices * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__msg__TriangleIndices *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__msg__TriangleIndices), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__msg__TriangleIndices__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__msg__TriangleIndices__fini(&data[i - 1]);
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
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(kimera_pgmo_msgs__msg__TriangleIndices__Sequence * array)
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
      kimera_pgmo_msgs__msg__TriangleIndices__fini(&array->data[i]);
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

kimera_pgmo_msgs__msg__TriangleIndices__Sequence *
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * array = (kimera_pgmo_msgs__msg__TriangleIndices__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__msg__TriangleIndices__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__destroy(kimera_pgmo_msgs__msg__TriangleIndices__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__are_equal(const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * lhs, const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__msg__TriangleIndices__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__msg__TriangleIndices__Sequence__copy(
  const kimera_pgmo_msgs__msg__TriangleIndices__Sequence * input,
  kimera_pgmo_msgs__msg__TriangleIndices__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__msg__TriangleIndices);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__msg__TriangleIndices * data =
      (kimera_pgmo_msgs__msg__TriangleIndices *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__msg__TriangleIndices__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__msg__TriangleIndices__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__msg__TriangleIndices__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
