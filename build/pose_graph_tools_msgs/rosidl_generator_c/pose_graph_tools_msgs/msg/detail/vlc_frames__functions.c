// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/VLCFrames.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/vlc_frames__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `frames`
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__functions.h"

bool
pose_graph_tools_msgs__msg__VLCFrames__init(pose_graph_tools_msgs__msg__VLCFrames * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pose_graph_tools_msgs__msg__VLCFrames__fini(msg);
    return false;
  }
  // destination_robot_id
  // frames
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__init(&msg->frames, 0)) {
    pose_graph_tools_msgs__msg__VLCFrames__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__VLCFrames__fini(pose_graph_tools_msgs__msg__VLCFrames * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // destination_robot_id
  // frames
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__fini(&msg->frames);
}

bool
pose_graph_tools_msgs__msg__VLCFrames__are_equal(const pose_graph_tools_msgs__msg__VLCFrames * lhs, const pose_graph_tools_msgs__msg__VLCFrames * rhs)
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
  // destination_robot_id
  if (lhs->destination_robot_id != rhs->destination_robot_id) {
    return false;
  }
  // frames
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__are_equal(
      &(lhs->frames), &(rhs->frames)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__VLCFrames__copy(
  const pose_graph_tools_msgs__msg__VLCFrames * input,
  pose_graph_tools_msgs__msg__VLCFrames * output)
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
  // destination_robot_id
  output->destination_robot_id = input->destination_robot_id;
  // frames
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__copy(
      &(input->frames), &(output->frames)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__VLCFrames *
pose_graph_tools_msgs__msg__VLCFrames__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrames * msg = (pose_graph_tools_msgs__msg__VLCFrames *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__VLCFrames), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__VLCFrames));
  bool success = pose_graph_tools_msgs__msg__VLCFrames__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__VLCFrames__destroy(pose_graph_tools_msgs__msg__VLCFrames * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__VLCFrames__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__VLCFrames__Sequence__init(pose_graph_tools_msgs__msg__VLCFrames__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrames * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__VLCFrames *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__VLCFrames), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__VLCFrames__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__VLCFrames__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__VLCFrames__Sequence__fini(pose_graph_tools_msgs__msg__VLCFrames__Sequence * array)
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
      pose_graph_tools_msgs__msg__VLCFrames__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__VLCFrames__Sequence *
pose_graph_tools_msgs__msg__VLCFrames__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__VLCFrames__Sequence * array = (pose_graph_tools_msgs__msg__VLCFrames__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__VLCFrames__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__VLCFrames__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__VLCFrames__Sequence__destroy(pose_graph_tools_msgs__msg__VLCFrames__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__VLCFrames__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__VLCFrames__Sequence__are_equal(const pose_graph_tools_msgs__msg__VLCFrames__Sequence * lhs, const pose_graph_tools_msgs__msg__VLCFrames__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__VLCFrames__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__VLCFrames__Sequence__copy(
  const pose_graph_tools_msgs__msg__VLCFrames__Sequence * input,
  pose_graph_tools_msgs__msg__VLCFrames__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__VLCFrames);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__VLCFrames * data =
      (pose_graph_tools_msgs__msg__VLCFrames *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__VLCFrames__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__VLCFrames__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__VLCFrames__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
