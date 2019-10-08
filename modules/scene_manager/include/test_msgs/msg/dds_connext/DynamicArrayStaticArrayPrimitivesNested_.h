

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayStaticArrayPrimitivesNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayStaticArrayPrimitivesNested__1324076796_h
#define DynamicArrayStaticArrayPrimitivesNested__1324076796_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/StaticArrayPrimitives_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DynamicArrayStaticArrayPrimitivesNested_TYPENAME;

            struct DynamicArrayStaticArrayPrimitivesNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DynamicArrayStaticArrayPrimitivesNested_TypeSupport;
            class DynamicArrayStaticArrayPrimitivesNested_DataWriter;
            class DynamicArrayStaticArrayPrimitivesNested_DataReader;
            #endif

            class DynamicArrayStaticArrayPrimitivesNested_ 
            {
              public:
                typedef struct DynamicArrayStaticArrayPrimitivesNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DynamicArrayStaticArrayPrimitivesNested_TypeSupport TypeSupport;
                typedef DynamicArrayStaticArrayPrimitivesNested_DataWriter DataWriter;
                typedef DynamicArrayStaticArrayPrimitivesNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::StaticArrayPrimitives_Seq  dynamic_array_static_array_primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DynamicArrayStaticArrayPrimitivesNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DynamicArrayStaticArrayPrimitivesNested_Seq, DynamicArrayStaticArrayPrimitivesNested_);

            NDDSUSERDllExport
            RTIBool DynamicArrayStaticArrayPrimitivesNested__initialize(
                DynamicArrayStaticArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            RTIBool DynamicArrayStaticArrayPrimitivesNested__initialize_ex(
                DynamicArrayStaticArrayPrimitivesNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DynamicArrayStaticArrayPrimitivesNested__initialize_w_params(
                DynamicArrayStaticArrayPrimitivesNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DynamicArrayStaticArrayPrimitivesNested__finalize(
                DynamicArrayStaticArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            void DynamicArrayStaticArrayPrimitivesNested__finalize_ex(
                DynamicArrayStaticArrayPrimitivesNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DynamicArrayStaticArrayPrimitivesNested__finalize_w_params(
                DynamicArrayStaticArrayPrimitivesNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DynamicArrayStaticArrayPrimitivesNested__finalize_optional_members(
                DynamicArrayStaticArrayPrimitivesNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DynamicArrayStaticArrayPrimitivesNested__copy(
                DynamicArrayStaticArrayPrimitivesNested_* dst,
                const DynamicArrayStaticArrayPrimitivesNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* DynamicArrayStaticArrayPrimitivesNested_ */

