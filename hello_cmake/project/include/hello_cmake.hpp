#ifndef HELLO_CMAKE_PROJECT_INCLUDE_HELLO_CMAKE_HPP
#define HELLO_CMAKE_PROJECT_INCLUDE_HELLO_CMAKE_HPP

#include <string>

namespace {
	
	class cmake_example
	{
		public:
		
			cmake_example()
				:info_("first cmake example")
			{
			}
		
			const char* info() const{
				
				return info_.c_str();
			}
			
			private:
			
				std::string info_;
	};
}

#endif //HELLO_CMAKE_PROJECT_INCLUDE_HELLO_CMAKE_HPP