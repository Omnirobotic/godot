//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MapMetaData_.h
//  Source: nav_msgs\msg\dds_opensplice\MapMetaData_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _MAPMETADATA__H_
#define _MAPMETADATA__H_

#include "sacpp_mapping.h"
#include "Pose_.h"
#include "Time_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct MapMetaData_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_
         {
               ::builtin_interfaces::msg::dds_::Time_ map_load_time_;
               DDS::Float resolution_;
               DDS::ULong width_;
               DDS::ULong height_;
               ::geometry_msgs::msg::dds_::Pose_ origin_;
         };

         typedef DDS_DCPSStruct_var < MapMetaData_> MapMetaData__var;
         typedef MapMetaData_&MapMetaData__out;
      }
   }
}




#endif
