// Generated by gencpp from file tutorial/MulTwoIntsResponse.msg
// DO NOT EDIT!


#ifndef TUTORIAL_MESSAGE_MULTWOINTSRESPONSE_H
#define TUTORIAL_MESSAGE_MULTWOINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tutorial
{
template <class ContainerAllocator>
struct MulTwoIntsResponse_
{
  typedef MulTwoIntsResponse_<ContainerAllocator> Type;

  MulTwoIntsResponse_()
    : multiply(0)  {
    }
  MulTwoIntsResponse_(const ContainerAllocator& _alloc)
    : multiply(0)  {
  (void)_alloc;
    }



   typedef int32_t _multiply_type;
  _multiply_type multiply;





  typedef boost::shared_ptr< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MulTwoIntsResponse_

typedef ::tutorial::MulTwoIntsResponse_<std::allocator<void> > MulTwoIntsResponse;

typedef boost::shared_ptr< ::tutorial::MulTwoIntsResponse > MulTwoIntsResponsePtr;
typedef boost::shared_ptr< ::tutorial::MulTwoIntsResponse const> MulTwoIntsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tutorial::MulTwoIntsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tutorial::MulTwoIntsResponse_<ContainerAllocator1> & lhs, const ::tutorial::MulTwoIntsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.multiply == rhs.multiply;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tutorial::MulTwoIntsResponse_<ContainerAllocator1> & lhs, const ::tutorial::MulTwoIntsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tutorial

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6beb9d0eae755804051c303fd583c637";
  }

  static const char* value(const ::tutorial::MulTwoIntsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6beb9d0eae755804ULL;
  static const uint64_t static_value2 = 0x051c303fd583c637ULL;
};

template<class ContainerAllocator>
struct DataType< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tutorial/MulTwoIntsResponse";
  }

  static const char* value(const ::tutorial::MulTwoIntsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 multiply\n"
"\n"
;
  }

  static const char* value(const ::tutorial::MulTwoIntsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.multiply);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MulTwoIntsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tutorial::MulTwoIntsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tutorial::MulTwoIntsResponse_<ContainerAllocator>& v)
  {
    s << indent << "multiply: ";
    Printer<int32_t>::stream(s, indent + "  ", v.multiply);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUTORIAL_MESSAGE_MULTWOINTSRESPONSE_H
