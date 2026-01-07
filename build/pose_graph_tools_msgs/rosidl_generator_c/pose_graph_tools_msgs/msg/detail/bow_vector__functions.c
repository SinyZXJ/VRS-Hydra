// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `word_ids`
// Member `word_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pose_graph_tools_msgs__msg__BowVector__init(pose_graph_tools_msgs__msg__BowVector * msg)
{
  if (!msg) {
    return false;
  }
  // word_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->word_ids, 0)) {
    pose_graph_tools_msgs__msg__BowVector__fini(msg);
    return false;
  }
  // word_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->word_values, 0)) {
    pose_graph_tools_msgs__msg__BowVector__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__BowVector__fini(pose_graph_tools_msgs__msg__BowVector * msg)
{
  if (!msg) {
    return;
  }
  // word_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->word_ids);
  // word_values
  rosidl_runtime_c__float__Sequence__fini(&msg->word_values);
}

bool
pose_graph_tools_msgs__msg__BowVector__are_equal(const pose_graph_tools_msgs__msg__BowVector * lhs, const pose_graph_tools_msgs__msg__BowVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // word_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->word_ids), &(rhs->word_ids)))
  {
    return false;
  }
  // word_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->word_values), &(rhs->word_values)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowVector__copy(
  const pose_graph_tools_msgs__msg__BowVector * input,
  pose_graph_tools_msgs__msg__BowVector * output)
{
  if (!input || !output) {
    return false;
  }
  // word_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->word_ids), &(output->word_ids)))
  {
    return false;
  }
  // word_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->word_values), &(output->word_values)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__BowVector *
pose_graph_tools_msgs__msg__BowVector__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowVector * msg = (pose_graph_tools_msgs__msg__BowVector *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__BowVector));
  bool success = pose_graph_tools_msgs__msg__BowVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__BowVector__destroy(pose_graph_tools_msgs__msg__BowVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__BowVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__BowVector__Sequence__init(pose_graph_tools_msgs__msg__BowVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowVector * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__BowVector *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__BowVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__BowVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__BowVector__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__BowVector__Sequence__fini(pose_graph_tools_msgs__msg__BowVector__Sequence * array)
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
      pose_graph_tools_msgs__msg__BowVector__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__BowVector__Sequence *
pose_graph_tools_msgs__msg__BowVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowVector__Sequence * array = (pose_graph_tools_msgs__msg__BowVector__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__BowVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__BowVector__Sequence__destroy(pose_graph_tools_msgs__msg__BowVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__BowVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__BowVector__Sequence__are_equal(const pose_graph_tools_msgs__msg__BowVector__Sequence * lhs, const pose_graph_tools_msgs__msg__BowVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowVector__Sequence__copy(
  const pose_graph_tools_msgs__msg__BowVector__Sequence * input,
  pose_graph_tools_msgs__msg__BowVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__BowVector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__BowVector * data =
      (pose_graph_tools_msgs__msg__BowVector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__BowVector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__BowVector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
