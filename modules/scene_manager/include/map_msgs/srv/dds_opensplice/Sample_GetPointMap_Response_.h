//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetPointMap_Response_.h
//  Source: map_msgs\srv\dds_opensplice\Sample_GetPointMap_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPOINTMAP_RESPONSE__H_
#define _SAMPLE_GETPOINTMAP_RESPONSE__H_

#include "sacpp_mapping.h"
#include "GetPointMap_Response_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace map_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_GetPointMap_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               GetPointMap_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_GetPointMap_Response_> Sample_GetPointMap_Response__var;
         typedef DDS_DCPSStruct_out < Sample_GetPointMap_Response_> Sample_GetPointMap_Response__out;
      }
   }
}




#endif
