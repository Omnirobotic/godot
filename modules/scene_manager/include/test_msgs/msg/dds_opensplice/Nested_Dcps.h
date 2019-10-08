//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Nested_Dcps.h
//  Source: test_msgs\msg\dds_opensplice\Nested_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _NESTED_DCPS_H_
#define _NESTED_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Nested_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_TypeSupportInterface;

         typedef Nested_TypeSupportInterface * Nested_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Nested_TypeSupportInterface> Nested_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Nested_TypeSupportInterface> Nested_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataWriter;

         typedef Nested_DataWriter * Nested_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Nested_DataWriter> Nested_DataWriter_var;
         typedef DDS_DCPSInterface_out < Nested_DataWriter> Nested_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataReader;

         typedef Nested_DataReader * Nested_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Nested_DataReader> Nested_DataReader_var;
         typedef DDS_DCPSInterface_out < Nested_DataReader> Nested_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataReaderView;

         typedef Nested_DataReaderView * Nested_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Nested_DataReaderView> Nested_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Nested_DataReaderView> Nested_DataReaderView_out;

         struct Nested_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < Nested_, struct Nested_Seq_uniq_> Nested_Seq;
         typedef DDS_DCPSSequence_var < Nested_Seq> Nested_Seq_var;
         typedef DDS_DCPSSequence_out < Nested_Seq> Nested_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Nested_TypeSupportInterface_ptr _ptr_type;
            typedef Nested_TypeSupportInterface_var _var_type;

            static Nested_TypeSupportInterface_ptr _duplicate (Nested_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Nested_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Nested_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Nested_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Nested_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Nested_TypeSupportInterface () {};
            ~Nested_TypeSupportInterface () {};
         private:
            Nested_TypeSupportInterface (const Nested_TypeSupportInterface &);
            Nested_TypeSupportInterface & operator = (const Nested_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Nested_DataWriter_ptr _ptr_type;
            typedef Nested_DataWriter_var _var_type;

            static Nested_DataWriter_ptr _duplicate (Nested_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Nested_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Nested_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Nested_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Nested_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Nested_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Nested_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Nested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Nested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Nested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Nested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Nested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Nested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Nested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Nested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Nested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Nested_& instance_data) = 0;

         protected:
            Nested_DataWriter () {};
            ~Nested_DataWriter () {};
         private:
            Nested_DataWriter (const Nested_DataWriter &);
            Nested_DataWriter & operator = (const Nested_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Nested_DataReader_ptr _ptr_type;
            typedef Nested_DataReader_var _var_type;

            static Nested_DataReader_ptr _duplicate (Nested_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Nested_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Nested_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Nested_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Nested_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Nested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Nested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Nested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Nested_& instance) = 0;

         protected:
            Nested_DataReader () {};
            ~Nested_DataReader () {};
         private:
            Nested_DataReader (const Nested_DataReader &);
            Nested_DataReader & operator = (const Nested_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Nested_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Nested_DataReaderView_ptr _ptr_type;
            typedef Nested_DataReaderView_var _var_type;

            static Nested_DataReaderView_ptr _duplicate (Nested_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Nested_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Nested_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Nested_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Nested_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Nested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Nested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Nested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Nested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Nested_& instance) = 0;

         protected:
            Nested_DataReaderView () {};
            ~Nested_DataReaderView () {};
         private:
            Nested_DataReaderView (const Nested_DataReaderView &);
            Nested_DataReaderView & operator = (const Nested_DataReaderView &);
         };

      }
   }
}




#endif
