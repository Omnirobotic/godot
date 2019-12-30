#pragma once
#ifndef _AOS_CORE_IPC_FACTORY_H_
#define _AOS_CORE_IPC_FACTORY_H_

#include <string>

#include "publisher.h"
#include "subscriber.h"
#include "rpc_client.h"
#include "rpc_server.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class AOS_CORE_IPC_API factory
            {
            public:
                static std::shared_ptr<publisher> get_publisher(const std::string& hostname, int port, publisher::option option = publisher::option::DEFAULT);
                static std::shared_ptr<subscriber> get_subscriber(const std::string& hostname, int port, int recv_buffer_size = 0);
                static std::shared_ptr<rpc_client> get_rpc_client(const std::string& hostname, int port);
                static std::shared_ptr<rpc_server> get_rpc_server(const std::string& hostname, int port, int recv_buffer_size = 0);
            };
        }
    }
}

#endif // _AOS_CORE_IPC_FACTORY_H_