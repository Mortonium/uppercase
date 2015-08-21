#pragma once

#include <cstddef>

namespace uppercase {
	
	class collection_t {
		
	public:
		using id_t = std::size_t;
		
		collection_t() {}
		collection_t(id_t id) : id_(id) {}
		
	private:
		id_t id_ = 0;
		
	};
	
};
