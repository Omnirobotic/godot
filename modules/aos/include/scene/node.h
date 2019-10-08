#ifndef _NODE_H
#define _NODE_H

#include "object_class.h"
#include <vector>
#include <memory>

namespace omni
{
    namespace scene
    {
        
        class node : public object
        {
        private:
            std::string _name;
            int pos;

            node* _parent = nullptr;
            std::vector<std::shared_ptr<node>> _children;
            bool _collidable;

            SCENE_CLASS(node, object)

        public:
            node();
            virtual ~node();

            inline std::string get_name() const { return _name; }
            std::string get_path_name();
            const std::string get_path_name() const;

            std::vector<std::string> get_descendants_path_name();

            void get_descendants_path_name_recursive(std::vector<std::string>& descendants_vector, std::string current_name);

            inline void set_name(const std::string& name) { _name = name; }
            
            void add_child(std::shared_ptr<node> child);
            //void add_child_below_node(std::shared_ptr<node> node, std::shared_ptr<node> child);
            std::vector<std::shared_ptr<node>> get_children();
            const std::vector<std::shared_ptr<node>> get_children() const;
            node* get_parent();
            const node* get_parent() const;
            void remove_child(std::shared_ptr<node> child);
            size_t get_children_count() const;
            void set_collidable(bool collidable);
            bool get_collidable();


        private:
            void _validate_child_name(std::shared_ptr<node> child) const;
            void _generate_serial_child_name(const std::shared_ptr<node> child, std::string& name) const;
            inline std::string _get_name_num_separator() const { return "_"; }
            static std::string _increase_numeric_string(const std::string &s);
            void _add_child_nocheck(std::shared_ptr<node> child, const std::string& name);
        };
    }
}

#endif

