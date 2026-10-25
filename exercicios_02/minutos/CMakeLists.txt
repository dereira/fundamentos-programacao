cmake_minimum_required(VERSION 3.20)
project(minutos LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(minutos
    src/main.cpp
)

target_include_directories(minutos PRIVATE src)

# Strict compiler warnings to catch bugs early
if(MSVC)
    target_compile_options(minutos PRIVATE /W4)
else()
    target_compile_options(minutos PRIVATE -Wall -Wextra -Wpedantic)
endif()
