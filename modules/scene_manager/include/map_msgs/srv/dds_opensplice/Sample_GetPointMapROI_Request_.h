//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetPointMapROI_Request_.h
//  Source: map_msgs\srv\dds_opensplice\Sample_GetPointMapROI_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPOINTMAPROI_REQUEST__H_
#define _SAMPLE_GETPOINTMAPROI_REQUEST__H_

#include "sacpp_mapping.h"
#include "GetPointMapROI_Request_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace map_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_GetPointMapROI_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               GetPointMapROI_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_GetPointMapROI_Request_> Sample_GetPointMapROI_Request__var;
         typedef Sample_GetPointMapROI_Request_&Sample_GetPointMapROI_Request__out;
      }
   }
}




#endif
