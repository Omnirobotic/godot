#pragma once
#include "serialization/i_serializer.h"
#include "SimpleMesh.h"

namespace Omni
{
    namespace Geometry
    {
        namespace Mesh
        {
            class stl_serializer : public omni::serialization::i_serializer<SimpleMesh>
            {
            public:
                typedef std::shared_ptr<stl_serializer> ptr;

                stl_serializer() = default;
                ~stl_serializer() = default;

                void serialize(std::ostream& stream, const serialized_type& instance) override;
                serialized_type deserialize(std::istream& stream) override;
            };




        }
    }
}

