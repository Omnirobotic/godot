#pragma once

#include "document/document.h"
#include "document/document_collection_content_list.h"
#include <map>
#include "../../hypodermic/Hypodermic/LogLevel.h"

namespace omni
{
    namespace document
    {
        namespace collection {
            // generic class
            class document_collection_base
            {
            };

            // specific usage

            template<
                typename type
                , typename format = omni::serialization::default_format<type>::default_format_type
            >
            class document_collection 
            : public document_collection_base
            , public document<content::document_collection_content_list>
            {
            public:
                typedef type value_element_type;
                typedef format value_element_format;

                typedef document<content::document_collection_content_list> document_content_list_type;

                typedef document<value_element_type, value_element_format> document_element_type;
                typedef std::shared_ptr<document_element_type> document_element_type_ptr;

                typedef std::map<std::string, document_element_type_ptr > document_map;
            private:

                document_map _document_map;

            public:

                document_collection(const std::string& store_key = "")
                    :document_content_list_type(store_key)
                {

                }

            private:
                template<class leaf_class>
                void resolve_sub_documents_impl(bool recursive = true)
                {
                    resolve_object();

                    for(const auto& sub_doc_name : get_object()->contents_store_keys)
                    {
                        auto it = _document_map.find(sub_doc_name);
                        if(it == _document_map.end())
                        {
                            auto new_doc = std::make_shared<document_element_type>(sub_doc_name);
                            new_doc->resolve_object();
                            _document_map[sub_doc_name] = new_doc;
                        }
                    }
                }

                template <>
                void resolve_sub_documents_impl<document_collection_base>(bool recursive)
                {

                    resolve_object();

                    for (const auto& sub_doc_name : get_object()->contents_store_keys)
                    {
                        auto it = _document_map.find(sub_doc_name);
                        if (it == _document_map.end())
                        {
                            auto new_doc = std::make_shared<document_element_type>(sub_doc_name);
                            new_doc->resolve_object();
                            _document_map[sub_doc_name] = new_doc;

                            if(recursive)
                            {
                                new_doc->get_object()->resolve_sub_document(recursive);
                            }
                            _document_map[sub_doc_name] = new_doc;
                        }
                    }
                }

            public:

                void resolve_sub_documents(bool recursive = true)
                {
                    resolve_sub_documents_impl<value_element_type>(recursive);
                }

                std::vector<document_element_type_ptr> get_sub_documents(bool recursive = true)
                {
                    std::vector<document_element_type_ptr> out;

                    for (const auto& sub_doc_name : get_object()->contents_store_keys)
                    {
                        auto doc = std::make_shared<document_element_type>(sub_doc_name);
                        auto search = _document_map.find(sub_doc_name);
                        if(search != _document_map.end())
                        {
                            doc = search->second;
                        }
                        out.push_back(doc);
                    }

                    return out;
                }

            };

            template<
                typename type
                , typename format = omni::serialization::default_format<type>::default_format_type
            >
            struct factory
            {
                typedef std::shared_ptr<type> type_ptr;
                typedef type value_type;
                typedef format value_format;
                typedef document<value_type, value_format> document_type;
                typedef std::shared_ptr<document_type> document_type_ptr;
                typedef document_collection<value_type,value_format> collection_document;
                typedef std::shared_ptr<collection_document> collection_document_ptr;

                static collection_document_ptr create_documents(
                    const std::string& collection_store_key
                    , const std::vector<std::string>& store_keys
                    , const std::vector<value_type>& contents)
                {
                    if(store_keys.size() != contents.size())
                    {
                        std::string message = std::string("Try to create a collection of ")
                            + std::to_string(store_keys.size())
                            + " store keys with "
                            + std::to_string(contents.size())
                            + " contents";

                        throw std::exception(message.c_str());
                    }

                    collection_document_ptr collection_doc;
                    collection_doc.reset(new collection_document(collection_store_key));

                    content::document_collection_content_list list;
                    list.contents_store_keys = store_keys;

                    collection_doc->set_object(list);

                    // create the collection document
                    omni::document::factory<content::document_collection_content_list>::create_document(
                        collection_store_key
                        , list);

                    // create the content
                    for(size_t i =0;i< store_keys.size();++i)
                    {
                        omni::document::factory<value_type, value_format>::create_document(store_keys[i], contents[i]);
                    }

                    return collection_doc;
                }

                static collection_document_ptr get_documents(const std::string& store_key)
                {
                    
                    auto doc = std::make_shared<collection_document>(store_key);
                    doc->resolve_object();
                    doc->resolve_sub_documents();
                    return doc;
                }


            };
        }
    }
}
