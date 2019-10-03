//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ImageMarker_.h
//  Source: visualization_msgs\msg\dds_opensplice\ImageMarker_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _IMAGEMARKER__H_
#define _IMAGEMARKER__H_

#include "sacpp_mapping.h"
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
         struct ImageMarker_;
         const DDS::Octet ImageMarker__CIRCLE = (DDS::Octet) 0;
         const DDS::Octet ImageMarker__LINE_STRIP = (DDS::Octet) 1;
         const DDS::Octet ImageMarker__LINE_LIST = (DDS::Octet) 2;
         const DDS::Octet ImageMarker__POLYGON = (DDS::Octet) 3;
         const DDS::Octet ImageMarker__POINTS = (DDS::Octet) 4;
         const DDS::Octet ImageMarker__ADD = (DDS::Octet) 0;
         const DDS::Octet ImageMarker__REMOVE = (DDS::Octet) 1;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_
         {
               struct _points__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::geometry_msgs::msg::dds_::Point_, struct _points__seq_uniq_> _points__seq;
               typedef DDS_DCPSSequence_var < _points__seq> _points__seq_var;
               typedef DDS_DCPSSequence_out < _points__seq> _points__seq_out;
               struct _outline_colors__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < ::std_msgs::msg::dds_::ColorRGBA_, struct _outline_colors__seq_uniq_> _outline_colors__seq;
               typedef DDS_DCPSSequence_var < _outline_colors__seq> _outline_colors__seq_var;
               typedef DDS_DCPSSequence_out < _outline_colors__seq> _outline_colors__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::String_mgr ns_;
               DDS::Long id_;
               DDS::Long type_;
               DDS::Long action_;
               ::geometry_msgs::msg::dds_::Point_ position_;
               DDS::Float scale_;
               ::std_msgs::msg::dds_::ColorRGBA_ outline_color_;
               DDS::Octet filled_;
               ::std_msgs::msg::dds_::ColorRGBA_ fill_color_;
               ::builtin_interfaces::msg::dds_::Duration_ lifetime_;
               _points__seq points_;
               _outline_colors__seq outline_colors_;
         };

         typedef DDS_DCPSStruct_var < ImageMarker_> ImageMarker__var;
         typedef DDS_DCPSStruct_out < ImageMarker_> ImageMarker__out;
      }
   }
}




#endif
