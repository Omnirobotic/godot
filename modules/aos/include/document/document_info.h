#pragma once
#include <string>

namespace omni
{
    namespace document
    {
        // document info
        struct document_info
        {
            std::string store_key;
            std::string type_name;
            std::string format_name;

            template<typename type, typename format>
            static document_info init(const std::string& store_key = "")
            {
                document_info info;
                info.store_key = store_key;
                info.type_name = typeid(type).name();
                info.format_name = typeid(format).name();

                return info;
            }
        };
    }
}