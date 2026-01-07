// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
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
#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"

bool pose_graph_tools_msgs__msg__bow_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pose_graph_tools_msgs__msg__bow_vector__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pose_graph_tools_msgs__msg__bow_query__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("pose_graph_tools_msgs.msg._bow_query.BowQuery", full_classname_dest, 45) == 0);
  }
  pose_graph_tools_msgs__msg__BowQuery * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pose_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pose_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bow_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "bow_vector");
    if (!field) {
      return false;
    }
    if (!pose_graph_tools_msgs__msg__bow_vector__convert_from_py(field, &ros_message->bow_vector)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pose_graph_tools_msgs__msg__bow_query__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BowQuery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pose_graph_tools_msgs.msg._bow_query");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BowQuery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pose_graph_tools_msgs__msg__BowQuery * ros_message = (pose_graph_tools_msgs__msg__BowQuery *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pose_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bow_vector
    PyObject * field = NULL;
    field = pose_graph_tools_msgs__msg__bow_vector__convert_to_py(&ros_message->bow_vector);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bow_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
