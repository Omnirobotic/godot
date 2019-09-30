#ifndef RESOURCE_FORMAT_LOADER_AOS_SCENE
#define RESOURCE_FORMAT_LOADER_AOS_SCENE

#include "../../core/io/resource_loader.h"
#include "../../core/io/resource_saver.h"

namespace aos
{

class ResourceFormatLoaderAosScene : public ResourceFormatLoader 
{
public:
	virtual RES load(const String &p_path, const String &p_original_path = "", Error *r_error = NULL);
	virtual void get_recognized_extensions(List<String> *p_extensions) const;
	virtual bool handles_type(const String &p_type) const;
	virtual String get_resource_type(const String &p_path) const;
};

class ResourceFormatSaverShader : public ResourceFormatSaver 
{
public:
	virtual Error save(const String &p_path, const RES &p_resource, uint32_t p_flags = 0);
	virtual void get_recognized_extensions(const RES &p_resource, List<String> *p_extensions) const;
	virtual bool recognize(const RES &p_resource) const;
};

}

#endif // RESOURCE_FORMAT_LOADER_AOS_SCENE