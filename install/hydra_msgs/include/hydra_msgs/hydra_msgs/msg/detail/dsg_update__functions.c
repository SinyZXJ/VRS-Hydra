// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice
#include "hydra_msgs/msg/detail/dsg_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `layer_contents`
// Member `deleted_nodes`
// Member `deleted_edges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hydra_msgs__msg__DsgUpdate__init(hydra_msgs__msg__DsgUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hydra_msgs__msg__DsgUpdate__fini(msg);
    return false;
  }
  // layer_contents
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->layer_contents, 0)) {
    hydra_msgs__msg__DsgUpdate__fini(msg);
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->deleted_nodes, 0)) {
    hydra_msgs__msg__DsgUpdate__fini(msg);
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->deleted_edges, 0)) {
    hydra_msgs__msg__DsgUpdate__fini(msg);
    return false;
  }
  // full_update
  // sequence_number
  return true;
}

void
hydra_msgs__msg__DsgUpdate__fini(hydra_msgs__msg__DsgUpdate * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // layer_contents
  rosidl_runtime_c__uint8__Sequence__fini(&msg->layer_contents);
  // deleted_nodes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->deleted_nodes);
  // deleted_edges
  rosidl_runtime_c__uint64__Sequence__fini(&msg->deleted_edges);
  // full_update
  // sequence_number
}

bool
hydra_msgs__msg__DsgUpdate__are_equal(const hydra_msgs__msg__DsgUpdate * lhs, const hydra_msgs__msg__DsgUpdate * rhs)
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
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->layer_contents), &(rhs->layer_contents)))
  {
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->deleted_nodes), &(rhs->deleted_nodes)))
  {
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->deleted_edges), &(rhs->deleted_edges)))
  {
    return false;
  }
  // full_update
  if (lhs->full_update != rhs->full_update) {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  return true;
}

bool
hydra_msgs__msg__DsgUpdate__copy(
  const hydra_msgs__msg__DsgUpdate * input,
  hydra_msgs__msg__DsgUpdate * output)
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
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->layer_contents), &(output->layer_contents)))
  {
    return false;
  }
  // deleted_nodes
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->deleted_nodes), &(output->deleted_nodes)))
  {
    return false;
  }
  // deleted_edges
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->deleted_edges), &(output->deleted_edges)))
  {
    return false;
  }
  // full_update
  output->full_update = input->full_update;
  // sequence_number
  output->sequence_number = input->sequence_number;
  return true;
}

hydra_msgs__msg__DsgUpdate *
hydra_msgs__msg__DsgUpdate__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__DsgUpdate * msg = (hydra_msgs__msg__DsgUpdate *)allocator.allocate(sizeof(hydra_msgs__msg__DsgUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__msg__DsgUpdate));
  bool success = hydra_msgs__msg__DsgUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__msg__DsgUpdate__destroy(hydra_msgs__msg__DsgUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__msg__DsgUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__msg__DsgUpdate__Sequence__init(hydra_msgs__msg__DsgUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__DsgUpdate * data = NULL;

  if (size) {
    data = (hydra_msgs__msg__DsgUpdate *)allocator.zero_allocate(size, sizeof(hydra_msgs__msg__DsgUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__msg__DsgUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__msg__DsgUpdate__fini(&data[i - 1]);
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
hydra_msgs__msg__DsgUpdate__Sequence__fini(hydra_msgs__msg__DsgUpdate__Sequence * array)
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
      hydra_msgs__msg__DsgUpdate__fini(&array->data[i]);
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

hydra_msgs__msg__DsgUpdate__Sequence *
hydra_msgs__msg__DsgUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__DsgUpdate__Sequence * array = (hydra_msgs__msg__DsgUpdate__Sequence *)allocator.allocate(sizeof(hydra_msgs__msg__DsgUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__msg__DsgUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__msg__DsgUpdate__Sequence__destroy(hydra_msgs__msg__DsgUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__msg__DsgUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__msg__DsgUpdate__Sequence__are_equal(const hydra_msgs__msg__DsgUpdate__Sequence * lhs, const hydra_msgs__msg__DsgUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__msg__DsgUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__msg__DsgUpdate__Sequence__copy(
  const hydra_msgs__msg__DsgUpdate__Sequence * input,
  hydra_msgs__msg__DsgUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__msg__DsgUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__msg__DsgUpdate * data =
      (hydra_msgs__msg__DsgUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__msg__DsgUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__msg__DsgUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__msg__DsgUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
