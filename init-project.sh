#!/usr/bin/env bash

set -euo pipefail

if [ "$#" -lt 1 ]; then
    echo "Usage: $0 <project-path>"
    echo "Example: $0 exercicios_02/calculadora"
    exit 1
fi

TARGET_DIR="$1"
PROJECT_NAME="$(basename "$TARGET_DIR")"

if [ -d "$TARGET_DIR" ]; then
    echo "Error: Directory '$TARGET_DIR' already exists."
    exit 1
fi

mkdir -p "$TARGET_DIR/src"

cat <<EOF >"$TARGET_DIR/CMakeLists.txt"
cmake_minimum_required(VERSION 3.20)
project(${PROJECT_NAME} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE src)

# Strict compiler warnings to catch bugs early
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()
EOF

cat <<EOF >"$TARGET_DIR/README.md"
# ${PROJECT_NAME}

EOF

cat <<EOF >"$TARGET_DIR/src/main.cpp"
#include <iostream>

int main() {
    std::cout << "Running ${PROJECT_NAME}...\n";
    return 0;
}
EOF

echo "Created project '$PROJECT_NAME' at '$TARGET_DIR'"
