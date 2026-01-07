// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pose_graph_tools_msgs:srv/VLCFrameQuery.idl
// generated code does not contain a copyright notice
#include "pose_graph_tools_msgs/srv/detail/vlc_frame_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pose_ids, 0)) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // pose_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pose_ids);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pose_ids), &(rhs->pose_ids)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Request * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // pose_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pose_ids), &(output->pose_ids)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__srv__VLCFrameQuery_Request *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg = (pose_graph_tools_msgs__srv__VLCFrameQuery_Request *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Request));
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__srv__VLCFrameQuery_Request *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(&data[i - 1]);
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array)
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
      pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(&array->data[i]);
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

pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array = (pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__srv__VLCFrameQuery_Request * data =
      (pose_graph_tools_msgs__srv__VLCFrameQuery_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__srv__VLCFrameQuery_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `frames`
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__functions.h"

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // frames
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__init(&msg->frames, 0)) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // frames
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__fini(&msg->frames);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * rhs)
{
  if (!lhs || !rhs) {
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Response * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // frames
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence__copy(
      &(input->frames), &(output->frames)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__srv__VLCFrameQuery_Response *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg = (pose_graph_tools_msgs__srv__VLCFrameQuery_Response *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Response));
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__srv__VLCFrameQuery_Response *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(&data[i - 1]);
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array)
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
      pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(&array->data[i]);
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

pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array = (pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__srv__VLCFrameQuery_Response * data =
      (pose_graph_tools_msgs__srv__VLCFrameQuery_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__srv__VLCFrameQuery_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pose_graph_tools_msgs/srv/detail/vlc_frame_query__functions.h"

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(msg);
    return false;
  }
  // request
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__init(&msg->request, 0)) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(msg);
    return false;
  }
  // response
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__init(&msg->response, 0)) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(msg);
    return false;
  }
  return true;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__fini(&msg->request);
  // response
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__fini(&msg->response);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Event * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pose_graph_tools_msgs__srv__VLCFrameQuery_Event *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg = (pose_graph_tools_msgs__srv__VLCFrameQuery_Event *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Event));
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__init(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event * data = NULL;

  if (size) {
    data = (pose_graph_tools_msgs__srv__VLCFrameQuery_Event *)allocator.zero_allocate(size, sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(&data[i - 1]);
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
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__fini(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array)
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
      pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(&array->data[i]);
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

pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence *
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array = (pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence *)allocator.allocate(sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__destroy(pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__are_equal(const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * lhs, const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence__copy(
  const pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * input,
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pose_graph_tools_msgs__srv__VLCFrameQuery_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pose_graph_tools_msgs__srv__VLCFrameQuery_Event * data =
      (pose_graph_tools_msgs__srv__VLCFrameQuery_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pose_graph_tools_msgs__srv__VLCFrameQuery_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pose_graph_tools_msgs__srv__VLCFrameQuery_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
