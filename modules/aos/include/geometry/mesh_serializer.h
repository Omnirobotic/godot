#pragma once
#include "serialization/i_serializer.h"
#include "SimpleMesh.h"

namespace Omni
{
    namespace Geometry
    {
        namespace Mesh
        {
            class mesh_serializer : public omni::serialization::i_serializer<SimpleMesh>
            {
            public:
                typedef std::shared_ptr<mesh_serializer> ptr;

                mesh_serializer() = default;
                ~mesh_serializer() = default;

                void serialize(std::ostream& stream, const serialized_type &instance) override;
                serialized_type deserialize(std::istream& stream) override;
            };
        }
    }
}

