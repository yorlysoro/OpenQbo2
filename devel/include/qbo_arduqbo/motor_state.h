// Generated by gencpp from file qbo_arduqbo/motor_state.msg
// DO NOT EDIT!


#ifndef QBO_ARDUQBO_MESSAGE_MOTOR_STATE_H
#define QBO_ARDUQBO_MESSAGE_MOTOR_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace qbo_arduqbo
{
template <class ContainerAllocator>
struct motor_state_
{
  typedef motor_state_<ContainerAllocator> Type;

  motor_state_()
    : header()
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , speed(0)
    , load(0.0)
    , voltage(0.0)
    , temperature(0)
    , moving(false)  {
    }
  motor_state_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , speed(0)
    , load(0.0)
    , voltage(0.0)
    , temperature(0)
    , moving(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _goal_type;
  _goal_type goal;

   typedef int32_t _position_type;
  _position_type position;

   typedef int32_t _error_type;
  _error_type error;

   typedef int32_t _speed_type;
  _speed_type speed;

   typedef double _load_type;
  _load_type load;

   typedef double _voltage_type;
  _voltage_type voltage;

   typedef int32_t _temperature_type;
  _temperature_type temperature;

   typedef uint8_t _moving_type;
  _moving_type moving;





  typedef boost::shared_ptr< ::qbo_arduqbo::motor_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_arduqbo::motor_state_<ContainerAllocator> const> ConstPtr;

}; // struct motor_state_

typedef ::qbo_arduqbo::motor_state_<std::allocator<void> > motor_state;

typedef boost::shared_ptr< ::qbo_arduqbo::motor_state > motor_statePtr;
typedef boost::shared_ptr< ::qbo_arduqbo::motor_state const> motor_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qbo_arduqbo::motor_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qbo_arduqbo::motor_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qbo_arduqbo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'qbo_arduqbo': ['/home/qbo/Desktop/melodia/src/qbo_arduqbo/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qbo_arduqbo::motor_state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qbo_arduqbo::motor_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qbo_arduqbo::motor_state_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c778bda1190d2be2e7c5f3fad8d4eda";
  }

  static const char* value(const ::qbo_arduqbo::motor_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c778bda1190d2beULL;
  static const uint64_t static_value2 = 0x2e7c5f3fad8d4edaULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qbo_arduqbo/motor_state";
  }

  static const char* value(const ::qbo_arduqbo::motor_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 id            # motor id\n"
"int32 goal          # commanded position (in encoder units)\n"
"int32 position      # current position (in encoder units)\n"
"int32 error         # difference between current and goal positions\n"
"int32 speed         # current speed (0.111 rpm per unit)\n"
"float64 load        # current load - ratio of applied torque over maximum torque\n"
"float64 voltage     # current voltage (V)\n"
"int32 temperature   # current temperature (degrees Celsius)\n"
"bool moving         # whether the motor is currently in motion\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::qbo_arduqbo::motor_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.goal);
      stream.next(m.position);
      stream.next(m.error);
      stream.next(m.speed);
      stream.next(m.load);
      stream.next(m.voltage);
      stream.next(m.temperature);
      stream.next(m.moving);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motor_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qbo_arduqbo::motor_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qbo_arduqbo::motor_state_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "goal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal);
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
    s << indent << "error: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error);
    s << indent << "speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed);
    s << indent << "load: ";
    Printer<double>::stream(s, indent + "  ", v.load);
    s << indent << "voltage: ";
    Printer<double>::stream(s, indent + "  ", v.voltage);
    s << indent << "temperature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.moving);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QBO_ARDUQBO_MESSAGE_MOTOR_STATE_H