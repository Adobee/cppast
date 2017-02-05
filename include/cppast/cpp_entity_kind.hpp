// Copyright (C) 2017 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#ifndef CPPAST_CPP_ENTITY_KIND_HPP_INCLUDED
#define CPPAST_CPP_ENTITY_KIND_HPP_INCLUDED

#include <cppast/detail/assert.hpp>

namespace cppast
{
    /// All possible kinds of C++ entities.
    enum class cpp_entity_kind
    {
        file_t,

        language_linkage_t,

        namespace_t,
        namespace_alias_t,
        using_directive_t,
        using_declaration_t,

        type_alias_t,

        enum_t,
        enum_value_t,

        class_t,
        access_specifier_t,
        base_class_t,

        variable_t,
        member_variable_t,
        bitfield_t,

        function_parameter_t,
        function_t,
        member_function_t,
        conversion_op_t,
        constructor_t,
        destructor_t,

        template_type_parameter_t,
        non_type_template_parameter_t,
        template_template_parameter_t,

        alias_template_t,
        function_template_t,
        function_template_specialization_t,

        count,
    };

    /// \returns A human readable string describing the entity kind.
    const char* to_string(cpp_entity_kind kind) noexcept;

    /// \returns Whether or not a given entity kind is a C++ type.
    bool is_type(cpp_entity_kind kind) noexcept;

    /// \returns Whether or not a given entity kind is a C++ template.
    bool is_template(cpp_entity_kind kind) noexcept;
} // namespace cppast

#endif // CPPAST_CPP_ENTITY_KIND_HPP_INCLUDED