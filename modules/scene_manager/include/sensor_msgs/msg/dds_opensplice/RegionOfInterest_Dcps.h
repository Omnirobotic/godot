//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RegionOfInterest_Dcps.h
//  Source: sensor_msgs\msg\dds_opensplice\RegionOfInterest_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _REGIONOFINTEREST_DCPS_H_
#define _REGIONOFINTEREST_DCPS_H_

#include "sacpp_mapping.h"
#include "RegionOfInterest_.h"
#include "dds_dcps.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_TypeSupportInterface;

         typedef RegionOfInterest_TypeSupportInterface * RegionOfInterest_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < RegionOfInterest_TypeSupportInterface> RegionOfInterest_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < RegionOfInterest_TypeSupportInterface> RegionOfInterest_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataWriter;

         typedef RegionOfInterest_DataWriter * RegionOfInterest_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < RegionOfInterest_DataWriter> RegionOfInterest_DataWriter_var;
         typedef DDS_DCPSInterface_out < RegionOfInterest_DataWriter> RegionOfInterest_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataReader;

         typedef RegionOfInterest_DataReader * RegionOfInterest_DataReader_ptr;
         typedef DDS_DCPSInterface_var < RegionOfInterest_DataReader> RegionOfInterest_DataReader_var;
         typedef DDS_DCPSInterface_out < RegionOfInterest_DataReader> RegionOfInterest_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataReaderView;

         typedef RegionOfInterest_DataReaderView * RegionOfInterest_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < RegionOfInterest_DataReaderView> RegionOfInterest_DataReaderView_var;
         typedef DDS_DCPSInterface_out < RegionOfInterest_DataReaderView> RegionOfInterest_DataReaderView_out;

         struct RegionOfInterest_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < RegionOfInterest_, struct RegionOfInterest_Seq_uniq_> RegionOfInterest_Seq;
         typedef DDS_DCPSSequence_var < RegionOfInterest_Seq> RegionOfInterest_Seq_var;
         typedef DDS_DCPSSequence_out < RegionOfInterest_Seq> RegionOfInterest_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef RegionOfInterest_TypeSupportInterface_ptr _ptr_type;
            typedef RegionOfInterest_TypeSupportInterface_var _var_type;

            static RegionOfInterest_TypeSupportInterface_ptr _duplicate (RegionOfInterest_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RegionOfInterest_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static RegionOfInterest_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RegionOfInterest_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            RegionOfInterest_TypeSupportInterface_ptr _this () { return this; }


         protected:
            RegionOfInterest_TypeSupportInterface () {};
            ~RegionOfInterest_TypeSupportInterface () {};
         private:
            RegionOfInterest_TypeSupportInterface (const RegionOfInterest_TypeSupportInterface &);
            RegionOfInterest_TypeSupportInterface & operator = (const RegionOfInterest_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef RegionOfInterest_DataWriter_ptr _ptr_type;
            typedef RegionOfInterest_DataWriter_var _var_type;

            static RegionOfInterest_DataWriter_ptr _duplicate (RegionOfInterest_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RegionOfInterest_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            RegionOfInterest_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const RegionOfInterest_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const RegionOfInterest_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const RegionOfInterest_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const RegionOfInterest_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const RegionOfInterest_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const RegionOfInterest_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const RegionOfInterest_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const RegionOfInterest_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const RegionOfInterest_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const RegionOfInterest_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (RegionOfInterest_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RegionOfInterest_& instance_data) = 0;

         protected:
            RegionOfInterest_DataWriter () {};
            ~RegionOfInterest_DataWriter () {};
         private:
            RegionOfInterest_DataWriter (const RegionOfInterest_DataWriter &);
            RegionOfInterest_DataWriter & operator = (const RegionOfInterest_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef RegionOfInterest_DataReader_ptr _ptr_type;
            typedef RegionOfInterest_DataReader_var _var_type;

            static RegionOfInterest_DataReader_ptr _duplicate (RegionOfInterest_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RegionOfInterest_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            RegionOfInterest_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (RegionOfInterest_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (RegionOfInterest_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (RegionOfInterest_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RegionOfInterest_& instance) = 0;

         protected:
            RegionOfInterest_DataReader () {};
            ~RegionOfInterest_DataReader () {};
         private:
            RegionOfInterest_DataReader (const RegionOfInterest_DataReader &);
            RegionOfInterest_DataReader & operator = (const RegionOfInterest_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef RegionOfInterest_DataReaderView_ptr _ptr_type;
            typedef RegionOfInterest_DataReaderView_var _var_type;

            static RegionOfInterest_DataReaderView_ptr _duplicate (RegionOfInterest_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static RegionOfInterest_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static RegionOfInterest_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            RegionOfInterest_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (RegionOfInterest_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (RegionOfInterest_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (RegionOfInterest_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (RegionOfInterest_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const RegionOfInterest_& instance) = 0;

         protected:
            RegionOfInterest_DataReaderView () {};
            ~RegionOfInterest_DataReaderView () {};
         private:
            RegionOfInterest_DataReaderView (const RegionOfInterest_DataReaderView &);
            RegionOfInterest_DataReaderView & operator = (const RegionOfInterest_DataReaderView &);
         };

      }
   }
}




#endif
