cmake_minimum_required(VERSION 3.16)
project(unilog)

set(CMAKE_CXX_STANDARD 20)

add_library(unilog SHARED
        core/log_to_file/log_to_file.cpp
        core/log_to_file/log_to_file.h
        core/unilog_main.cpp
        core/unilog_main.h
        core/log_to_console/log_to_console.cpp
        core/log_to_console/log_to_console.h
        core/essentials.h
)

include_directories(${CMAKE_SOURCE_DIR})