// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anro4_interface:srv/Interpolation.idl
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
#include "anro4_interface/srv/detail/interpolation__struct.h"
#include "anro4_interface/srv/detail/interpolation__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anro4_interface__srv__interpolation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("anro4_interface.srv._interpolation.Interpolation_Request", full_classname_dest, 56) == 0);
  }
  anro4_interface__srv__Interpolation_Request * ros_message = _ros_message;
  {  // position_joint1
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_joint1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_joint1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_joint2
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_joint2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_joint2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_joint3
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_joint3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_joint3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // interpolation_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "interpolation_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->interpolation_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // method
    PyObject * field = PyObject_GetAttrString(_pymsg, "method");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->method, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anro4_interface__srv__interpolation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Interpolation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anro4_interface.srv._interpolation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Interpolation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anro4_interface__srv__Interpolation_Request * ros_message = (anro4_interface__srv__Interpolation_Request *)raw_ros_message;
  {  // position_joint1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_joint1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_joint1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_joint2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_joint2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_joint2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_joint3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_joint3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_joint3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interpolation_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->interpolation_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interpolation_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // method
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->method.data,
      strlen(ros_message->method.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "method", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__struct.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anro4_interface__srv__interpolation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("anro4_interface.srv._interpolation.Interpolation_Response", full_classname_dest, 57) == 0);
  }
  anro4_interface__srv__Interpolation_Response * ros_message = _ros_message;
  {  // server_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "server_feedback");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->server_feedback, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anro4_interface__srv__interpolation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Interpolation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anro4_interface.srv._interpolation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Interpolation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anro4_interface__srv__Interpolation_Response * ros_message = (anro4_interface__srv__Interpolation_Response *)raw_ros_message;
  {  // server_feedback
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->server_feedback.data,
      strlen(ros_message->server_feedback.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "server_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
