#ifndef AOS_SCENE_H
#define AOS_SCENE_H

#include "core/reference.h"
#include "core/variant_parser.h"

namespace aos
{

class AosScene : public Reference
{
    GDCLASS(AosScene, Reference);

protected:
    static void _bind_methods() 
    {
        ClassDB::bind_method(D_METHOD("convert_to_string"), &AosScene::convert_to_scene);
    }

private:
    // omni::scene::spatial* _aos_scene;

public:
    Error set_file(const String &p_path) 
    {
        Error error_file;
        FileAccess *file = FileAccess::open(p_path, FileAccess::READ, &error_file);
        String buf = String("");
        while (!file->eof_reached())
        {
            buf += file->get_line();
        }

        String err_string;
        int err_line;

        // Read data

        //JSON cmd;
        //Variant ret;
        //Error err = cmd.parse(buf, ret, err_string, err_line);
        //dict = Dictionary(ret);

        file->close();
        return OK;
    }

    void convert_to_scene()
    {

    }

    AosScene() {};
    ~AosScene() {};
};

}

#endif // AOS_SCENE_H