

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CancelGoal_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "CancelGoal_Request_.h"

#include <new>

namespace action_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *CancelGoal_Request_TYPENAME = "action_msgs::srv::dds_::CancelGoal_Request_";

            DDS_TypeCode* CancelGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CancelGoal_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_info_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode CancelGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"action_msgs::srv::dds_::CancelGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        CancelGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for CancelGoal_Request_*/

                if (is_initialized) {
                    return &CancelGoal_Request__g_tc;
                }

                CancelGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)action_msgs::msg::dds_::GoalInfo__get_typecode();

                is_initialized = RTI_TRUE;

                return &CancelGoal_Request__g_tc;
            }

            RTIBool CancelGoal_Request__initialize(
                CancelGoal_Request_* sample) {
                return action_msgs::srv::dds_::CancelGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool CancelGoal_Request__initialize_ex(
                CancelGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return action_msgs::srv::dds_::CancelGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool CancelGoal_Request__initialize_w_params(
                CancelGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!action_msgs::msg::dds_::GoalInfo__initialize_w_params(&sample->goal_info_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void CancelGoal_Request__finalize(
                CancelGoal_Request_* sample)
            {

                action_msgs::srv::dds_::CancelGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void CancelGoal_Request__finalize_ex(
                CancelGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                action_msgs::srv::dds_::CancelGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void CancelGoal_Request__finalize_w_params(
                CancelGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                action_msgs::msg::dds_::GoalInfo__finalize_w_params(&sample->goal_info_,deallocParams);

            }

            void CancelGoal_Request__finalize_optional_members(
                CancelGoal_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                action_msgs::msg::dds_::GoalInfo__finalize_optional_members(&sample->goal_info_, deallocParams->delete_pointers);
            }

            RTIBool CancelGoal_Request__copy(
                CancelGoal_Request_* dst,
                const CancelGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!action_msgs::msg::dds_::GoalInfo__copy(
                        &dst->goal_info_,(const action_msgs::msg::dds_::GoalInfo_*)&src->goal_info_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'CancelGoal_Request_' sequence class.
            */
            #define T CancelGoal_Request_
            #define TSeq CancelGoal_Request_Seq

            #define T_initialize_w_params action_msgs::srv::dds_::CancelGoal_Request__initialize_w_params

            #define T_finalize_w_params   action_msgs::srv::dds_::CancelGoal_Request__finalize_w_params
            #define T_copy       action_msgs::srv::dds_::CancelGoal_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace action_msgs  */

