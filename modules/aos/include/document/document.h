#pragma once

#include "serialization/i_serializer.h"
#include "serialization/serialization_manager.h"
#include "document/document_info.h"
#include "database_manager/database_manager.h"
#include <memory>
#include <sstream>


// TODO: here and in document collection
// have a pointer to the database manager inside the factory for resolving
// merge the 2 props
namespace omni
{
    namespace document
    {
        // generic class
        class document_base
        {
        protected:
            document_info _info;
            static omni::database::i_database_manager* _database_manager;
        public:
            static void set_database_manager(omni::database::i_database_manager* database_manager = nullptr)
            {
                _database_manager = database_manager;
            }

            document_base() {}

            document_base(document_info info)
            {
                _info = info;
            }


        };

        // specific usage
        template<typename type, typename format = serialization::default_format<type>::default_format_type>
        class document : public document_base
        {
        public:
            typedef std::shared_ptr<type> type_ptr;
            typedef type value_type;
            typedef format value_format;
        private:

            type_ptr _object_ptr;

        public:

            document(const std::string& store_key = "")
            :document_base(document_info::init<value_type,value_format>(store_key))
            {
                // make sure format is a serialization format
                static_assert(std::is_base_of<omni::serialization::format, format>::value
                    , "the format is not a valid format. It dont inherit from omni::serialization::format");
                // make sure format is for the serialized type
                static_assert(std::is_same<type, format::serializer_object_type>::value,
                    "The format is not associated with this type");

            }

            const document_info& get_document_info() const
            {
                return _info;
            }

            void set_store_key(const std::string& store_key)
            {
                if (store_key != _info.store_key)
                {
                    _object_ptr.reset();
                    _info.store_key = store_key;

                }
            }

            const std::string& get_store_key() const
            {
                return _info.store_key;
            }

            type_ptr resolve_object(bool force_reload = false)
            {
                if(force_reload)
                {
                    reset_object();
                }
                if (!is_object_resolve())
                {

                    std::stringstream data;

                    // call the database manager to get the data
                    if(!_database_manager)
                    {
                        throw std::exception("Can't resolve document before the database manager is set. Call set_database_manager() before.");
                    }
                    auto content = _database_manager->get_document(_info.store_key);
                    for(auto elem :content)
                    {
                        data << elem;
                    }

                    value_type* object= new value_type;

                    try 
                    {
                        *object = omni::serialization::serialization_manager::deserialize<value_type, value_format>(data);
                    }
                    catch (...)
                    {
                        delete object;
                        _object_ptr.reset();
                        return _object_ptr;
                    }

                    _object_ptr.reset(object);

                }
                return _object_ptr;
            }

            void save_object()
            {
                if(get_store_key() == "" || !is_object_resolve() )
                {
                    throw std::exception("To save the document's object, we need a valid store_key and an existing object.");
                }
                // serialize the object
                typedef serialization::serialization_manager manager;
                std::stringstream data;

                manager::serialize<value_type, value_format>(data, *_object_ptr);

                omni::database::byte_array array;

                while (!data.eof())
                {
                    char c;
                    data.get(c);
                    if (!data.eof())
                    {
                        typedef omni::database::byte_array::value_type elem_type;
                        elem_type& elem = *(reinterpret_cast<elem_type*>(&c));
                        array.push_back(elem);
                    }
                }

                // call the database manager to save the data
                _database_manager->add_document(array, _info.store_key);
            }

            bool is_object_resolve() const
            {
                return _object_ptr.get();
            }

            type_ptr get_object()
            {
                resolve_object();
                return _object_ptr;
            }

            void set_object(const type& object)
            {
                static_assert(std::is_copy_constructible<type>::value, "document::set_object must only use copy constructible type");
                _object_ptr.reset(new type(object));
            }

            void set_object(type_ptr object_ptr)
            {
                _object_ptr = object_ptr;
            }

            void reset_object()
            {
                _object_ptr.reset();
            }

            
        };

        template<typename type, typename format = serialization::default_format<type>::default_format_type>
        struct factory
        {
            typedef std::shared_ptr<type> type_ptr;
            typedef type value_type;
            typedef format value_format;
            typedef document<value_type, value_format> document_type;
            typedef std::shared_ptr<document_type> document_type_ptr;

            static document_type_ptr create_document(const std::string& store_key, const value_type& object)
            {
                auto doc = std::make_shared<document_type>(store_key);
                doc->set_object(object);
                doc->save_object();
                return doc;
            }

            static document_type_ptr get_document(const std::string& store_key)
            {
                auto doc = std::make_shared<document_type>(store_key);
                doc->resolve_object();
                return doc;
            }

        };
    }
}

