cmake_minimum_required(VERSION 3.20)
project(saldos-v2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(saldos-v2
    src/main.cpp
)

target_include_directories(saldos-v2 PRIVATE src)

# Strict compiler warnings to catch bugs early
if(MSVC)
    target_compile_options(saldos-v2 PRIVATE /W4)
else()
    target_compile_options(saldos-v2 PRIVATE -Wall -Wextra -Wpedantic)
endif()
