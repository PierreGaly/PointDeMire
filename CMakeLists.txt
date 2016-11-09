cmake_minimum_required(VERSION 3.6)
project(projet_c__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(projet_c__ ${SOURCE_FILES})