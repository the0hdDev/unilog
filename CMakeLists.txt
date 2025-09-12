cmake_minimum_required(VERSION 3.16)
project(unilog)

set(CMAKE_CXX_STANDARD 20)

add_library(unilog SHARED)


add_subdirectory(core)

include_directories(${CMAKE_SOURCE_DIR})