

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CancelGoal_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CancelGoal_Request__809269348_h
#define CancelGoal_Request__809269348_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "action_msgs/msg/dds_connext/GoalInfo_.h"
namespace action_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *CancelGoal_Request_TYPENAME;

            struct CancelGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CancelGoal_Request_TypeSupport;
            class CancelGoal_Request_DataWriter;
            class CancelGoal_Request_DataReader;
            #endif

            class CancelGoal_Request_ 
            {
              public:
                typedef struct CancelGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CancelGoal_Request_TypeSupport TypeSupport;
                typedef CancelGoal_Request_DataWriter DataWriter;
                typedef CancelGoal_Request_DataReader DataReader;
                #endif

                action_msgs::msg::dds_::GoalInfo_   goal_info_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_action_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CancelGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CancelGoal_Request_Seq, CancelGoal_Request_);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize(
                CancelGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize_ex(
                CancelGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize_w_params(
                CancelGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CancelGoal_Request__finalize(
                CancelGoal_Request_* self);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_ex(
                CancelGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_w_params(
                CancelGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_optional_members(
                CancelGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__copy(
                CancelGoal_Request_* dst,
                const CancelGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_action_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace action_msgs  */

#endif /* CancelGoal_Request_ */

