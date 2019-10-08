//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Plane_.h
//  Source: shape_msgs\msg\dds_opensplice\Plane_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _PLANE__H_
#define _PLANE__H_

#include "sacpp_mapping.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace shape_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Plane_;
         typedef DDS::Double shape_msgs__Plane__double_array_4_slice;
         typedef DDS::Double shape_msgs__Plane__double_array_4[4];
         typedef shape_msgs__Plane__double_array_4 shape_msgs__Plane__double_array_4_out;
         ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs extern shape_msgs__Plane__double_array_4_slice * shape_msgs__Plane__double_array_4_alloc ();
         ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs extern void shape_msgs__Plane__double_array_4_free (shape_msgs__Plane__double_array_4_slice *);
         ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs extern void shape_msgs__Plane__double_array_4_copy (shape_msgs__Plane__double_array_4_slice* to, const shape_msgs__Plane__double_array_4_slice* from);
         ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs extern shape_msgs__Plane__double_array_4_slice *shape_msgs__Plane__double_array_4_dup (const shape_msgs__Plane__double_array_4_slice* from);

         struct shape_msgs__Plane__double_array_4_uniq_ {};
         typedef DDS_DCPS_FArray_var< shape_msgs__Plane__double_array_4, shape_msgs__Plane__double_array_4_slice, struct shape_msgs__Plane__double_array_4_uniq_> shape_msgs__Plane__double_array_4_var;
         typedef DDS_DCPS_Array_forany< shape_msgs__Plane__double_array_4, shape_msgs__Plane__double_array_4_slice, struct shape_msgs__Plane__double_array_4_uniq_> shape_msgs__Plane__double_array_4_forany;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_
         {
               shape_msgs__Plane__double_array_4 coef_;
         };

         typedef DDS_DCPSStruct_var < Plane_> Plane__var;
         typedef Plane_&Plane__out;
      }
   }
}
template <>
shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice* DDS_DCPS_ArrayHelper < shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_uniq_>::copy (shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice *to, const shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice* from);
template <>
void DDS_DCPS_ArrayHelper < shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice, shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_uniq_>::free (shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_slice *ptr);




#endif
