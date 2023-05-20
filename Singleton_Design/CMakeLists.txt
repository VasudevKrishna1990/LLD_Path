# Minimal required version .
cmake_minimum_required (VERSION 3.16)
project(Singleton)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#add_library(say_Hello
#hello.hpp
#hello.cpp)

add_library(Logger 
Logger.hpp
Logger.cpp
func1.hpp
func1.cpp
func2.hpp
func2.cpp
)

add_executable (Singleton main.cpp)
#target_link_libraries(Singleton PRIVATE say_Hello)
target_link_libraries(Singleton PRIVATE Logger)