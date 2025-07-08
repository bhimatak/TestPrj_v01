cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.

set(CMAKE_CXX_STANDARD 17)

project ("TestPrj_v01")

#include_path
include_directories(inc)

#Add Library
add_library(mylib src/simpleCalc.cpp)


#Main Application
add_executable(MyApp src/main.cpp)
target_link_libraries(MyApp mylib)


#Unit test
enable_testing()
#add_executable(MyTests tests/test_add01.cpp)
#target_link_libraries(MyTests mylib)
#add_test(NAME RunMyTests COMMAND MyTests)
macro(add_calc_test name)
	add_executable(${name} tests/${name}.cpp)
	target_link_libraries(${name} mylib)
	add_test(NAME ${name} COMMAND ${name})
endmacro()

#Add test cases
add_calc_test(test_add01)
add_calc_test(test_add02)
#add_calc_test(test_add3)
