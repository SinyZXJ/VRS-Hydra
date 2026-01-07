// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_src`
// Member `frame_src`
// Member `robot_dst`
// Member `frame_dst`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pose_graph_tools_msgs__msg__LoopClosuresAck__init(pose_graph_tools_msgs__msg__LoopClosuresAck * msg)
{
  if (!msg) {
    return false;
  }
  // publishing_robot_id
  // destination_robot_id
  // robot_src
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->robot_src, 0)) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__fini(msg);
    return false;
  }
  // frame_src
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->frame_src, 0)) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__fini(msg);
    return false;
  }
  // robot_dst
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->robot_dst, 0)) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__fini(msg);
    return false;
  }
  // frame_dst
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->frame_dst, 0)) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__msg__LoopClosuresAck__fini(pose_graph_tools_msgs__msg__LoopClosuresAck * msg)
{
  if (!msg) {
    return;
  }
  // publishing_robot_id
  // destination_robot_id
  // robot_src
  rosidl_runtime_c__uint32__Sequence__fini(&msg->robot_src);
  // frame_src
  rosidl_runtime_c__uint32__Sequence__fini(&msg->frame_src);
  // robot_dst
  rosidl_runtime_c__uint32__Sequence__fini(&msg->robot_dst);
  // frame_dst
  rosidl_runtime_c__uint32__Sequence__fini(&msg->frame_dst);
}

bool
pose_graph_tools_msgs__msg__LoopClosuresAck__are_equal(const pose_graph_tools_msgs__msg__LoopClosuresAck * lhs, const pose_graph_tools_msgs__msg__LoopClosuresAck * rhs)
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
  // robot_src
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->robot_src), &(rhs->robot_src)))
  {
    return false;
  }
  // frame_src
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->frame_src), &(rhs->frame_src)))
  {
    return false;
  }
  // robot_dst
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->robot_dst), &(rhs->robot_dst)))
  {
    return false;
  }
  // frame_dst
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->frame_dst), &(rhs->frame_dst)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__LoopClosuresAck__copy(
  const pose_graph_tools_msgs__msg__LoopClosuresAck * input,
  pose_graph_tools_msgs__msg__LoopClosuresAck * output)
{
  if (!input || !output) {
    return false;
  }
  // publishing_robot_id
  output->publishing_robot_id = input->publishing_robot_id;
  // destination_robot_id
  output->destination_robot_id = input->destination_robot_id;
  // robot_src
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->robot_src), &(output->robot_src)))
  {
    return false;
  }
  // frame_src
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->frame_src), &(output->frame_src)))
  {
    return false;
  }
  // robot_dst
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->robot_dst), &(output->robot_dst)))
  {
    return false;
  }
  // frame_dst
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->frame_dst), &(output->frame_dst)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__msg__LoopClosuresAck *
pose_graph_tools_msgs__msg__LoopClosuresAck__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosuresAck * msg = (pose_graph_tools_msgs__msg__LoopClosuresAck *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck));
  bool success = pose_graph_tools_msgs__msg__LoopClosuresAck__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__msg__LoopClosuresAck__destroy(pose_graph_tools_msgs__msg__LoopClosuresAck * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__init(pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosuresAck * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__msg__LoopClosuresAck *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__msg__LoopClosuresAck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__msg__LoopClosuresAck__fini(&data[i - 1]);
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
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__fini(pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * array)
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
      pose_graph_tools_msgs__msg__LoopClosuresAck__fini(&array->data[i]);
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

pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence *
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * array = (pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__destroy(pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__are_equal(const pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * lhs, const pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__msg__LoopClosuresAck__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence__copy(
  const pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * input,
  pose_graph_tools_msgs__msg__LoopClosuresAck__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__msg__LoopClosuresAck * data =
      (pose_graph_tools_msgs__msg__LoopClosuresAck *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__msg__LoopClosuresAck__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__msg__LoopClosuresAck__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__msg__LoopClosuresAck__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
