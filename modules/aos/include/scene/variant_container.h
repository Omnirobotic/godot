#ifndef _VARIANT_CONTAINER_H
#define _VARIANT_CONTAINER_H

#include <variant>
#include <vector>

namespace omni
{
    namespace scene
    {
        enum variant_type {
            VAR_INT,
            VAR_DOUBLE,
            VAR_VEC_INT,
            VAR_VEC_DOUBLE,
            VAR_STRING,
            VAR_BOOL
        };

        class variant_container
        {
        private:
            std::variant<int, double, std::vector<int>, std::vector<double>, std::string, bool> _container;
            int _type;
        public:
            int get_type();

            variant_container() {};
            variant_container(int value);
            variant_container(double value);
            variant_container(std::vector<int> value);
            variant_container(std::vector<double> value);
            variant_container(std::string value);
            variant_container(bool value);

            template<typename T>
            void set_value(T value);

            operator int() const;
            operator double() const;
            operator std::vector<int>() const;
            operator std::vector<double>() const;
            operator std::string() const;
            operator bool() const;

        private:

        };

        template<typename T>
        inline void variant_container::set_value(T value)
        {
            _container = value;
        }
    }
}
#endif