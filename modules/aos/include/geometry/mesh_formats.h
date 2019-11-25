#pragma once
#include "serialization/i_serializer.h"
#include "mesh_serializer.h"
#include <memory>
namespace Omni
{
    namespace Geometry
    {
        namespace Mesh
        {
            class SimpleMesh;
            class ply_serializer;
            class stl_serializer;
            //class mesh_serializer;

            struct ply : public omni::serialization::format
            {
                typedef ply_serializer serializer_type;
                typedef std::shared_ptr<serializer_type> serializer_type_ptr;
                typedef SimpleMesh serializer_object_type;

                static serializer_type_ptr get_serializer();
            };

            struct stl : public omni::serialization::format
            {
                typedef stl_serializer serializer_type;
                typedef SimpleMesh serializer_object_type;
                typedef std::shared_ptr<serializer_type> serializer_type_ptr;

                static serializer_type_ptr get_serializer();
            };

            struct generic_mesh : public omni::serialization::format
            {
                typedef mesh_serializer serializer_type;
                typedef SimpleMesh serializer_object_type;
                typedef std::shared_ptr<serializer_type> serializer_type_ptr;

                static serializer_type_ptr get_serializer();
            };
        }
    }
}

namespace omni
{
    namespace serialization
    {
        template <>
        struct default_format<Omni::Geometry::Mesh::SimpleMesh>
        {
            typedef Omni::Geometry::Mesh::ply default_format_type;
        };
    }
}