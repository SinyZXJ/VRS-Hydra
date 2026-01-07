// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hydra_msgs:msg/ActiveLayer.idl
// generated code does not contain a copyright notice
#include "hydra_msgs/msg/detail/active_layer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `layer_contents`
#include "rosidl_runtime_c/string_functions.h"
// Member `deleted_nodes`
// Member `deleted_edges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hydra_msgs__msg__ActiveLayer__init(hydra_msgs__msg__ActiveLayer * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hydra_msgs__msg__ActiveLayer__fini(msg);
    return false;
  }
  // layer_contents
  if (!rosidl_runtime_c__String__init(&msg->layer_contents)) {
    hydra_msgs__msg__ActiveLayer__fini(msg);
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->deleted_nodes, 0)) {
    hydra_msgs__msg__ActiveLayer__fini(msg);
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->deleted_edges, 0)) {
    hydra_msgs__msg__ActiveLayer__fini(msg);
    return false;
  }
  return true;
}

void
hydra_msgs__msg__ActiveLayer__fini(hydra_msgs__msg__ActiveLayer * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // layer_contents
  rosidl_runtime_c__String__fini(&msg->layer_contents);
  // deleted_nodes
  rosidl_runtime_c__int64__Sequence__fini(&msg->deleted_nodes);
  // deleted_edges
  rosidl_runtime_c__int64__Sequence__fini(&msg->deleted_edges);
}

bool
hydra_msgs__msg__ActiveLayer__are_equal(const hydra_msgs__msg__ActiveLayer * lhs, const hydra_msgs__msg__ActiveLayer * rhs)
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
  // layer_contents
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->layer_contents), &(rhs->layer_contents)))
  {
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->deleted_nodes), &(rhs->deleted_nodes)))
  {
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->deleted_edges), &(rhs->deleted_edges)))
  {
    return false;
  }
  return true;
}

bool
hydra_msgs__msg__ActiveLayer__copy(
  const hydra_msgs__msg__ActiveLayer * input,
  hydra_msgs__msg__ActiveLayer * output)
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
  // layer_contents
  if (!rosidl_runtime_c__String__copy(
      &(input->layer_contents), &(output->layer_contents)))
  {
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->deleted_nodes), &(output->deleted_nodes)))
  {
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->deleted_edges), &(output->deleted_edges)))
  {
    return false;
  }
  return true;
}

hydra_msgs__msg__ActiveLayer *
hydra_msgs__msg__ActiveLayer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__ActiveLayer * msg = (hydra_msgs__msg__ActiveLayer *)allocator.allocate(sizeof(hydra_msgs__msg__ActiveLayer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__msg__ActiveLayer));
  bool success = hydra_msgs__msg__ActiveLayer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__msg__ActiveLayer__destroy(hydra_msgs__msg__ActiveLayer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__msg__ActiveLayer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__msg__ActiveLayer__Sequence__init(hydra_msgs__msg__ActiveLayer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__ActiveLayer * data = NULL;

  if (size) {
    data = (hydra_msgs__msg__ActiveLayer *)allocator.zero_allocate(size, sizeof(hydra_msgs__msg__ActiveLayer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__msg__ActiveLayer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__msg__ActiveLayer__fini(&data[i - 1]);
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
hydra_msgs__msg__ActiveLayer__Sequence__fini(hydra_msgs__msg__ActiveLayer__Sequence * array)
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
      hydra_msgs__msg__ActiveLayer__fini(&array->data[i]);
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

hydra_msgs__msg__ActiveLayer__Sequence *
hydra_msgs__msg__ActiveLayer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__ActiveLayer__Sequence * array = (hydra_msgs__msg__ActiveLayer__Sequence *)allocator.allocate(sizeof(hydra_msgs__msg__ActiveLayer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__msg__ActiveLayer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__msg__ActiveLayer__Sequence__destroy(hydra_msgs__msg__ActiveLayer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__msg__ActiveLayer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__msg__ActiveLayer__Sequence__are_equal(const hydra_msgs__msg__ActiveLayer__Sequence * lhs, const hydra_msgs__msg__ActiveLayer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__msg__ActiveLayer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__msg__ActiveLayer__Sequence__copy(
  const hydra_msgs__msg__ActiveLayer__Sequence * input,
  hydra_msgs__msg__ActiveLayer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__msg__ActiveLayer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__msg__ActiveLayer * data =
      (hydra_msgs__msg__ActiveLayer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__msg__ActiveLayer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__msg__ActiveLayer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__msg__ActiveLayer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
