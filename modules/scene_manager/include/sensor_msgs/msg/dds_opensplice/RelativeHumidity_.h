//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RelativeHumidity_.h
//  Source: sensor_msgs\msg\dds_opensplice\RelativeHumidity_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _RELATIVEHUMIDITY__H_
#define _RELATIVEHUMIDITY__H_

#include "sacpp_mapping.h"
#include "Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct RelativeHumidity_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Double relative_humidity_;
               DDS::Double variance_;
         };

         typedef DDS_DCPSStruct_var < RelativeHumidity_> RelativeHumidity__var;
         typedef DDS_DCPSStruct_out < RelativeHumidity_> RelativeHumidity__out;
      }
   }
}




#endif
