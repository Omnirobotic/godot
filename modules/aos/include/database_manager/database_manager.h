#pragma once
#include <vector>
#include <future>
#include <memory>
#include <string>
#include "database_manager/export_dll_database_manager.h"

namespace omni
{
    namespace database
    {
        typedef std::vector<uint8_t> byte_array;

        class EXPORT_DLL_DATABASE_MANAGER i_database_manager
        {
        public:
            i_database_manager(const i_database_manager&) = delete;
            i_database_manager& operator=(const i_database_manager&) = delete;
            i_database_manager(const i_database_manager&&) = delete;
            i_database_manager& operator=(const i_database_manager&&) = delete;

            i_database_manager() {}
            virtual ~i_database_manager(){}

            virtual byte_array get_document(const std::string& store_key) = 0;

            virtual void add_document(const byte_array& array, const std::string& store_key) = 0;
        };



    }
}
