#ifndef _NODE_H
#define _NODE_H

#include "object_class.h"
#include "Vector7.h"

#include <vector>
#include <memory>

namespace omni
{
    namespace scene
    {
        // As we are using shared pointer everywhere, this class MUST be instancied using std::make_shared
        class node : public object, public std::enable_shared_from_this<node>
        {
        private:
            std::string _name;
            int pos;

            std::weak_ptr<node> _parent;
            std::vector<std::shared_ptr<node>> _children;
            bool _collidable = false;

            SCENE_CLASS(node, object)

        public:
            node();
            virtual ~node();

            inline std::string get_name() const { return _name; }
            std::string get_path_name();
            const std::string get_path_name() const;
            std::vector<std::string> get_descendants_path_name();

            inline void set_name(const std::string& name) { _name = name; }
            
            void add_child(std::shared_ptr<node> child);
            //void add_child_below_node(std::shared_ptr<node> node, std::shared_ptr<node> child);
            std::vector<std::shared_ptr<node>> get_children();
            const std::vector<std::shared_ptr<node>> get_children() const;
            std::shared_ptr<node> find_child(const std::string& name, bool recursive = true);
            std::shared_ptr<node> get_parent();
            const std::shared_ptr<node> get_parent() const;
            void remove_child(std::shared_ptr<node> child);
            size_t get_children_count() const;
            void set_collidable(bool collidable);
            bool get_collidable();
            
            std::shared_ptr<node> move_to(const CppMath::Vector7& transform, const std::string& name = "");

        private:
            void _validate_child_name(std::shared_ptr<node> child) const;
            void _generate_serial_child_name(const std::shared_ptr<node> child, std::string& name) const;
            inline std::string _get_name_num_separator() const { return "_"; }
            static std::string _increase_numeric_string(const std::string &s);
            void _add_child_nocheck(std::shared_ptr<node> child, const std::string& name);
            void _get_descendants_path_name_recursive(std::vector<std::string>& descendants_vector, std::string current_name);
            std::shared_ptr<node> _find_child(const std::string& name, bool recursive) const;
        };
    }
}

#endif

