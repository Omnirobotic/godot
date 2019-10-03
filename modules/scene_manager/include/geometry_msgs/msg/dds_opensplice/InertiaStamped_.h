//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: InertiaStamped_.h
//  Source: geometry_msgs\msg\dds_opensplice\InertiaStamped_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _INERTIASTAMPED__H_
#define _INERTIASTAMPED__H_

#include "sacpp_mapping.h"
#include "Inertia_.h"
#include "Header_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct InertiaStamped_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               Inertia_ inertia_;
         };

         typedef DDS_DCPSStruct_var < InertiaStamped_> InertiaStamped__var;
         typedef DDS_DCPSStruct_out < InertiaStamped_> InertiaStamped__out;
      }
   }
}




#endif
