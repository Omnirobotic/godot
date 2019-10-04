#ifndef AOS_SCENE_H
#define AOS_SCENE_H

#include "core/reference.h"
#include "core/variant_parser.h"
#include "serialization/serialization_manager.h"
#include <iostream>
#include <sstream>
#include "scene/spatial.h"
#include "scene/spatial_serializer.h"
#include "scene/main/node.h"

namespace aos
{

class AosScene : public Resource
{
    GDCLASS(AosScene, Resource);

protected:
    static void _bind_methods() 
    {
        ClassDB::bind_method(D_METHOD("convert_to_scene"), &AosScene::convert_to_scene);
        ClassDB::bind_method(D_METHOD("get_base_scene"), &AosScene::get_base_scene);
        ClassDB::bind_method(D_METHOD("add_object", "object_name", "doc_info"), &AosScene::add_object);
    }

private:
     omni::scene::spatial _aos_scene;
     Node* _godot_scene;

public:
    Error set_file(const String &p_path);

    void convert_to_scene();
    Node* get_base_scene();
    Node* add_object(String object_name, Dictionary doc_info);

    AosScene() {};
    ~AosScene() {};
};

}

#endif // AOS_SCENE_H