# self-explanatory
cmake_minimum_required(VERSION 3.10)


# Set Projects and versions
# Also sets up variables like <target>_VERSION_MAJOR
project(Aoc VERSION 0.1)


# Generate compile commands
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)


# Make the AOC.tsx executable
add_executable(aoc.tsk main.cpp)

# Copy a config file to another file (why do this? no idea)
configure_file(codeConfig.h.in codeConfig.h)


target_include_directories(aoc.tsk PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# you can use message to debug
message(WARNING " ${PROJECT_BINARY_DIR}")
