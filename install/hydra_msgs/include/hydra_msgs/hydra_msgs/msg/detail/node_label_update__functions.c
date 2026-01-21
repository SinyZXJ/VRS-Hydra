// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice
#include "hydra_msgs/msg/detail/node_label_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hydra_msgs__msg__NodeLabelUpdate__init(hydra_msgs__msg__NodeLabelUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // label
  return true;
}

void
hydra_msgs__msg__NodeLabelUpdate__fini(hydra_msgs__msg__NodeLabelUpdate * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // label
}

bool
hydra_msgs__msg__NodeLabelUpdate__are_equal(const hydra_msgs__msg__NodeLabelUpdate * lhs, const hydra_msgs__msg__NodeLabelUpdate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  return true;
}

bool
hydra_msgs__msg__NodeLabelUpdate__copy(
  const hydra_msgs__msg__NodeLabelUpdate * input,
  hydra_msgs__msg__NodeLabelUpdate * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // label
  output->label = input->label;
  return true;
}

hydra_msgs__msg__NodeLabelUpdate *
hydra_msgs__msg__NodeLabelUpdate__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__NodeLabelUpdate * msg = (hydra_msgs__msg__NodeLabelUpdate *)allocator.allocate(sizeof(hydra_msgs__msg__NodeLabelUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydra_msgs__msg__NodeLabelUpdate));
  bool success = hydra_msgs__msg__NodeLabelUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hydra_msgs__msg__NodeLabelUpdate__destroy(hydra_msgs__msg__NodeLabelUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hydra_msgs__msg__NodeLabelUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hydra_msgs__msg__NodeLabelUpdate__Sequence__init(hydra_msgs__msg__NodeLabelUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__NodeLabelUpdate * data = NULL;

  if (size) {
    data = (hydra_msgs__msg__NodeLabelUpdate *)allocator.zero_allocate(size, sizeof(hydra_msgs__msg__NodeLabelUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydra_msgs__msg__NodeLabelUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydra_msgs__msg__NodeLabelUpdate__fini(&data[i - 1]);
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
hydra_msgs__msg__NodeLabelUpdate__Sequence__fini(hydra_msgs__msg__NodeLabelUpdate__Sequence * array)
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
      hydra_msgs__msg__NodeLabelUpdate__fini(&array->data[i]);
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

hydra_msgs__msg__NodeLabelUpdate__Sequence *
hydra_msgs__msg__NodeLabelUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hydra_msgs__msg__NodeLabelUpdate__Sequence * array = (hydra_msgs__msg__NodeLabelUpdate__Sequence *)allocator.allocate(sizeof(hydra_msgs__msg__NodeLabelUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hydra_msgs__msg__NodeLabelUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hydra_msgs__msg__NodeLabelUpdate__Sequence__destroy(hydra_msgs__msg__NodeLabelUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hydra_msgs__msg__NodeLabelUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hydra_msgs__msg__NodeLabelUpdate__Sequence__are_equal(const hydra_msgs__msg__NodeLabelUpdate__Sequence * lhs, const hydra_msgs__msg__NodeLabelUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hydra_msgs__msg__NodeLabelUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hydra_msgs__msg__NodeLabelUpdate__Sequence__copy(
  const hydra_msgs__msg__NodeLabelUpdate__Sequence * input,
  hydra_msgs__msg__NodeLabelUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hydra_msgs__msg__NodeLabelUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hydra_msgs__msg__NodeLabelUpdate * data =
      (hydra_msgs__msg__NodeLabelUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hydra_msgs__msg__NodeLabelUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hydra_msgs__msg__NodeLabelUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hydra_msgs__msg__NodeLabelUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
