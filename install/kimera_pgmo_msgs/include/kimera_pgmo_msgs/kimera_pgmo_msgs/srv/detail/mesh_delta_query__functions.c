// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kimera_pgmo_msgs:srv/MeshDeltaQuery.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `sequence_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_numbers
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->sequence_numbers, 0)) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(msg);
    return false;
  }
  return true;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * msg)
{
  if (!msg) {
    return;
  }
  // sequence_numbers
  rosidl_runtime_c__uint16__Sequence__fini(&msg->sequence_numbers);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence_numbers
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->sequence_numbers), &(rhs->sequence_numbers)))
  {
    return false;
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence_numbers
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->sequence_numbers), &(output->sequence_numbers)))
  {
    return false;
  }
  return true;
}

kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * msg = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request));
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(&data[i - 1]);
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
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * array)
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
      kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(&array->data[i]);
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

kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * array = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * data =
      (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `deltas`
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__functions.h"

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // deltas
  if (!kimera_pgmo_msgs__msg__MeshDelta__Sequence__init(&msg->deltas, 0)) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(msg);
    return false;
  }
  return true;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // deltas
  kimera_pgmo_msgs__msg__MeshDelta__Sequence__fini(&msg->deltas);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // deltas
  if (!kimera_pgmo_msgs__msg__MeshDelta__Sequence__are_equal(
      &(lhs->deltas), &(rhs->deltas)))
  {
    return false;
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // deltas
  if (!kimera_pgmo_msgs__msg__MeshDelta__Sequence__copy(
      &(input->deltas), &(output->deltas)))
  {
    return false;
  }
  return true;
}

kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * msg = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response));
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(&data[i - 1]);
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
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * array)
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
      kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(&array->data[i]);
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

kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * array = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * data =
      (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__copy(
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
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__functions.h"

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(msg);
    return false;
  }
  // request
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__init(&msg->request, 0)) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(msg);
    return false;
  }
  // response
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__init(&msg->response, 0)) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(msg);
    return false;
  }
  return true;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__fini(&msg->request);
  // response
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__fini(&msg->response);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * rhs)
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
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * output)
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
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

kimera_pgmo_msgs__srv__MeshDeltaQuery_Event *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * msg = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Event *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event));
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__init(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * data = NULL;

  if (size) {
    data = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Event *)allocator.zero_allocate(size, sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(&data[i - 1]);
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
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__fini(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * array)
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
      kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(&array->data[i]);
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

kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence *
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * array = (kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence *)allocator.allocate(sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__destroy(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__are_equal(const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * lhs, const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence__copy(
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * input,
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * data =
      (kimera_pgmo_msgs__srv__MeshDeltaQuery_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
