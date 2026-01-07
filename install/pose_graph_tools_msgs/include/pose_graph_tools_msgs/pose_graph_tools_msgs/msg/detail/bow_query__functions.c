// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bow_vector`
#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"

bool
pose_graph_tools_msgs__msg__BowQuery__init(pose_graph_tools_msgs__msg__BowQuery * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // pose_id
  // bow_vector
  if (!pose_graph_tools_msgs__msg__BowVector__init(&msg->bow_vector)) {
    pose_graph_tools_msgs__msg__BowQuery__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__BowQuery__fini(pose_graph_tools_msgs__msg__BowQuery * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // pose_id
  // bow_vector
  pose_graph_tools_msgs__msg__BowVector__fini(&msg->bow_vector);
}

bool
pose_graph_tools_msgs__msg__BowQuery__are_equal(const pose_graph_tools_msgs__msg__BowQuery * lhs, const pose_graph_tools_msgs__msg__BowQuery * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // pose_id
  if (lhs->pose_id != rhs->pose_id) {
    return false;
  }
  // bow_vector
  if (!pose_graph_tools_msgs__msg__BowVector__are_equal(
      &(lhs->bow_vector), &(rhs->bow_vector)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowQuery__copy(
  const pose_graph_tools_msgs__msg__BowQuery * input,
  pose_graph_tools_msgs__msg__BowQuery * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // pose_id
  output->pose_id = input->pose_id;
  // bow_vector
  if (!pose_graph_tools_msgs__msg__BowVector__copy(
      &(input->bow_vector), &(output->bow_vector)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__BowQuery *
pose_graph_tools_msgs__msg__BowQuery__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowQuery * msg = (pose_graph_tools_msgs__msg__BowQuery *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowQuery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__BowQuery));
  bool success = pose_graph_tools_msgs__msg__BowQuery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__BowQuery__destroy(pose_graph_tools_msgs__msg__BowQuery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__BowQuery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__BowQuery__Sequence__init(pose_graph_tools_msgs__msg__BowQuery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowQuery * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__BowQuery *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__BowQuery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__BowQuery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__BowQuery__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__BowQuery__Sequence__fini(pose_graph_tools_msgs__msg__BowQuery__Sequence * array)
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
      pose_graph_tools_msgs__msg__BowQuery__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__BowQuery__Sequence *
pose_graph_tools_msgs__msg__BowQuery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__BowQuery__Sequence * array = (pose_graph_tools_msgs__msg__BowQuery__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__BowQuery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__BowQuery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__BowQuery__Sequence__destroy(pose_graph_tools_msgs__msg__BowQuery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__BowQuery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__BowQuery__Sequence__are_equal(const pose_graph_tools_msgs__msg__BowQuery__Sequence * lhs, const pose_graph_tools_msgs__msg__BowQuery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowQuery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__BowQuery__Sequence__copy(
  const pose_graph_tools_msgs__msg__BowQuery__Sequence * input,
  pose_graph_tools_msgs__msg__BowQuery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__BowQuery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__BowQuery * data =
      (pose_graph_tools_msgs__msg__BowQuery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__BowQuery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__BowQuery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__BowQuery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
