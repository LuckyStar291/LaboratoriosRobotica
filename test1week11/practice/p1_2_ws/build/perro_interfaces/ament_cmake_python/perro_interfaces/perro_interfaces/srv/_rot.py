# generated from rosidl_generator_py/resource/_idl.py.em
# with input from perro_interfaces:srv/Rot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

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
            module = import_type_support('perro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'perro_interfaces.srv.Rot_Request')
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
        '_th1_deg',
        '_th2_deg',
        '_th3_deg',
    ]

    _fields_and_field_types = {
        'th1_deg': 'float',
        'th2_deg': 'float',
        'th3_deg': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.th1_deg = kwargs.get('th1_deg', float())
        self.th2_deg = kwargs.get('th2_deg', float())
        self.th3_deg = kwargs.get('th3_deg', float())

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
        if self.th1_deg != other.th1_deg:
            return False
        if self.th2_deg != other.th2_deg:
            return False
        if self.th3_deg != other.th3_deg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def th1_deg(self):
        """Message field 'th1_deg'."""
        return self._th1_deg

    @th1_deg.setter
    def th1_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'th1_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'th1_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._th1_deg = value

    @builtins.property
    def th2_deg(self):
        """Message field 'th2_deg'."""
        return self._th2_deg

    @th2_deg.setter
    def th2_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'th2_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'th2_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._th2_deg = value

    @builtins.property
    def th3_deg(self):
        """Message field 'th3_deg'."""
        return self._th3_deg

    @th3_deg.setter
    def th3_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'th3_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'th3_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._th3_deg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

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
            module = import_type_support('perro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'perro_interfaces.srv.Rot_Response')
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
        '_x_mm',
        '_y_mm',
        '_z_mm',
    ]

    _fields_and_field_types = {
        'x_mm': 'float',
        'y_mm': 'float',
        'z_mm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_mm = kwargs.get('x_mm', float())
        self.y_mm = kwargs.get('y_mm', float())
        self.z_mm = kwargs.get('z_mm', float())

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
        if self.x_mm != other.x_mm:
            return False
        if self.y_mm != other.y_mm:
            return False
        if self.z_mm != other.z_mm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_mm(self):
        """Message field 'x_mm'."""
        return self._x_mm

    @x_mm.setter
    def x_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_mm = value

    @builtins.property
    def y_mm(self):
        """Message field 'y_mm'."""
        return self._y_mm

    @y_mm.setter
    def y_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_mm = value

    @builtins.property
    def z_mm(self):
        """Message field 'z_mm'."""
        return self._z_mm

    @z_mm.setter
    def z_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_mm = value


class Metaclass_Rot(type):
    """Metaclass of service 'Rot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('perro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'perro_interfaces.srv.Rot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rot

            from perro_interfaces.srv import _rot
            if _rot.Metaclass_Rot_Request._TYPE_SUPPORT is None:
                _rot.Metaclass_Rot_Request.__import_type_support__()
            if _rot.Metaclass_Rot_Response._TYPE_SUPPORT is None:
                _rot.Metaclass_Rot_Response.__import_type_support__()


class Rot(metaclass=Metaclass_Rot):
    from perro_interfaces.srv._rot import Rot_Request as Request
    from perro_interfaces.srv._rot import Rot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
