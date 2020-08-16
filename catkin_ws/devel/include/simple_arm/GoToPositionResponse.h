// Generated by gencpp from file simple_arm/GoToPositionResponse.msg
// DO NOT EDIT!


#ifndef SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H
#define SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_arm
{
template <class ContainerAllocator>
struct GoToPositionResponse_
{
  typedef GoToPositionResponse_<ContainerAllocator> Type;

  GoToPositionResponse_()
    : msg_feedback()  {
    }
  GoToPositionResponse_(const ContainerAllocator& _alloc)
    : msg_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_feedback_type;
  _msg_feedback_type msg_feedback;





  typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GoToPositionResponse_

typedef ::simple_arm::GoToPositionResponse_<std::allocator<void> > GoToPositionResponse;

typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse > GoToPositionResponsePtr;
typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse const> GoToPositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_arm::GoToPositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_arm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2897a4bc4d7ca330e430870cfdee7314";
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2897a4bc4d7ca330ULL;
  static const uint64_t static_value2 = 0xe430870cfdee7314ULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_arm/GoToPositionResponse";
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string msg_feedback\n\
\n\
";
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToPositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_arm::GoToPositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "msg_feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H
