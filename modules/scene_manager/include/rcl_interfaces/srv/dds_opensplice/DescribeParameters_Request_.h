//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DescribeParameters_Request_.h
//  Source: rcl_interfaces\srv\dds_opensplice\DescribeParameters_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _DESCRIBEPARAMETERS_REQUEST__H_
#define _DESCRIBEPARAMETERS_REQUEST__H_

#include "sacpp_mapping.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct DescribeParameters_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces DescribeParameters_Request_
         {
               struct _names__seq_uniq_ {};
               typedef DDS_DCPSUStrSeqT <struct _names__seq_uniq_> _names__seq;
               typedef DDS_DCPSUStrSeq_var < _names__seq> _names__seq_var;
               typedef DDS_DCPSUStrSeq_out < _names__seq> _names__seq_out;
               _names__seq names_;
         };

         typedef DDS_DCPSStruct_var < DescribeParameters_Request_> DescribeParameters_Request__var;
         typedef DDS_DCPSStruct_out < DescribeParameters_Request_> DescribeParameters_Request__out;
      }
   }
}




#endif