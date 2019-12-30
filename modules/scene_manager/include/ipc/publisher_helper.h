#pragma once
#ifndef _AOS_CORE_IPC_PUBLISHER_HELPER_H_
#define _AOS_CORE_IPC_PUBLISHER_HELPER_H_

#include "message.h"
#include "message_protobuf.h"
#include "factory.h"
#include "service_discovery.h"

#include <string>

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            namespace helper
            {
                template <typename message_type = message>
                class publisher
                {
                    typedef aos::core::ipc::publisher ipc_publisher;

                public:
                    typedef message_type value_type;

                    publisher(const std::string& subject, const std::string& resource_name = "", ipc_publisher::option option = ipc_publisher::option::DEFAULT)
                        : _subject(subject), _resource_name(resource_name)
                    {
                        if constexpr (std::is_base_of<google::protobuf::Message, message_type>::value)
                        {
                            _default_ipc_topic = service_discovery::get_ipc_topic<message_type>(_subject, _resource_name);
                        }
                        else
                        {
                            static_assert(std::is_base_of<message, message_type>::value, "Template can only be used with aos::core::ipc::message or google::protobuf::Message.");
                        }

                        auto address = service_discovery::get_address(subject, resource_name);
                        _publisher = factory::get_publisher(address.hostname, address.port, option);
                    }

                    void publish(const message_type& msg)
                    {
                        if constexpr (std::is_base_of<google::protobuf::Message, message_type>::value)
                        {
                            _publisher->publish(message_protobuf(msg, _default_ipc_topic));
                        }
                        else
                        {
                            // Prefix topic with node and resource names
                            message msg_to_send;
                            msg_to_send.zero_copy_from(msg);
                            msg_to_send.set_topic(service_discovery::get_ipc_topic(msg.get_topic(), _subject, _resource_name));

                            _publisher->publish(msg_to_send);
                        }
                    }

                private:
                    std::string _default_ipc_topic;
                    std::string _subject;
                    std::string _resource_name;
                    std::shared_ptr<ipc_publisher> _publisher;
                };
            }
        }
    }
}

#endif // _AOS_CORE_IPC_PUBLISHER_HELPER_H_