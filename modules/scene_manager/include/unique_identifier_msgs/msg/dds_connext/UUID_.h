

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UUID_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UUID__1199467504_h
#define UUID__1199467504_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace unique_identifier_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Octet   unique_identifier_msgs__UUID__octet_array_16 [16];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_unique_identifier_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* unique_identifier_msgs__UUID__octet_array_16_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(unique_identifier_msgs__UUID__octet_array_16Seq, unique_identifier_msgs__UUID__octet_array_16);

            NDDSUSERDllExport
            RTIBool unique_identifier_msgs__UUID__octet_array_16_initialize(
                unique_identifier_msgs__UUID__octet_array_16* self);

            NDDSUSERDllExport
            RTIBool unique_identifier_msgs__UUID__octet_array_16_initialize_ex(
                unique_identifier_msgs__UUID__octet_array_16* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool unique_identifier_msgs__UUID__octet_array_16_initialize_w_params(
                unique_identifier_msgs__UUID__octet_array_16* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void unique_identifier_msgs__UUID__octet_array_16_finalize(
                unique_identifier_msgs__UUID__octet_array_16* self);

            NDDSUSERDllExport
            void unique_identifier_msgs__UUID__octet_array_16_finalize_ex(
                unique_identifier_msgs__UUID__octet_array_16* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void unique_identifier_msgs__UUID__octet_array_16_finalize_w_params(
                unique_identifier_msgs__UUID__octet_array_16* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void unique_identifier_msgs__UUID__octet_array_16_finalize_optional_members(
                unique_identifier_msgs__UUID__octet_array_16* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool unique_identifier_msgs__UUID__octet_array_16_copy(
                unique_identifier_msgs__UUID__octet_array_16* dst,
                const unique_identifier_msgs__UUID__octet_array_16* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_unique_identifier_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *UUID_TYPENAME;

            struct UUID_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UUID_TypeSupport;
            class UUID_DataWriter;
            class UUID_DataReader;
            #endif

            class UUID_ 
            {
              public:
                typedef struct UUID_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UUID_TypeSupport TypeSupport;
                typedef UUID_DataWriter DataWriter;
                typedef UUID_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::unique_identifier_msgs__UUID__octet_array_16   uuid_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_unique_identifier_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UUID__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UUID_Seq, UUID_);

            NDDSUSERDllExport
            RTIBool UUID__initialize(
                UUID_* self);

            NDDSUSERDllExport
            RTIBool UUID__initialize_ex(
                UUID_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UUID__initialize_w_params(
                UUID_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UUID__finalize(
                UUID_* self);

            NDDSUSERDllExport
            void UUID__finalize_ex(
                UUID_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UUID__finalize_w_params(
                UUID_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UUID__finalize_optional_members(
                UUID_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UUID__copy(
                UUID_* dst,
                const UUID_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_unique_identifier_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace unique_identifier_msgs  */

#endif /* UUID_ */

