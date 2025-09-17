# generated from rosidl_generator_py/resource/_idl.py.em
# with input from matrix_interfaces:srv/Rotxyz.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

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
        '_px',
        '_py',
        '_pz',
    ]

    _fields_and_field_types = {
        'px': 'int64',
        'py': 'int64',
        'pz': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.px = kwargs.get('px', int())
        self.py = kwargs.get('py', int())
        self.pz = kwargs.get('pz', int())

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
        if self.px != other.px:
            return False
        if self.py != other.py:
            return False
        if self.pz != other.pz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def px(self):
        """Message field 'px'."""
        return self._px

    @px.setter
    def px(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'px' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'px' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._px = value

    @builtins.property
    def py(self):
        """Message field 'py'."""
        return self._py

    @py.setter
    def py(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'py' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'py' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._py = value

    @builtins.property
    def pz(self):
        """Message field 'pz'."""
        return self._pz

    @pz.setter
    def pz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pz' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'pz' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._pz = value


# Import statements for member types

# Member 'matrizz'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

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
        '_matrizz',
    ]

    _fields_and_field_types = {
        'matrizz': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.matrizz = array.array('d', kwargs.get('matrizz', []))

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
        if self.matrizz != other.matrizz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def matrizz(self):
        """Message field 'matrizz'."""
        return self._matrizz

    @matrizz.setter
    def matrizz(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'matrizz' array.array() must have the type code of 'd'"
            self._matrizz = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'matrizz' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._matrizz = array.array('d', value)


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
