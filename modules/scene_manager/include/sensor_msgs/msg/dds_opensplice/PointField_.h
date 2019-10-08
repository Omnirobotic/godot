//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PointField_.h
//  Source: sensor_msgs\msg\dds_opensplice\PointField_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _POINTFIELD__H_
#define _POINTFIELD__H_

#include "sacpp_mapping.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct PointField_;
         const DDS::Octet PointField__INT8 = (DDS::Octet) 1;
         const DDS::Octet PointField__UINT8 = (DDS::Octet) 2;
         const DDS::Octet PointField__INT16 = (DDS::Octet) 3;
         const DDS::Octet PointField__UINT16 = (DDS::Octet) 4;
         const DDS::Octet PointField__INT32 = (DDS::Octet) 5;
         const DDS::Octet PointField__UINT32 = (DDS::Octet) 6;
         const DDS::Octet PointField__FLOAT32 = (DDS::Octet) 7;
         const DDS::Octet PointField__FLOAT64 = (DDS::Octet) 8;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_
         {
               DDS::String_mgr name_;
               DDS::ULong offset_;
               DDS::Octet datatype_;
               DDS::ULong count_;
         };

         typedef DDS_DCPSStruct_var < PointField_> PointField__var;
         typedef DDS_DCPSStruct_out < PointField_> PointField__out;
      }
   }
}




#endif
