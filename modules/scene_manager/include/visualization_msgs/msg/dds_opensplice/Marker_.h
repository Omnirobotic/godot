//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Marker_.h
//  Source: visualization_msgs\msg\dds_opensplice\Marker_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _MARKER__H_
#define _MARKER__H_

#include "sacpp_mapping.h"
#include "Vector3_.h"
#include "Pose_.h"
#include "ColorRGBA_.h"
#include "Point_.h"
#include "Duration_.h"
#include "Header_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace visualization_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Marker_;
         const DDS::Octet Marker__ARROW = (DDS::Octet) 0;
         const DDS::Octet Marker__CUBE = (DDS::Octet) 1;
         const DDS::Octet Marker__SPHERE = (DDS::Octet) 2;
         const DDS::Octet Marker__CYLINDER = (DDS::Octet) 3;
         const DDS::Octet Marker__LINE_STRIP = (DDS::Octet) 4;
         const DDS::Octet Marker__LINE_LIST = (DDS::Octet) 5;
         const DDS::Octet Marker__CUBE_LIST = (DDS::Octet) 6;
         const DDS::Octet Marker__SPHERE_LIST = (DDS::Octet) 7;
         const DDS::Octet Marker__POINTS = (DDS::Octet) 8;
         const DDS::Octet Marker__TEXT_VIEW_FACING = (DDS::Octet) 9;
         const DDS::Octet Marker__MESH_RESOURCE = (DDS::Octet) 10;
         const DDS::Octet Marker__TRIANGLE_LIST = (DDS::Octet) 11;
         const DDS::Octet Marker__ADD = (DDS::Octet) 0;
         const DDS::Octet Marker__MODIFY = (DDS::Octet) 0;
         const DDS::Octet Marker__DELETE = (DDS::Octet) 2;
         const DDS::Octet Marker__DELETEALL = (DDS::Octet) 3;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_
         {
               struct _points__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::geometry_msgs::msg::dds_::Point_, struct _points__seq_uniq_> _points__seq;
               typedef DDS_DCPSSequence_var < _points__seq> _points__seq_var;
               typedef DDS_DCPSSequence_out < _points__seq> _points__seq_out;
               struct _colors__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::std_msgs::msg::dds_::ColorRGBA_, struct _colors__seq_uniq_> _colors__seq;
               typedef DDS_DCPSSequence_var < _colors__seq> _colors__seq_var;
               typedef DDS_DCPSSequence_out < _colors__seq> _colors__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::String_mgr ns_;
               DDS::Long id_;
               DDS::Long type_;
               DDS::Long action_;
               ::geometry_msgs::msg::dds_::Pose_ pose_;
               ::geometry_msgs::msg::dds_::Vector3_ scale_;
               ::std_msgs::msg::dds_::ColorRGBA_ color_;
               ::builtin_interfaces::msg::dds_::Duration_ lifetime_;
               DDS::Boolean frame_locked_;
               _points__seq points_;
               _colors__seq colors_;
               DDS::String_mgr text_;
               DDS::String_mgr mesh_resource_;
               DDS::Boolean mesh_use_embedded_materials_;
         };

         typedef DDS_DCPSStruct_var < Marker_> Marker__var;
         typedef DDS_DCPSStruct_out < Marker_> Marker__out;
      }
   }
}




#endif