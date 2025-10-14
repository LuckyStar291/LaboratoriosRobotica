# generated from rosidl_generator_py/resource/_idl.py.em
# with input from matrix_interfaces:srv/Rotxyz.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rotxyz_Request(type):
    """Metaclass of message 'Rotxyz_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('matrix_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interfaces.srv.Rotxyz_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rotxyz__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rotxyz__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rotxyz__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rotxyz__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rotxyz__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rotxyz_Request(metaclass=Metaclass_Rotxyz_Request):
    """Message class 'Rotxyz_Request'."""

    __slots__ = [
        '_theta1',
        '_theta2',
        '_theta3',
    ]

    _fields_and_field_types = {
        'theta1': 'double',
        'theta2': 'double',
        'theta3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.theta1 = kwargs.get('theta1', float())
        self.theta2 = kwargs.get('theta2', float())
        self.theta3 = kwargs.get('theta3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.theta1 != other.theta1:
            return False
        if self.theta2 != other.theta2:
            return False
        if self.theta3 != other.theta3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def theta1(self):
        """Message field 'theta1'."""
        return self._theta1

    @theta1.setter
    def theta1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta1 = value

    @builtins.property
    def theta2(self):
        """Message field 'theta2'."""
        return self._theta2

    @theta2.setter
    def theta2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta2 = value

    @builtins.property
    def theta3(self):
        """Message field 'theta3'."""
        return self._theta3

    @theta3.setter
    def theta3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta3 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'matriz_resultado'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Rotxyz_Response(type):
    """Metaclass of message 'Rotxyz_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('matrix_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interfaces.srv.Rotxyz_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rotxyz__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rotxyz__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rotxyz__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rotxyz__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rotxyz__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rotxyz_Response(metaclass=Metaclass_Rotxyz_Response):
    """Message class 'Rotxyz_Response'."""

    __slots__ = [
        '_matriz_resultado',
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'matriz_resultado': 'double[16]',
        'x': 'double',
        'y': 'double',
        'z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'matriz_resultado' not in kwargs:
            self.matriz_resultado = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.matriz_resultado = numpy.array(kwargs.get('matriz_resultado'), dtype=numpy.float64)
            assert self.matriz_resultado.shape == (16, )
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if any(self.matriz_resultado != other.matriz_resultado):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def matriz_resultado(self):
        """Message field 'matriz_resultado'."""
        return self._matriz_resultado

    @matriz_resultado.setter
    def matriz_resultado(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'matriz_resultado' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'matriz_resultado' numpy.ndarray() must have a size of 16"
            self._matriz_resultado = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'matriz_resultado' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._matriz_resultado = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value


class Metaclass_Rotxyz(type):
    """Metaclass of service 'Rotxyz'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('matrix_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interfaces.srv.Rotxyz')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rotxyz

            from matrix_interfaces.srv import _rotxyz
            if _rotxyz.Metaclass_Rotxyz_Request._TYPE_SUPPORT is None:
                _rotxyz.Metaclass_Rotxyz_Request.__import_type_support__()
            if _rotxyz.Metaclass_Rotxyz_Response._TYPE_SUPPORT is None:
                _rotxyz.Metaclass_Rotxyz_Response.__import_type_support__()


class Rotxyz(metaclass=Metaclass_Rotxyz):
    from matrix_interfaces.srv._rotxyz import Rotxyz_Request as Request
    from matrix_interfaces.srv._rotxyz import Rotxyz_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
