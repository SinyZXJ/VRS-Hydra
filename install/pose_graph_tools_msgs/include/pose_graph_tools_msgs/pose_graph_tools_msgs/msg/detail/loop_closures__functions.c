// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/loop_closures__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `edges`
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__functions.h"

bool
pose_graph_tools_msgs__msg__LoopClosures__init(pose_graph_tools_msgs__msg__LoopClosures * msg)
{
  if (!msg) {
    return false;
  }
  // publishing_robot_id
  // destination_robot_id
  // edges
  if (!pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(&msg->edges, 0)) {
    pose_graph_tools_msgs__msg__LoopClosures__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__LoopClosures__fini(pose_graph_tools_msgs__msg__LoopClosures * msg)
{
  if (!msg) {
    return;
  }
  // publishing_robot_id
  // destination_robot_id
  // edges
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__fini(&msg->edges);
}

bool
pose_graph_tools_msgs__msg__LoopClosures__are_equal(const pose_graph_tools_msgs__msg__LoopClosures * lhs, const pose_graph_tools_msgs__msg__LoopClosures * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // publishing_robot_id
  if (lhs->publishing_robot_id != rhs->publishing_robot_id) {
    return false;
  }
  // destination_robot_id
  if (lhs->destination_robot_id != rhs->destination_robot_id) {
    return false;
  }
  // edges
  if (!pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__LoopClosures__copy(
  const pose_graph_tools_msgs__msg__LoopClosures * input,
  pose_graph_tools_msgs__msg__LoopClosures * output)
{
  if (!input || !output) {
    return false;
  }
  // publishing_robot_id
  output->publishing_robot_id = input->publishing_robot_id;
  // destination_robot_id
  output->destination_robot_id = input->destination_robot_id;
  // edges
  if (!pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__LoopClosures *
pose_graph_tools_msgs__msg__LoopClosures__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosures * msg = (pose_graph_tools_msgs__msg__LoopClosures *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__LoopClosures), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__LoopClosures));
  bool success = pose_graph_tools_msgs__msg__LoopClosures__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__LoopClosures__destroy(pose_graph_tools_msgs__msg__LoopClosures * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__LoopClosures__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__LoopClosures__Sequence__init(pose_graph_tools_msgs__msg__LoopClosures__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosures * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__LoopClosures *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__LoopClosures), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__LoopClosures__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__LoopClosures__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__LoopClosures__Sequence__fini(pose_graph_tools_msgs__msg__LoopClosures__Sequence * array)
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
      pose_graph_tools_msgs__msg__LoopClosures__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__LoopClosures__Sequence *
pose_graph_tools_msgs__msg__LoopClosures__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosures__Sequence * array = (pose_graph_tools_msgs__msg__LoopClosures__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__LoopClosures__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__LoopClosures__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__LoopClosures__Sequence__destroy(pose_graph_tools_msgs__msg__LoopClosures__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__LoopClosures__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__LoopClosures__Sequence__are_equal(const pose_graph_tools_msgs__msg__LoopClosures__Sequence * lhs, const pose_graph_tools_msgs__msg__LoopClosures__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__LoopClosures__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__LoopClosures__Sequence__copy(
  const pose_graph_tools_msgs__msg__LoopClosures__Sequence * input,
  pose_graph_tools_msgs__msg__LoopClosures__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__LoopClosures);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__LoopClosures * data =
      (pose_graph_tools_msgs__msg__LoopClosures *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__LoopClosures__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__LoopClosures__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__LoopClosures__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
