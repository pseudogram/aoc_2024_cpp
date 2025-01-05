# self-explanatory
cmake_minimum_required(VERSION 3.30)


# Set Projects and versions
# Also sets up variables like <target>_VERSION_MAJOR
project(Aoc VERSION 0.1)


# Generate compile commands
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)



add_subdirectory(src)

# Make the AOC.tsx executable
add_executable(aoc.tsk src)

target_link_libraries(aoc.tsk PUBLIC src)
# include header files
target_include_directories(aoc.tsk PUBLIC
                         "${PROJECT_BINARY_DIR}"
                         "${PROJECT_SOURCE_DIR}/src"
)


# add google test
enable_testing()
add_subdirectory(test)


# you can use message to debug googletest
# message(WARNING "binary dir -- ${PROJECT_BINARY_DIR}")
# message(WARNING "source dir -- ${PROJECT_SOURCE_DIR/src}")

