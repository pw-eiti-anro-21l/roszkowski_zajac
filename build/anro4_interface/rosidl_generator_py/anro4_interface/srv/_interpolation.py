# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anro4_interface:srv/Interpolation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Interpolation_Request(type):
    """Metaclass of message 'Interpolation_Request'."""

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
                'anro4_interface.srv.Interpolation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__interpolation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__interpolation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__interpolation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__interpolation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__interpolation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Interpolation_Request(metaclass=Metaclass_Interpolation_Request):
    """Message class 'Interpolation_Request'."""

    __slots__ = [
        '_position_joint1',
        '_position_joint2',
        '_position_joint3',
        '_interpolation_time',
        '_method',
    ]

    _fields_and_field_types = {
        'position_joint1': 'double',
        'position_joint2': 'double',
        'position_joint3': 'double',
        'interpolation_time': 'double',
        'method': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position_joint1 = kwargs.get('position_joint1', float())
        self.position_joint2 = kwargs.get('position_joint2', float())
        self.position_joint3 = kwargs.get('position_joint3', float())
        self.interpolation_time = kwargs.get('interpolation_time', float())
        self.method = kwargs.get('method', str())

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
        if self.position_joint1 != other.position_joint1:
            return False
        if self.position_joint2 != other.position_joint2:
            return False
        if self.position_joint3 != other.position_joint3:
            return False
        if self.interpolation_time != other.interpolation_time:
            return False
        if self.method != other.method:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position_joint1(self):
        """Message field 'position_joint1'."""
        return self._position_joint1

    @position_joint1.setter
    def position_joint1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_joint1' field must be of type 'float'"
        self._position_joint1 = value

    @property
    def position_joint2(self):
        """Message field 'position_joint2'."""
        return self._position_joint2

    @position_joint2.setter
    def position_joint2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_joint2' field must be of type 'float'"
        self._position_joint2 = value

    @property
    def position_joint3(self):
        """Message field 'position_joint3'."""
        return self._position_joint3

    @position_joint3.setter
    def position_joint3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_joint3' field must be of type 'float'"
        self._position_joint3 = value

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Interpolation_Response(type):
    """Metaclass of message 'Interpolation_Response'."""

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
                'anro4_interface.srv.Interpolation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__interpolation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__interpolation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__interpolation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__interpolation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__interpolation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Interpolation_Response(metaclass=Metaclass_Interpolation_Response):
    """Message class 'Interpolation_Response'."""

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


class Metaclass_Interpolation(type):
    """Metaclass of service 'Interpolation'."""

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
                'anro4_interface.srv.Interpolation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__interpolation

            from anro4_interface.srv import _interpolation
            if _interpolation.Metaclass_Interpolation_Request._TYPE_SUPPORT is None:
                _interpolation.Metaclass_Interpolation_Request.__import_type_support__()
            if _interpolation.Metaclass_Interpolation_Response._TYPE_SUPPORT is None:
                _interpolation.Metaclass_Interpolation_Response.__import_type_support__()


class Interpolation(metaclass=Metaclass_Interpolation):
    from anro4_interface.srv._interpolation import Interpolation_Request as Request
    from anro4_interface.srv._interpolation import Interpolation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
