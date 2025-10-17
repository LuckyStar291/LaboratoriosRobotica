// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from perro_interfaces:srv/Rot.idl
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
#include "perro_interfaces/srv/detail/rot__struct.h"
#include "perro_interfaces/srv/detail/rot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool perro_interfaces__srv__rot__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("perro_interfaces.srv._rot.Rot_Request", full_classname_dest, 37) == 0);
  }
  perro_interfaces__srv__Rot_Request * ros_message = _ros_message;
  {  // th1_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "th1_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->th1_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // th2_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "th2_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->th2_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // th3_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "th3_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->th3_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * perro_interfaces__srv__rot__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rot_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("perro_interfaces.srv._rot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rot_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  perro_interfaces__srv__Rot_Request * ros_message = (perro_interfaces__srv__Rot_Request *)raw_ros_message;
  {  // th1_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->th1_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "th1_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // th2_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->th2_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "th2_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // th3_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->th3_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "th3_deg", field);
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
// #include "perro_interfaces/srv/detail/rot__struct.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool perro_interfaces__srv__rot__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("perro_interfaces.srv._rot.Rot_Response", full_classname_dest, 38) == 0);
  }
  perro_interfaces__srv__Rot_Response * ros_message = _ros_message;
  {  // x_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_mm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_mm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_mm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_mm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_mm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_mm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * perro_interfaces__srv__rot__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rot_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("perro_interfaces.srv._rot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rot_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  perro_interfaces__srv__Rot_Response * ros_message = (perro_interfaces__srv__Rot_Response *)raw_ros_message;
  {  // x_mm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_mm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_mm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
