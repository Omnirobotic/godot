//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetMap_Request_.h
//  Source: nav_msgs\srv\dds_opensplice\SetMap_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SETMAP_REQUEST__H_
#define _SETMAP_REQUEST__H_

#include "sacpp_mapping.h"
#include "PoseWithCovarianceStamped_.h"
#include "OccupancyGrid_.h"
#include "Header_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct SetMap_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_
         {
               ::nav_msgs::msg::dds_::OccupancyGrid_ map_;
               ::geometry_msgs::msg::dds_::PoseWithCovarianceStamped_ initial_pose_;
         };

         typedef DDS_DCPSStruct_var < SetMap_Request_> SetMap_Request__var;
         typedef DDS_DCPSStruct_out < SetMap_Request_> SetMap_Request__out;
      }
   }
}




#endif
