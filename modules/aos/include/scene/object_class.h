
#ifndef _OBJECT_CLASS_H
#define _OBJECT_CLASS_H

/**
 * \brief All node classes must add this macro to their definition
 * \param class the actual name of the scene node class
 * \param inherits class from which we inherit
 */
#define SCENE_CLASS(class, inherits)                    \
private:                                                \
    mutable std::string _class_name;                    \
                                                        \
public:                                                 \
	virtual std::string get_class() const               \
    {                                                   \
		return std::string(#class);                     \
	}                                                   \


namespace omni
{
    namespace scene
    {
        class object
        {
        };
    }
}

#endif // OBJECT_CLASS_H
