// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/time_range_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start`
// Member `end`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pose_graph_tools_msgs__msg__TimeRangeQuery__init(pose_graph_tools_msgs__msg__TimeRangeQuery * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pose_graph_tools_msgs__msg__TimeRangeQuery__fini(msg);
    return false;
  }
  // source_robot_id
  // destination_robot_id
  // start
  if (!builtin_interfaces__msg__Time__init(&msg->start)) {
    pose_graph_tools_msgs__msg__TimeRangeQuery__fini(msg);
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__init(&msg->end)) {
    pose_graph_tools_msgs__msg__TimeRangeQuery__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__TimeRangeQuery__fini(pose_graph_tools_msgs__msg__TimeRangeQuery * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // source_robot_id
  // destination_robot_id
  // start
  builtin_interfaces__msg__Time__fini(&msg->start);
  // end
  builtin_interfaces__msg__Time__fini(&msg->end);
}

bool
pose_graph_tools_msgs__msg__TimeRangeQuery__are_equal(const pose_graph_tools_msgs__msg__TimeRangeQuery * lhs, const pose_graph_tools_msgs__msg__TimeRangeQuery * rhs)
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
  // source_robot_id
  if (lhs->source_robot_id != rhs->source_robot_id) {
    return false;
  }
  // destination_robot_id
  if (lhs->destination_robot_id != rhs->destination_robot_id) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__TimeRangeQuery__copy(
  const pose_graph_tools_msgs__msg__TimeRangeQuery * input,
  pose_graph_tools_msgs__msg__TimeRangeQuery * output)
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
  // source_robot_id
  output->source_robot_id = input->source_robot_id;
  // destination_robot_id
  output->destination_robot_id = input->destination_robot_id;
  // start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__TimeRangeQuery *
pose_graph_tools_msgs__msg__TimeRangeQuery__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__TimeRangeQuery * msg = (pose_graph_tools_msgs__msg__TimeRangeQuery *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__TimeRangeQuery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__TimeRangeQuery));
  bool success = pose_graph_tools_msgs__msg__TimeRangeQuery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__TimeRangeQuery__destroy(pose_graph_tools_msgs__msg__TimeRangeQuery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__TimeRangeQuery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__init(pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__TimeRangeQuery * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__TimeRangeQuery *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__TimeRangeQuery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__TimeRangeQuery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__TimeRangeQuery__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__fini(pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * array)
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
      pose_graph_tools_msgs__msg__TimeRangeQuery__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence *
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * array = (pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__destroy(pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__are_equal(const pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * lhs, const pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__TimeRangeQuery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence__copy(
  const pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * input,
  pose_graph_tools_msgs__msg__TimeRangeQuery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__TimeRangeQuery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__TimeRangeQuery * data =
      (pose_graph_tools_msgs__msg__TimeRangeQuery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__TimeRangeQuery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__TimeRangeQuery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__TimeRangeQuery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
