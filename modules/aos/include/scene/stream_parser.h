#ifndef _STREAM_PARSER_H
#define _STREAM_PARSER_H

#include <string>
#include <unordered_map>
#include <vector>
#include "variant_container.h"

namespace omni
{
    namespace scene
    {

        enum token_type {
            TK_CURLY_BRACKET_OPEN,
            TK_CURLY_BRACKET_CLOSE,
            TK_BRACKET_OPEN,
            TK_BRACKET_CLOSE,
            TK_PARENTHESIS_OPEN,
            TK_PARENTHESIS_CLOSE,
            TK_IDENTIFIER,
            TK_STRING,
            TK_NUMBER,
            TK_COLOR,
            TK_COLON,
            TK_COMMA,
            TK_PERIOD,
            TK_EQUAL,
            TK_EOF,
            TK_ERROR,
            TK_MAX
        };

        struct tag {
            std::string name = "";
            std::unordered_map<std::string, variant_container> fields;
            bool is_proprety_in_fields(std::string name)
            {
                return (fields.find(name) != fields.end());
            }
            bool is_name_empty()
            {
                return (name == "");
            }

        };

        struct token {
            token_type type;
            variant_container value;
        };

        class stream_parser
        {
        public:
            ~stream_parser();
            std::vector<tag> read_stream(std::istream& stream);
            void get_token(std::istream& stream, token &r_token);
            void _get_tag(std::istream& stream, token& tk, tag& r_tag);
            void parse_value(std::istream& stream, token &token, variant_container &value);

        private:
            static const char *tk_name[TK_MAX];

            template<typename T>
            void _parse_construct(std::istream & stream, std::vector<T>& r_construct);

        };
    }
}

#endif
