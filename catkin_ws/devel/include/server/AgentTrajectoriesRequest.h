// Generated by gencpp from file server/AgentTrajectoriesRequest.msg
// DO NOT EDIT!


#ifndef SERVER_MESSAGE_AGENTTRAJECTORIESREQUEST_H
#define SERVER_MESSAGE_AGENTTRAJECTORIESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <server/AgentTrajectory.h>

namespace server
{
template <class ContainerAllocator>
struct AgentTrajectoriesRequest_
{
  typedef AgentTrajectoriesRequest_<ContainerAllocator> Type;

  AgentTrajectoriesRequest_()
    : trajetories()  {
    }
  AgentTrajectoriesRequest_(const ContainerAllocator& _alloc)
    : trajetories(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::server::AgentTrajectory_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::server::AgentTrajectory_<ContainerAllocator> >> _trajetories_type;
  _trajetories_type trajetories;





  typedef boost::shared_ptr< ::server::AgentTrajectoriesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::server::AgentTrajectoriesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AgentTrajectoriesRequest_

typedef ::server::AgentTrajectoriesRequest_<std::allocator<void> > AgentTrajectoriesRequest;

typedef boost::shared_ptr< ::server::AgentTrajectoriesRequest > AgentTrajectoriesRequestPtr;
typedef boost::shared_ptr< ::server::AgentTrajectoriesRequest const> AgentTrajectoriesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::server::AgentTrajectoriesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::server::AgentTrajectoriesRequest_<ContainerAllocator1> & lhs, const ::server::AgentTrajectoriesRequest_<ContainerAllocator2> & rhs)
{
  return lhs.trajetories == rhs.trajetories;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::server::AgentTrajectoriesRequest_<ContainerAllocator1> & lhs, const ::server::AgentTrajectoriesRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::server::AgentTrajectoriesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::server::AgentTrajectoriesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::server::AgentTrajectoriesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8d935e08cdc676097eb929ef5e3e415";
  }

  static const char* value(const ::server::AgentTrajectoriesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8d935e08cdc6760ULL;
  static const uint64_t static_value2 = 0x97eb929ef5e3e415ULL;
};

template<class ContainerAllocator>
struct DataType< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "server/AgentTrajectoriesRequest";
  }

  static const char* value(const ::server::AgentTrajectoriesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "AgentTrajectory[] trajetories\n"
"\n"
"================================================================================\n"
"MSG: server/AgentTrajectory\n"
"geometry_msgs/Vector3[] trajetory\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::server::AgentTrajectoriesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajetories);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentTrajectoriesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::server::AgentTrajectoriesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::server::AgentTrajectoriesRequest_<ContainerAllocator>& v)
  {
    s << indent << "trajetories[]" << std::endl;
    for (size_t i = 0; i < v.trajetories.size(); ++i)
    {
      s << indent << "  trajetories[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::server::AgentTrajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.trajetories[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVER_MESSAGE_AGENTTRAJECTORIESREQUEST_H
