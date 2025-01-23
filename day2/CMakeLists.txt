# great demo - https://github.com/YouYue123/GoogleTest-With-CMake/tree/master

# self-explanatory
cmake_minimum_required(VERSION 3.30)

# Set Projects and versions
# Also sets up variables like <target>_VERSION_MAJOR
project(Aoc VERSION 0.1)


# Generate compile commands
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
# should probably remove this
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(src)

# add google test
enable_testing()
add_subdirectory(test)

# you can use message to debug
# message(WARNING "binary dir -- ${PROJECT_BINARY_DIR}")
# message(WARNING "source dir -- ${PROJECT_SOURCE_DIR/src}")
# message(NOTICE "💡 target include dirs -- ${CMAKE_CURRENT_SOURCE_DIR}")
