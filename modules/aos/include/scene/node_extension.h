#ifndef _NODE_EXTENSION_H
#define _NODE_EXTENSION_H

#include "Vector7.h"

namespace omni
{
    namespace scene
    {
        class node;

        std::shared_ptr<node> move_from_to(std::shared_ptr<node> source, const CppMath::Vector7& transform, const std::string& name = "");

        CppMath::Vector7 compute_transform(std::shared_ptr<node> root, const std::string& source_name, const std::string& target_name);
        CppMath::Vector7 compute_transform(std::shared_ptr<node> source, std::shared_ptr<node> target);
        CppMath::Vector7 compute_transform_from_world(std::shared_ptr<node> source);
    }
}

#endif // _NODE_EXTENSION_H