#pragma once
#ifndef _AOS_CORE_IPC_RPC_SERVER_H_
#define _AOS_CORE_IPC_RPC_SERVER_H_

#include <map>
#include <string>

#include "ipc.h"
#include "async.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            #define RPC_RESPONSE_BEGIN(function_name) \
                register_response(#function_name, [](const aos::core::ipc::message& req, aos::core::ipc::message& rep)
            #define RPC_RESPONSE_END );

            // Forward declaration
            class factory;

            // Class definition
            class AOS_CORE_IPC_API rpc_server : private _ipc, public _async
            {
                friend class factory;

            public:
                //
                // rpc_response_service
                //
                class AOS_CORE_IPC_API rpc_response_service
                {
                    friend class rpc_server;

                public:
                    typedef std::function<void(const message&, message&)> rpc_response;

                protected:
                    std::string _service_name;
                
                private:
                    std::map<std::string, rpc_response> _responses;

                protected:
                    rpc_response_service(const std::string& service_name) : _service_name(service_name) {}

                public:
                    void register_response(const std::string& service_name, const rpc_response& on_msg);
                };

                //
                // rpc_server
                //
            private:
                std::map<std::string, const rpc_response_service&> _services;
                int _recv_buffer_size = 0;

            public:
                ~rpc_server();

                void register_service(const rpc_response_service& service);

                void run();

            private:
                rpc_server(const std::string& hostname, int port, int recv_buffer_size = 0)
                    : _ipc(hostname, port, mode::RPC_SERVER, protocol::TCP), _recv_buffer_size(recv_buffer_size) {}
            };
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_SERVER_H_