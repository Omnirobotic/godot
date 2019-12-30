#pragma once
#ifndef _AOS_CORE_IPC_SERVICE_DISCOVERY_H_
#define _AOS_CORE_IPC_SERVICE_DISCOVERY_H_

#include <string>
#include <vector>

#include "ipc.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class AOS_CORE_IPC_API service_discovery
            {
            public:
                template<typename message_type>
                static std::string get_ipc_topic(const std::string& subject, const std::string& resource_name)
                {
                    static_assert(std::is_base_of<google::protobuf::Message, message_type>::value, "Template must be instantiated with class google::protobuf::Message.");

                    message_type dummy;
                    std::string topic = dummy.GetDescriptor()->full_name();

                    return get_ipc_topic(topic, subject, resource_name);
                }
                
                static std::string get_ipc_topic(const std::string& topic, const std::string& subject, const std::string& resource_name);

                static ipc_address get_address(const std::string& subject_or_service_name, const std::string& resource_name = "");

                static std::vector<ipc_address> get_addresses(const std::string& subject_or_service_name);
            };
        }
    }
}

#endif // _AOS_CORE_IPC_SERVICE_DISCOVERY_H_