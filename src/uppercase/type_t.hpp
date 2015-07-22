#pragma once

#include <cstddef>

namespace uppercase {
	
	class type_t {
		
	public:
		using id_t = std::size_t;
		
		type_t() {}
		type_t(id_t id) : id_(id) {}
		virtual ~type_t() = 0;
		
		id_t id() const { return id_; }
		
	private:
		id_t id_ = 0;
		
	};
	
}

inline uppercase::type_t::~type_t() {}
