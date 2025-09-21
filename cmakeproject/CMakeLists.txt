cmake_minimum_required(VERSION 3.10)
project(cmakelib)

add_library(cmakelib STATIC lib.cpp)
target_include_directories(cmakelib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS cmakelib
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin)