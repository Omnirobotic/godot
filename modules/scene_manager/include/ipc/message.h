#pragma once

#ifndef _AOS_CORE_IPC_MESSAGE_H_
#define _AOS_CORE_IPC_MESSAGE_H_

#include <string>

#include "exports.h"

#define SHARED_PTR true

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            constexpr int DEFAULT_BUFFER_SIZE = 1024;

            class AOS_CORE_IPC_API message
            {
            protected:
                int _buffer_size = 0;
                std::string _topic;
                int _size = 0;
#if SHARED_PTR
                std::shared_ptr<char[]> _data = nullptr;
#else
                char* _data = nullptr;
#endif

            public:
                message(int size = 0);
                message(const message& other);
                message(message&& other);
                message(char* data, int size, const std::string& topic = "");
                message(std::shared_ptr<char[]>& data, int size, const std::string& topic = "");
#if !SHARED_PTR
                ~message();
#endif

                message& operator=(const message& other);
                message& operator=(message&& other);

                void copy_from(const message& other);
                void zero_copy_from(const message& other);
                void zero_copy_move_from(message& other);

                void allocate_buffer(int size);
                void resize_buffer(int size);
                int get_buffer_size() const;
#if !SHARED_PTR
                void destroy_buffer();
#endif

                void set_topic(const std::string& topic);
                const std::string& get_topic() const;

                void set_data(const char* data, int size);
                void set_data(std::shared_ptr<char[]>& data, int size);

                int get_size() const;

#if SHARED_PTR
                const std::shared_ptr<char[]>& get_data() const;
#else
                char* get_data() const;
#endif

            private:
                friend class _ipc;
                void set_size(int);
            };
        }
    }
}

#endif // _AOS_CORE_IPC_MESSAGE_H_