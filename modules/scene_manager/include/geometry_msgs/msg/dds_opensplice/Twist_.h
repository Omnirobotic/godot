//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Twist_.h
//  Source: geometry_msgs\msg\dds_opensplice\Twist_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _TWIST__H_
#define _TWIST__H_

#include "sacpp_mapping.h"
#include "Vector3_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Twist_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_
         {
               Vector3_ linear_;
               Vector3_ angular_;
         };

         typedef DDS_DCPSStruct_var < Twist_> Twist__var;
         typedef Twist_&Twist__out;
      }
   }
}




#endif
