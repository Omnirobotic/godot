

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatFix_Plugin_1372680578_h
#define NavSatFix_Plugin_1372680578_h

#include "NavSatFix_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "sensor_msgs/msg/dds_connext/NavSatStatus_Plugin.h"
#include "std_msgs/msg/dds_connext/Header_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            #define sensor_msgs__NavSatFix__double_array_9Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define sensor_msgs__NavSatFix__double_array_9Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define sensor_msgs__NavSatFix__double_array_9Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define sensor_msgs__NavSatFix__double_array_9Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define sensor_msgs__NavSatFix__double_array_9Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern sensor_msgs__NavSatFix__double_array_9*
            sensor_msgs__NavSatFix__double_array_9PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern sensor_msgs__NavSatFix__double_array_9*
            sensor_msgs__NavSatFix__double_array_9PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern sensor_msgs__NavSatFix__double_array_9*
            sensor_msgs__NavSatFix__double_array_9PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9PluginSupport_copy_data(
                sensor_msgs__NavSatFix__double_array_9 *out,
                const sensor_msgs__NavSatFix__double_array_9 *in);

            NDDSUSERDllExport extern void 
            sensor_msgs__NavSatFix__double_array_9PluginSupport_destroy_data_w_params(
                sensor_msgs__NavSatFix__double_array_9 *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            sensor_msgs__NavSatFix__double_array_9PluginSupport_destroy_data_ex(
                sensor_msgs__NavSatFix__double_array_9 *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            sensor_msgs__NavSatFix__double_array_9PluginSupport_destroy_data(
                sensor_msgs__NavSatFix__double_array_9 *sample);

            NDDSUSERDllExport extern void 
            sensor_msgs__NavSatFix__double_array_9PluginSupport_print_data(
                const sensor_msgs__NavSatFix__double_array_9 *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                sensor_msgs__NavSatFix__double_array_9 *out,
                const sensor_msgs__NavSatFix__double_array_9 *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const sensor_msgs__NavSatFix__double_array_9 *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                sensor_msgs__NavSatFix__double_array_9 *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            sensor_msgs__NavSatFix__double_array_9Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const sensor_msgs__NavSatFix__double_array_9 * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            sensor_msgs__NavSatFix__double_array_9Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const sensor_msgs__NavSatFix__double_array_9 *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            sensor_msgs__NavSatFix__double_array_9Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                sensor_msgs__NavSatFix__double_array_9 * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            sensor_msgs__NavSatFix__double_array_9Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                sensor_msgs__NavSatFix__double_array_9 *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            #define NavSatFix_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NavSatFix_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NavSatFix_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NavSatFix_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NavSatFix_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NavSatFix_*
            NavSatFix_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NavSatFix_*
            NavSatFix_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NavSatFix_*
            NavSatFix_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_PluginSupport_copy_data(
                NavSatFix_ *out,
                const NavSatFix_ *in);

            NDDSUSERDllExport extern void 
            NavSatFix_PluginSupport_destroy_data_w_params(
                NavSatFix_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NavSatFix_PluginSupport_destroy_data_ex(
                NavSatFix_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NavSatFix_PluginSupport_destroy_data(
                NavSatFix_ *sample);

            NDDSUSERDllExport extern void 
            NavSatFix_PluginSupport_print_data(
                const NavSatFix_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NavSatFix_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NavSatFix_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NavSatFix_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NavSatFix_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NavSatFix_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *out,
                const NavSatFix_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NavSatFix_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NavSatFix_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NavSatFix_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NavSatFix_Plugin_deserialize_from_cdr_buffer(
                NavSatFix_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NavSatFix_Plugin_data_to_string(
                const NavSatFix_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NavSatFix_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NavSatFix_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NavSatFix_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NavSatFix_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NavSatFix_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NavSatFix_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NavSatFix_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NavSatFix_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NavSatFix_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NavSatFix_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NavSatFix_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NavSatFix_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NavSatFix_Plugin_new(void);

            NDDSUSERDllExport extern void
            NavSatFix_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NavSatFix_Plugin_1372680578_h */

