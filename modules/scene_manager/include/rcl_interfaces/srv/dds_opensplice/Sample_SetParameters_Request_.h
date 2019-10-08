//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetParameters_Request_.h
//  Source: rcl_interfaces\srv\dds_opensplice\Sample_SetParameters_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETPARAMETERS_REQUEST__H_
#define _SAMPLE_SETPARAMETERS_REQUEST__H_

#include "sacpp_mapping.h"
#include "SetParameters_Request_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetParameters_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_SetParameters_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetParameters_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetParameters_Request_> Sample_SetParameters_Request__var;
         typedef DDS_DCPSStruct_out < Sample_SetParameters_Request_> Sample_SetParameters_Request__out;
      }
   }
}




#endif
