//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MultiDOFJointState_.h
//  Source: sensor_msgs\msg\dds_opensplice\MultiDOFJointState_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _MULTIDOFJOINTSTATE__H_
#define _MULTIDOFJOINTSTATE__H_

#include "sacpp_mapping.h"
#include "Vector3_.h"
#include "Transform_.h"
#include "Twist_.h"
#include "Wrench_.h"
#include "Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct MultiDOFJointState_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiDOFJointState_
         {
               struct _joint_names__seq_uniq_ {};
               typedef DDS_DCPSUStrSeqT <struct _joint_names__seq_uniq_> _joint_names__seq;
               typedef DDS_DCPSUStrSeq_var < _joint_names__seq> _joint_names__seq_var;
               typedef DDS_DCPSUStrSeq_out < _joint_names__seq> _joint_names__seq_out;
               struct _transforms__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::geometry_msgs::msg::dds_::Transform_, struct _transforms__seq_uniq_> _transforms__seq;
               typedef DDS_DCPSSequence_var < _transforms__seq> _transforms__seq_var;
               typedef DDS_DCPSSequence_out < _transforms__seq> _transforms__seq_out;
               struct _twist__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::geometry_msgs::msg::dds_::Twist_, struct _twist__seq_uniq_> _twist__seq;
               typedef DDS_DCPSSequence_var < _twist__seq> _twist__seq_var;
               typedef DDS_DCPSSequence_out < _twist__seq> _twist__seq_out;
               struct _wrench__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::geometry_msgs::msg::dds_::Wrench_, struct _wrench__seq_uniq_> _wrench__seq;
               typedef DDS_DCPSSequence_var < _wrench__seq> _wrench__seq_var;
               typedef DDS_DCPSSequence_out < _wrench__seq> _wrench__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               _joint_names__seq joint_names_;
               _transforms__seq transforms_;
               _twist__seq twist_;
               _wrench__seq wrench_;
         };

         typedef DDS_DCPSStruct_var < MultiDOFJointState_> MultiDOFJointState__var;
         typedef DDS_DCPSStruct_out < MultiDOFJointState_> MultiDOFJointState__out;
      }
   }
}




#endif
