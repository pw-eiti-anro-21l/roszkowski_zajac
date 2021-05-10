// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anro4_interface:srv/OpInterpolation.idl
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
#include "anro4_interface/srv/detail/op_interpolation__struct.h"
#include "anro4_interface/srv/detail/op_interpolation__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anro4_interface__srv__op_interpolation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("anro4_interface.srv._op_interpolation.OpInterpolation_Request", full_classname_dest, 61) == 0);
  }
  anro4_interface__srv__OpInterpolation_Request * ros_message = _ros_message;
  {  // x_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_goal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_goal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_goal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_goal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_goal = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_goal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_goal = PyFloat_AS_DOUBLE(field);
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
  {  // version
    PyObject * field = PyObject_GetAttrString(_pymsg, "version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anro4_interface__srv__op_interpolation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OpInterpolation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anro4_interface.srv._op_interpolation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OpInterpolation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anro4_interface__srv__OpInterpolation_Request * ros_message = (anro4_interface__srv__OpInterpolation_Request *)raw_ros_message;
  {  // x_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_goal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_goal", field);
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
  {  // version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->version.data,
      strlen(ros_message->version.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "version", field);
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
// #include "anro4_interface/srv/detail/op_interpolation__struct.h"
// already included above
// #include "anro4_interface/srv/detail/op_interpolation__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anro4_interface__srv__op_interpolation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("anro4_interface.srv._op_interpolation.OpInterpolation_Response", full_classname_dest, 62) == 0);
  }
  anro4_interface__srv__OpInterpolation_Response * ros_message = _ros_message;
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
PyObject * anro4_interface__srv__op_interpolation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OpInterpolation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anro4_interface.srv._op_interpolation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OpInterpolation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anro4_interface__srv__OpInterpolation_Response * ros_message = (anro4_interface__srv__OpInterpolation_Response *)raw_ros_message;
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
