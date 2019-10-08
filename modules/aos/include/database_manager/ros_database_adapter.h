#pragma once
#include "database_manager/database_manager.h"
#include <map>

namespace omni
{
    namespace database
    {
        class EXPORT_DLL_DATABASE_MANAGER ros_database_adapter : public i_database_manager
        {
            std::map<std::string, std::string> _prefix_service_map;

            size_t _id = 0;

            std::string getId();

            ros_database_adapter();

        public:

            static ros_database_adapter& get_instance();

            virtual ~ros_database_adapter();

            // services for database registration
            void register_database(const std::string& path_prefix
                , const std::string& service_name);

            byte_array get_document(const std::string& store_key) override;

            void add_document(const byte_array& array, const std::string& store_key) override;
        };
    }
}
