//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Twist_Dcps.h
//  Source: geometry_msgs\msg\dds_opensplice\Twist_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _TWIST_DCPS_H_
#define _TWIST_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Twist_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_TypeSupportInterface;

         typedef Twist_TypeSupportInterface * Twist_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Twist_TypeSupportInterface> Twist_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Twist_TypeSupportInterface> Twist_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataWriter;

         typedef Twist_DataWriter * Twist_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Twist_DataWriter> Twist_DataWriter_var;
         typedef DDS_DCPSInterface_out < Twist_DataWriter> Twist_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataReader;

         typedef Twist_DataReader * Twist_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Twist_DataReader> Twist_DataReader_var;
         typedef DDS_DCPSInterface_out < Twist_DataReader> Twist_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataReaderView;

         typedef Twist_DataReaderView * Twist_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Twist_DataReaderView> Twist_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Twist_DataReaderView> Twist_DataReaderView_out;

         struct Twist_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < Twist_, struct Twist_Seq_uniq_> Twist_Seq;
         typedef DDS_DCPSSequence_var < Twist_Seq> Twist_Seq_var;
         typedef DDS_DCPSSequence_out < Twist_Seq> Twist_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Twist_TypeSupportInterface_ptr _ptr_type;
            typedef Twist_TypeSupportInterface_var _var_type;

            static Twist_TypeSupportInterface_ptr _duplicate (Twist_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Twist_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Twist_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Twist_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Twist_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Twist_TypeSupportInterface () {};
            ~Twist_TypeSupportInterface () {};
         private:
            Twist_TypeSupportInterface (const Twist_TypeSupportInterface &);
            Twist_TypeSupportInterface & operator = (const Twist_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Twist_DataWriter_ptr _ptr_type;
            typedef Twist_DataWriter_var _var_type;

            static Twist_DataWriter_ptr _duplicate (Twist_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Twist_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Twist_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Twist_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Twist_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Twist_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Twist_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Twist_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Twist_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Twist_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Twist_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Twist_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Twist_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Twist_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Twist_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Twist_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Twist_& instance_data) = 0;

         protected:
            Twist_DataWriter () {};
            ~Twist_DataWriter () {};
         private:
            Twist_DataWriter (const Twist_DataWriter &);
            Twist_DataWriter & operator = (const Twist_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Twist_DataReader_ptr _ptr_type;
            typedef Twist_DataReader_var _var_type;

            static Twist_DataReader_ptr _duplicate (Twist_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Twist_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Twist_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Twist_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Twist_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Twist_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Twist_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Twist_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Twist_& instance) = 0;

         protected:
            Twist_DataReader () {};
            ~Twist_DataReader () {};
         private:
            Twist_DataReader (const Twist_DataReader &);
            Twist_DataReader & operator = (const Twist_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Twist_DataReaderView_ptr _ptr_type;
            typedef Twist_DataReaderView_var _var_type;

            static Twist_DataReaderView_ptr _duplicate (Twist_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Twist_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Twist_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Twist_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Twist_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Twist_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Twist_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Twist_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Twist_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Twist_& instance) = 0;

         protected:
            Twist_DataReaderView () {};
            ~Twist_DataReaderView () {};
         private:
            Twist_DataReaderView (const Twist_DataReaderView &);
            Twist_DataReaderView & operator = (const Twist_DataReaderView &);
         };

      }
   }
}




#endif
