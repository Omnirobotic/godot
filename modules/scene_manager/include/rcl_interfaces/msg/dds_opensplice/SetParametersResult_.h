//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParametersResult_.h
//  Source: rcl_interfaces\msg\dds_opensplice\SetParametersResult_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SETPARAMETERSRESULT__H_
#define _SETPARAMETERSRESULT__H_

#include "sacpp_mapping.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace rcl_interfaces
{
   namespace msg
   {
      namespace dds_
      {
         struct SetParametersResult_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces SetParametersResult_
         {
               DDS::Boolean successful_;
               DDS::String_mgr reason_;
         };

         typedef DDS_DCPSStruct_var < SetParametersResult_> SetParametersResult__var;
         typedef DDS_DCPSStruct_out < SetParametersResult_> SetParametersResult__out;
      }
   }
}




#endif
