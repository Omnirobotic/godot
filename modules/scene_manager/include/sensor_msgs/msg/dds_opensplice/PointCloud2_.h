//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PointCloud2_.h
//  Source: sensor_msgs\msg\dds_opensplice\PointCloud2_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _POINTCLOUD2__H_
#define _POINTCLOUD2__H_

#include "sacpp_mapping.h"
#include "PointField_.h"
#include "Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct PointCloud2_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud2_
         {
               struct _fields__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < PointField_, struct _fields__seq_uniq_> _fields__seq;
               typedef DDS_DCPSSequence_var < _fields__seq> _fields__seq_var;
               typedef DDS_DCPSSequence_out < _fields__seq> _fields__seq_out;
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::ULong height_;
               DDS::ULong width_;
               _fields__seq fields_;
               DDS::Boolean is_bigendian_;
               DDS::ULong point_step_;
               DDS::ULong row_step_;
               _data__seq data_;
               DDS::Boolean is_dense_;
         };

         typedef DDS_DCPSStruct_var < PointCloud2_> PointCloud2__var;
         typedef DDS_DCPSStruct_out < PointCloud2_> PointCloud2__out;
      }
   }
}




#endif
