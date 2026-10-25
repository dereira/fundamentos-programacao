cmake_minimum_required(VERSION 3.20)
project(padaria LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(padaria
    src/main.cpp
)

target_include_directories(padaria PRIVATE src)

# Strict compiler warnings to catch bugs early
if(MSVC)
    target_compile_options(padaria PRIVATE /W4)
else()
    target_compile_options(padaria PRIVATE -Wall -Wextra -Wpedantic)
endif()
