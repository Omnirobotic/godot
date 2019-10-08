#include "ResourceFormatLoaderAosScene.h"
#include "AosScene.h"

namespace aos
{

ResourceFormatLoaderAosScene::ResourceFormatLoaderAosScene()
{
}

RES ResourceFormatLoaderAosScene::load(const String &p_path, const String &p_original_path, Error *r_error) 
{
    AosScene *my = memnew(AosScene);
    if (r_error)
        *r_error = OK;
    Error err = my->set_file(p_path);
    return Ref<AosScene>(my);
}

void ResourceFormatLoaderAosScene::get_recognized_extensions(List<String> *p_extensions) const 
{
    p_extensions->push_back("aosscn");
}

String ResourceFormatLoaderAosScene::get_resource_type(const String &p_path) const 
{

    if (p_path.get_extension().to_lower() == "aosscn")
        return "aosscn";
    return "";
}

bool ResourceFormatLoaderAosScene::handles_type(const String &p_type) const 
{
    return (p_type == "aosscn");
}

}