// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__struct.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__functions.h"
// end nested array functions include
bool pose_graph_tools_msgs__msg__pose_graph_edge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pose_graph_tools_msgs__msg__pose_graph_edge__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pose_graph_tools_msgs__msg__loop_closures__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pose_graph_tools_msgs.msg._loop_closures.LoopClosures", full_classname_dest, 53) == 0);
  }
  pose_graph_tools_msgs__msg__LoopClosures * ros_message = _ros_message;
  {  // publishing_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "publishing_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->publishing_robot_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // destination_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "destination_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->destination_robot_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "edges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'edges'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(&(ros_message->edges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pose_graph_tools_msgs__msg__PoseGraphEdge * dest = ros_message->edges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pose_graph_tools_msgs__msg__pose_graph_edge__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pose_graph_tools_msgs__msg__loop_closures__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LoopClosures */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pose_graph_tools_msgs.msg._loop_closures");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoopClosures");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pose_graph_tools_msgs__msg__LoopClosures * ros_message = (pose_graph_tools_msgs__msg__LoopClosures *)raw_ros_message;
  {  // publishing_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->publishing_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "publishing_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // destination_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->destination_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "destination_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edges
    PyObject * field = NULL;
    size_t size = ros_message->edges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pose_graph_tools_msgs__msg__PoseGraphEdge * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->edges.data[i]);
      PyObject * pyitem = pose_graph_tools_msgs__msg__pose_graph_edge__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
