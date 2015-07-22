#pragma once

#include <string>

#include "type_t.hpp"

namespace uppercase {
	
	namespace primitive {
		
		enum class type_t {
			t_void,
			t_integer,
		};
		
		type_t string_to_type(const std::string& type_string);
		std::string type_to_string(type_t type);
		
	}
	
	
	class primitive_t {
		
	public:
		primitive_t() {}
		primitive_t(primitive::type_t type) : type_(type) {}
		primitive_t(const std::string& type_string) : type_(primitive::string_to_type(type_string)) {}
		virtual ~primitive_t() {}
		
		primitive::type_t type() const { return type_; }
		
	private:
		primitive::type_t type_ = primitive::type_t::t_void;
		
		
		
	};
	
};
