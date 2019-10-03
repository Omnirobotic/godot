

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundedArrayPrimitivesNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoundedArrayPrimitivesNested__258832398_h
#define BoundedArrayPrimitivesNested__258832398_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/BoundedArrayPrimitives_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *BoundedArrayPrimitivesNested_TYPENAME;

            struct BoundedArrayPrimitivesNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BoundedArrayPrimitivesNested_TypeSupport;
            class BoundedArrayPrimitivesNested_DataWriter;
            class BoundedArrayPrimitivesNested_DataReader;
            #endif

            class BoundedArrayPrimitivesNested_ 
            {
              public:
                typedef struct BoundedArrayPrimitivesNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BoundedArrayPrimitivesNested_TypeSupport TypeSupport;
                typedef BoundedArrayPrimitivesNested_DataWriter DataWriter;
                typedef BoundedArrayPrimitivesNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::BoundedArrayPrimitives_Seq  bounded_array_primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BoundedArrayPrimitivesNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BoundedArrayPrimitivesNested_Seq, BoundedArrayPrimitivesNested_);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitivesNested__initialize(
                BoundedArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitivesNested__initialize_ex(
                BoundedArrayPrimitivesNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitivesNested__initialize_w_params(
                BoundedArrayPrimitivesNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BoundedArrayPrimitivesNested__finalize(
                BoundedArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            void BoundedArrayPrimitivesNested__finalize_ex(
                BoundedArrayPrimitivesNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BoundedArrayPrimitivesNested__finalize_w_params(
                BoundedArrayPrimitivesNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BoundedArrayPrimitivesNested__finalize_optional_members(
                BoundedArrayPrimitivesNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitivesNested__copy(
                BoundedArrayPrimitivesNested_* dst,
                const BoundedArrayPrimitivesNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* BoundedArrayPrimitivesNested_ */

