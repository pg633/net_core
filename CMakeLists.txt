cmake_minimum_required(VERSION 3.11.4)

project(net_core)
# set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_COMPILER "clang++")

set(CXX_FLAGS
    -g
    # -DVALGRIND
    -DCHECK_PTHREAD_RETURN_VALUE
    -D_FILE_OFFSET_BITS=64
    -Wall
    -Wextra
    -Werror
    -Wconversion
    -Wno-unused-parameter
    -Wold-style-cast
    -Woverloaded-virtual
    -Wpointer-arith
    -Wshadow
    -Wwrite-strings
    -march=native
    -std=c++17
    -Wc++11-extensions
    -rdynamic
    )

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/run")

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_INCLUDE_DIR})

# 开启编译测试
if(CMAKE_PROJECT_NAME STREQUAL "net_core")
    option(NET_TEST "Build examples" ON)
endif()

message( "CXX_FLAGS = " ${CXX_FLAGS}  " "  )


add_subdirectory(net/base)
add_subdirectory(net/core)
