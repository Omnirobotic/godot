//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: FluidPressure_.h
//  Source: sensor_msgs\msg\dds_opensplice\FluidPressure_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _FLUIDPRESSURE__H_
#define _FLUIDPRESSURE__H_

#include "sacpp_mapping.h"
#include "Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct FluidPressure_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs FluidPressure_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Double fluid_pressure_;
               DDS::Double variance_;
         };

         typedef DDS_DCPSStruct_var < FluidPressure_> FluidPressure__var;
         typedef DDS_DCPSStruct_out < FluidPressure_> FluidPressure__out;
      }
   }
}




#endif
