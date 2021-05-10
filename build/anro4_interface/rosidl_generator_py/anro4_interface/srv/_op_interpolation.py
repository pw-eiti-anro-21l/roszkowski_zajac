# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anro4_interface:srv/OpInterpolation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpInterpolation_Request(type):
    """Metaclass of message 'OpInterpolation_Request'."""

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
            module = import_type_support('anro4_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anro4_interface.srv.OpInterpolation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__op_interpolation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__op_interpolation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__op_interpolation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__op_interpolation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__op_interpolation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpInterpolation_Request(metaclass=Metaclass_OpInterpolation_Request):
    """Message class 'OpInterpolation_Request'."""

    __slots__ = [
        '_x_goal',
        '_y_goal',
        '_z_goal',
        '_roll_goal',
        '_pitch_goal',
        '_yaw_goal',
        '_interpolation_time',
        '_method',
        '_version',
    ]

    _fields_and_field_types = {
        'x_goal': 'double',
        'y_goal': 'double',
        'z_goal': 'double',
        'roll_goal': 'double',
        'pitch_goal': 'double',
        'yaw_goal': 'double',
        'interpolation_time': 'double',
        'method': 'string',
        'version': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_goal = kwargs.get('x_goal', float())
        self.y_goal = kwargs.get('y_goal', float())
        self.z_goal = kwargs.get('z_goal', float())
        self.roll_goal = kwargs.get('roll_goal', float())
        self.pitch_goal = kwargs.get('pitch_goal', float())
        self.yaw_goal = kwargs.get('yaw_goal', float())
        self.interpolation_time = kwargs.get('interpolation_time', float())
        self.method = kwargs.get('method', str())
        self.version = kwargs.get('version', str())

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
        if self.x_goal != other.x_goal:
            return False
        if self.y_goal != other.y_goal:
            return False
        if self.z_goal != other.z_goal:
            return False
        if self.roll_goal != other.roll_goal:
            return False
        if self.pitch_goal != other.pitch_goal:
            return False
        if self.yaw_goal != other.yaw_goal:
            return False
        if self.interpolation_time != other.interpolation_time:
            return False
        if self.method != other.method:
            return False
        if self.version != other.version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_goal(self):
        """Message field 'x_goal'."""
        return self._x_goal

    @x_goal.setter
    def x_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_goal' field must be of type 'float'"
        self._x_goal = value

    @property
    def y_goal(self):
        """Message field 'y_goal'."""
        return self._y_goal

    @y_goal.setter
    def y_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_goal' field must be of type 'float'"
        self._y_goal = value

    @property
    def z_goal(self):
        """Message field 'z_goal'."""
        return self._z_goal

    @z_goal.setter
    def z_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_goal' field must be of type 'float'"
        self._z_goal = value

    @property
    def roll_goal(self):
        """Message field 'roll_goal'."""
        return self._roll_goal

    @roll_goal.setter
    def roll_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_goal' field must be of type 'float'"
        self._roll_goal = value

    @property
    def pitch_goal(self):
        """Message field 'pitch_goal'."""
        return self._pitch_goal

    @pitch_goal.setter
    def pitch_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_goal' field must be of type 'float'"
        self._pitch_goal = value

    @property
    def yaw_goal(self):
        """Message field 'yaw_goal'."""
        return self._yaw_goal

    @yaw_goal.setter
    def yaw_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_goal' field must be of type 'float'"
        self._yaw_goal = value

    @property
    def interpolation_time(self):
        """Message field 'interpolation_time'."""
        return self._interpolation_time

    @interpolation_time.setter
    def interpolation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'interpolation_time' field must be of type 'float'"
        self._interpolation_time = value

    @property
    def method(self):
        """Message field 'method'."""
        return self._method

    @method.setter
    def method(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'method' field must be of type 'str'"
        self._method = value

    @property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version' field must be of type 'str'"
        self._version = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OpInterpolation_Response(type):
    """Metaclass of message 'OpInterpolation_Response'."""

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
            module = import_type_support('anro4_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anro4_interface.srv.OpInterpolation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__op_interpolation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__op_interpolation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__op_interpolation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__op_interpolation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__op_interpolation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpInterpolation_Response(metaclass=Metaclass_OpInterpolation_Response):
    """Message class 'OpInterpolation_Response'."""

    __slots__ = [
        '_server_feedback',
    ]

    _fields_and_field_types = {
        'server_feedback': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.server_feedback = kwargs.get('server_feedback', str())

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
        if self.server_feedback != other.server_feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def server_feedback(self):
        """Message field 'server_feedback'."""
        return self._server_feedback

    @server_feedback.setter
    def server_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'server_feedback' field must be of type 'str'"
        self._server_feedback = value


class Metaclass_OpInterpolation(type):
    """Metaclass of service 'OpInterpolation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anro4_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anro4_interface.srv.OpInterpolation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__op_interpolation

            from anro4_interface.srv import _op_interpolation
            if _op_interpolation.Metaclass_OpInterpolation_Request._TYPE_SUPPORT is None:
                _op_interpolation.Metaclass_OpInterpolation_Request.__import_type_support__()
            if _op_interpolation.Metaclass_OpInterpolation_Response._TYPE_SUPPORT is None:
                _op_interpolation.Metaclass_OpInterpolation_Response.__import_type_support__()


class OpInterpolation(metaclass=Metaclass_OpInterpolation):
    from anro4_interface.srv._op_interpolation import OpInterpolation_Request as Request
    from anro4_interface.srv._op_interpolation import OpInterpolation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
