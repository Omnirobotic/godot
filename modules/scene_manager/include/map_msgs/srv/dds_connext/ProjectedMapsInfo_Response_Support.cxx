
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMapsInfo_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "ProjectedMapsInfo_Response_Support.h"
#include "ProjectedMapsInfo_Response_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'ProjectedMapsInfo_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   ProjectedMapsInfo_Response_TYPENAME

            /* Defines */
            #define TDataWriter ProjectedMapsInfo_Response_DataWriter
            #define TData       map_msgs::srv::dds_::ProjectedMapsInfo_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   ProjectedMapsInfo_Response_TYPENAME

            /* Defines */
            #define TDataReader ProjectedMapsInfo_Response_DataReader
            #define TDataSeq    ProjectedMapsInfo_Response_Seq
            #define TData       map_msgs::srv::dds_::ProjectedMapsInfo_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    ProjectedMapsInfo_Response_TYPENAME
            #define TPlugin_new  map_msgs::srv::dds_::ProjectedMapsInfo_Response_Plugin_new
            #define TPlugin_delete  map_msgs::srv::dds_::ProjectedMapsInfo_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport ProjectedMapsInfo_Response_TypeSupport
            #define TData        map_msgs::srv::dds_::ProjectedMapsInfo_Response_
            #define TDataReader  ProjectedMapsInfo_Response_DataReader
            #define TDataWriter  ProjectedMapsInfo_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

