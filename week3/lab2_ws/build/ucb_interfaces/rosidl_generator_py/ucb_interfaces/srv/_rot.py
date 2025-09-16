# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ucb_interfaces:srv/Rot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rot_Request(type):
    """Metaclass of message 'Rot_Request'."""

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
            module = import_type_support('ucb_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ucb_interfaces.srv.Rot_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rot__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rot__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rot__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rot__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rot__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rot_Request(metaclass=Metaclass_Rot_Request):
    """Message class 'Rot_Request'."""

    __slots__ = [
        '_angle',
        '_px',
        '_py',
        '_pz',
    ]

    _fields_and_field_types = {
        'angle': 'int64',
        'px': 'int64',
        'py': 'int64',
        'pz': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle = kwargs.get('angle', int())
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
        if self.angle != other.angle:
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
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._angle = value

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

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Rot_Response(type):
    """Metaclass of message 'Rot_Response'."""

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
            module = import_type_support('ucb_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ucb_interfaces.srv.Rot_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rot__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rot__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rot__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rot__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rot__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rot_Response(metaclass=Metaclass_Rot_Response):
    """Message class 'Rot_Response'."""

    __slots__ = [
        '_fx',
        '_fy',
        '_fz',
    ]

    _fields_and_field_types = {
        'fx': 'double',
        'fy': 'double',
        'fz': 'double',
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
        self.fx = kwargs.get('fx', float())
        self.fy = kwargs.get('fy', float())
        self.fz = kwargs.get('fz', float())

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
        if self.fx != other.fx:
            return False
        if self.fy != other.fy:
            return False
        if self.fz != other.fz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fx(self):
        """Message field 'fx'."""
        return self._fx

    @fx.setter
    def fx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fx = value

    @builtins.property
    def fy(self):
        """Message field 'fy'."""
        return self._fy

    @fy.setter
    def fy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fy = value

    @builtins.property
    def fz(self):
        """Message field 'fz'."""
        return self._fz

    @fz.setter
    def fz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fz = value


class Metaclass_Rot(type):
    """Metaclass of service 'Rot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ucb_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ucb_interfaces.srv.Rot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rot

            from ucb_interfaces.srv import _rot
            if _rot.Metaclass_Rot_Request._TYPE_SUPPORT is None:
                _rot.Metaclass_Rot_Request.__import_type_support__()
            if _rot.Metaclass_Rot_Response._TYPE_SUPPORT is None:
                _rot.Metaclass_Rot_Response.__import_type_support__()


class Rot(metaclass=Metaclass_Rot):
    from ucb_interfaces.srv._rot import Rot_Request as Request
    from ucb_interfaces.srv._rot import Rot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
