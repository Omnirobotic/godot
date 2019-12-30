#pragma once
#ifndef _AOS_CORE_IPC_SUBSCRIBER_H_
#define _AOS_CORE_IPC_SUBSCRIBER_H_

#include <map>
#include <string>
#include <vector>

#include "ipc.h"
#include "async.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            // Forward declaration
            class factory;

            // Class definition
            class AOS_CORE_IPC_API subscriber : private _ipc, public _async
            {
                friend class factory;

            private:
                std::map<std::string, std::vector<std::function<void(const message&)>>> _subscribers;
                int _recv_buffer_size = 0;

            public:
                void subscribe(const std::function<void(const message&)>& on_msg, const std::string& topic = "");

                void run();

            private:
                subscriber(const std::string& hostname, int port, int recv_buffer_size = 0)
                    : _ipc(hostname, port, mode::SUBSCRIBER, protocol::TCP), _recv_buffer_size(recv_buffer_size) {}
            };
        }
    }
}

#endif // _AOS_CORE_IPC_SUBSCRIBER_H_