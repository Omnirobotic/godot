

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_Result_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NestedMessage_Result_Response__1937067444_h
#define NestedMessage_Result_Response__1937067444_h

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
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_Result_Response_TYPENAME;

            struct NestedMessage_Result_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Result_Response_TypeSupport;
            class NestedMessage_Result_Response_DataWriter;
            class NestedMessage_Result_Response_DataReader;
            #endif

            class NestedMessage_Result_Response_ 
            {
              public:
                typedef struct NestedMessage_Result_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Result_Response_TypeSupport TypeSupport;
                typedef NestedMessage_Result_Response_DataWriter DataWriter;
                typedef NestedMessage_Result_Response_DataReader DataReader;
                #endif

                DDS_Octet   action_status_ ;
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

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Result_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Result_Response_Seq, NestedMessage_Result_Response_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result_Response__initialize(
                NestedMessage_Result_Response_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result_Response__initialize_ex(
                NestedMessage_Result_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result_Response__initialize_w_params(
                NestedMessage_Result_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Result_Response__finalize(
                NestedMessage_Result_Response_* self);

            NDDSUSERDllExport
            void NestedMessage_Result_Response__finalize_ex(
                NestedMessage_Result_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Result_Response__finalize_w_params(
                NestedMessage_Result_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Result_Response__finalize_optional_members(
                NestedMessage_Result_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Result_Response__copy(
                NestedMessage_Result_Response_* dst,
                const NestedMessage_Result_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* NestedMessage_Result_Response_ */

