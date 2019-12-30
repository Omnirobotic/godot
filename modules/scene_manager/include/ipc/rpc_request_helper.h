#pragma once
#ifndef _AOS_CORE_IPC_RPC_REQUEST_HELPER_H_
#define _AOS_CORE_IPC_RPC_REQUEST_HELPER_H_

#include <string>

#include "factory.h"
#include "service_discovery.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            namespace helper
            {
                template<typename rpc_request_service_type = rpc_client::rpc_request_service>
                class rpc_request_service : public rpc_request_service_type
                {
                public:
                    rpc_request_service(const std::string& service_name, const std::string& resource_name = "") : rpc_request_service_type(service_name)
                    {
                        static_assert(std::is_base_of<rpc_client::rpc_request_service, rpc_request_service_type>::value,
                            "This constructor can only be used with template type derived from aos::core::ipc::rpc_client::rpc_request_service.");

                        auto address = service_discovery::get_address(service_name, resource_name);
                        auto rpc_client = factory::get_rpc_client(address.hostname, address.port);

                        set_rpc_client(rpc_client);
                    }
                };
            }
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_REQUEST_HELPER_H_