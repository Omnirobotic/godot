//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Empty_Request_.h
//  Source: std_srvs\srv\dds_opensplice\Empty_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _EMPTY_REQUEST__H_
#define _EMPTY_REQUEST__H_

#include "sacpp_mapping.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Empty_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Empty_Request_
         {
               DDS::Boolean dummy;
         };

         typedef DDS_DCPSStruct_var < Empty_Request_> Empty_Request__var;
         typedef Empty_Request_&Empty_Request__out;
      }
   }
}




#endif