#Per comments from "Effective CMake"
#We can think add_executable as a constructor
#to create a cmake object hello_cmake
add_executable(hello_cmake src/hello_cmake.cpp)
#we can change hello_cmake object's properties through
#target_*** commands
#we can also set PRIVATE/PUBLIC/INTERFACE access for this object.
#There are a few pre-defined variables that can be 
#directly used. I list some often used ones
#CMAKE_SOURCE_DIR --> The root directory which contain CMakeLists.txt
#In this example, ${CMAKE_SOURCE_DIR} will expand to
#<dir>/hello_cmake
#CMAKE_CURRENT_LIST_DIR --> Current directory which contains
#this CMakeLists.txt file
target_include_directories(hello_cmake PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)
#we could use message command to print out the variable value
message(${CMAKE_CURRENT_LIST_DIR})
#we may need to call target_link_libraries, but this first project does not need this command.
#we could also specify use c++ standard
target_compile_features(hello_cmake PRIVATE cxx_std_14)