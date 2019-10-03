

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_Goal_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NestedMessage_Goal_Request__58597704_h
#define NestedMessage_Goal_Request__58597704_h

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

            extern const char *NestedMessage_Goal_Request_TYPENAME;

            struct NestedMessage_Goal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Goal_Request_TypeSupport;
            class NestedMessage_Goal_Request_DataWriter;
            class NestedMessage_Goal_Request_DataReader;
            #endif

            class NestedMessage_Goal_Request_ 
            {
              public:
                typedef struct NestedMessage_Goal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Goal_Request_TypeSupport TypeSupport;
                typedef NestedMessage_Goal_Request_DataWriter DataWriter;
                typedef NestedMessage_Goal_Request_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Goal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Goal_Request_Seq, NestedMessage_Goal_Request_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal_Request__initialize(
                NestedMessage_Goal_Request_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal_Request__initialize_ex(
                NestedMessage_Goal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal_Request__initialize_w_params(
                NestedMessage_Goal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Goal_Request__finalize(
                NestedMessage_Goal_Request_* self);

            NDDSUSERDllExport
            void NestedMessage_Goal_Request__finalize_ex(
                NestedMessage_Goal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Goal_Request__finalize_w_params(
                NestedMessage_Goal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Goal_Request__finalize_optional_members(
                NestedMessage_Goal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal_Request__copy(
                NestedMessage_Goal_Request_* dst,
                const NestedMessage_Goal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* NestedMessage_Goal_Request_ */

