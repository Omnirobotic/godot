

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_Feedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NestedMessage_Feedback__976583318_h
#define NestedMessage_Feedback__976583318_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "test_msgs/msg/dds_connext/Builtins_.h"
#include "test_msgs/msg/dds_connext/Primitives_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_Feedback_TYPENAME;

            struct NestedMessage_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Feedback_TypeSupport;
            class NestedMessage_Feedback_DataWriter;
            class NestedMessage_Feedback_DataReader;
            #endif

            class NestedMessage_Feedback_ 
            {
              public:
                typedef struct NestedMessage_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Feedback_TypeSupport TypeSupport;
                typedef NestedMessage_Feedback_DataWriter DataWriter;
                typedef NestedMessage_Feedback_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   action_goal_id_ ;
                test_msgs::msg::dds_::Builtins_   nested_field_no_pkg_ ;
                test_msgs::msg::dds_::Primitives_   nested_field_ ;
                builtin_interfaces::msg::dds_::Time_   nested_different_pkg_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Feedback_Seq, NestedMessage_Feedback_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize(
                NestedMessage_Feedback_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize_ex(
                NestedMessage_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize_w_params(
                NestedMessage_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize(
                NestedMessage_Feedback_* self);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_ex(
                NestedMessage_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_w_params(
                NestedMessage_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_optional_members(
                NestedMessage_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__copy(
                NestedMessage_Feedback_* dst,
                const NestedMessage_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* NestedMessage_Feedback_ */

