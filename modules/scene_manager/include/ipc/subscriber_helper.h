#pragma once
#ifndef _AOS_CORE_IPC_SUBSCRIBER_HELPER_H_
#define _AOS_CORE_IPC_SUBSCRIBER_HELPER_H_

#include "message.h"
#include "message_protobuf.h"
#include "factory.h"
#include "service_discovery.h"

#include <string>
#include <functional>   // std::bind

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            namespace helper
            {
                template <typename message_type = message>
                class subscriber
                {
                    typedef aos::core::ipc::subscriber ipc_subscriber;

                public:
                    typedef message_type value_type;

                    subscriber(const std::string& subject, const std::string& resource_name = "", const std::function<void(const message_type&)>& on_msg = &on_message)
                    {
                        static_assert(std::is_base_of<google::protobuf::Message, message_type>::value, "This constructor can only be used with template type google::protobuf::Message.");

                        _callback_wrapper = [on_msg](const message& msg)
                        {
                            message_protobuf pb_msg;
                            pb_msg.zero_copy_from(msg);

                            message_type message_type_instance;
                            pb_msg.get_data<message_type>(message_type_instance);

                            on_msg(message_type_instance);
                        };

                        auto address = service_discovery::get_address(subject, resource_name);
                        _subscriber = factory::get_subscriber(address.hostname, address.port);
                        
                        _subscriber->subscribe(_callback_wrapper, service_discovery::get_ipc_topic<message_type>(subject, resource_name));

                        _subscriber->start();
                    }

                    subscriber(const std::string& topic, const std::string& subject, const std::string& resource_name = "", const std::function<void(const message&)>& on_msg = &on_message)
                    {
                        static_assert(std::is_base_of<message, message_type>::value, "This constructor can only be used with template type aos::core::ipc::message.");

                        auto address = service_discovery::get_address(subject, resource_name);
                        _subscriber = factory::get_subscriber(address.hostname, address.port);
                        
                        _subscriber->subscribe(on_msg, service_discovery::get_ipc_topic(topic, subject, resource_name));

                        _subscriber->start();
                    }

                    ~subscriber()
                    {
                        _subscriber->stop();
                    }

                    virtual void on_message(const message_type& message_type_instance)
                    {
                        throw std::logic_error((std::string("on_message function not overloaded for class ") + typeid(*this).name()).c_str());
                    }

                private:
                    std::shared_ptr<ipc_subscriber> _subscriber;
                    std::function<void(const message&)> _callback_wrapper;
                };
            }
        }
    }
}

#endif // _AOS_CORE_IPC_SUBSCRIBER_HELPER_H_