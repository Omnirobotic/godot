//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetParameterTypes_Request_Dcps.h
//  Source: rcl_interfaces\srv\dds_opensplice\Sample_GetParameterTypes_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPARAMETERTYPES_REQUEST_DCPS_H_
#define _SAMPLE_GETPARAMETERTYPES_REQUEST_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Sample_GetParameterTypes_Request_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_TypeSupportInterface;

         typedef Sample_GetParameterTypes_Request_TypeSupportInterface * Sample_GetParameterTypes_Request_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_TypeSupportInterface> Sample_GetParameterTypes_Request_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_TypeSupportInterface> Sample_GetParameterTypes_Request_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataWriter;

         typedef Sample_GetParameterTypes_Request_DataWriter * Sample_GetParameterTypes_Request_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataWriter> Sample_GetParameterTypes_Request_DataWriter_var;
         typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataWriter> Sample_GetParameterTypes_Request_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataReader;

         typedef Sample_GetParameterTypes_Request_DataReader * Sample_GetParameterTypes_Request_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataReader> Sample_GetParameterTypes_Request_DataReader_var;
         typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataReader> Sample_GetParameterTypes_Request_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataReaderView;

         typedef Sample_GetParameterTypes_Request_DataReaderView * Sample_GetParameterTypes_Request_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetParameterTypes_Request_DataReaderView> Sample_GetParameterTypes_Request_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Sample_GetParameterTypes_Request_DataReaderView> Sample_GetParameterTypes_Request_DataReaderView_out;

         struct Sample_GetParameterTypes_Request_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < Sample_GetParameterTypes_Request_, struct Sample_GetParameterTypes_Request_Seq_uniq_> Sample_GetParameterTypes_Request_Seq;
         typedef DDS_DCPSSequence_var < Sample_GetParameterTypes_Request_Seq> Sample_GetParameterTypes_Request_Seq_var;
         typedef DDS_DCPSSequence_out < Sample_GetParameterTypes_Request_Seq> Sample_GetParameterTypes_Request_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _ptr_type;
            typedef Sample_GetParameterTypes_Request_TypeSupportInterface_var _var_type;

            static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _duplicate (Sample_GetParameterTypes_Request_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetParameterTypes_Request_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Sample_GetParameterTypes_Request_TypeSupportInterface () {};
            ~Sample_GetParameterTypes_Request_TypeSupportInterface () {};
         private:
            Sample_GetParameterTypes_Request_TypeSupportInterface (const Sample_GetParameterTypes_Request_TypeSupportInterface &);
            Sample_GetParameterTypes_Request_TypeSupportInterface & operator = (const Sample_GetParameterTypes_Request_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Sample_GetParameterTypes_Request_DataWriter_ptr _ptr_type;
            typedef Sample_GetParameterTypes_Request_DataWriter_var _var_type;

            static Sample_GetParameterTypes_Request_DataWriter_ptr _duplicate (Sample_GetParameterTypes_Request_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetParameterTypes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetParameterTypes_Request_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Sample_GetParameterTypes_Request_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Sample_GetParameterTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance_data) = 0;

         protected:
            Sample_GetParameterTypes_Request_DataWriter () {};
            ~Sample_GetParameterTypes_Request_DataWriter () {};
         private:
            Sample_GetParameterTypes_Request_DataWriter (const Sample_GetParameterTypes_Request_DataWriter &);
            Sample_GetParameterTypes_Request_DataWriter & operator = (const Sample_GetParameterTypes_Request_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Sample_GetParameterTypes_Request_DataReader_ptr _ptr_type;
            typedef Sample_GetParameterTypes_Request_DataReader_var _var_type;

            static Sample_GetParameterTypes_Request_DataReader_ptr _duplicate (Sample_GetParameterTypes_Request_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetParameterTypes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetParameterTypes_Request_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance) = 0;

         protected:
            Sample_GetParameterTypes_Request_DataReader () {};
            ~Sample_GetParameterTypes_Request_DataReader () {};
         private:
            Sample_GetParameterTypes_Request_DataReader (const Sample_GetParameterTypes_Request_DataReader &);
            Sample_GetParameterTypes_Request_DataReader & operator = (const Sample_GetParameterTypes_Request_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_GetParameterTypes_Request_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Sample_GetParameterTypes_Request_DataReaderView_ptr _ptr_type;
            typedef Sample_GetParameterTypes_Request_DataReaderView_var _var_type;

            static Sample_GetParameterTypes_Request_DataReaderView_ptr _duplicate (Sample_GetParameterTypes_Request_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetParameterTypes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetParameterTypes_Request_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetParameterTypes_Request_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Sample_GetParameterTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Sample_GetParameterTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Sample_GetParameterTypes_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetParameterTypes_Request_& instance) = 0;

         protected:
            Sample_GetParameterTypes_Request_DataReaderView () {};
            ~Sample_GetParameterTypes_Request_DataReaderView () {};
         private:
            Sample_GetParameterTypes_Request_DataReaderView (const Sample_GetParameterTypes_Request_DataReaderView &);
            Sample_GetParameterTypes_Request_DataReaderView & operator = (const Sample_GetParameterTypes_Request_DataReaderView &);
         };

      }
   }
}




#endif
