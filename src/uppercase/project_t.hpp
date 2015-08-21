#pragma once

#include <vector>
#include <string>

#include "type_t.hpp"
//#include "class_t.hpp"
//#include "function_t.hpp"

namespace uppercase {
	
	class project_t {
		
	public:
		project_t();
		
		
		
	private:
		std::string name_;
		
		std::vector<type_t*> types_;
		//std::vector<class_t*> user_classes_;
		
	};
	
}
