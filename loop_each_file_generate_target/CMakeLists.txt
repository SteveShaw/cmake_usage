function(gen_name out file)
	if(NOT ARGV2)
		set(_extension ".cpp")
	else()
		set(_extension "${ARGV2}")
	endif()

	file(RELATIVE_PATH _relative "${CMAKE_SOURCE_DIR}" "${file}")
	#remove extension
	string(REPLACE "${_extension}" "" _name "${_relative}")
	#replace path seperator with dot
	string(REGEX REPLACE "/" "." _name "${_name}")
	set(${out} "${_name}" PARENT_SCOPE)
endfunction()

#get all cpp file under current directory and sub-directory
file(GLOB_RECURSE CPP_FILES "*.cpp")

foreach( _file IN LISTS CPP_FILES )
	gen_name(_target "${_file}")
	message("${_target}")
	add_executable(${_target} "${_file}" )
	target_compile_features(${_target} PRIVATE cxx_std_14)
endforeach()
