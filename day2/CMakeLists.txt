# self-explanatory
cmake_minimum_required(VERSION 3.30)


# Set Projects and versions
# Also sets up variables like <target>_VERSION_MAJOR
project(Aoc VERSION 0.1)


# Generate compile commands
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)


# Install Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/b514bdc898e2951020cbdca1304b75f5950d1f59.zip
  # DOWNLOAD_EXTRACT_TIMESTAMP true
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



add_subdirectory(src)

# Make the AOC.tsx executable
add_executable(aoc.tsk src)


target_link_libraries(aoc.tsk PUBLIC src)

# include header files
target_include_directories(aoc.tsk PUBLIC
                         "${PROJECT_BINARY_DIR}"
                         "${PROJECT_SOURCE_DIR}/src"
)

# you can use message to debug
message(WARNING "binary dir -- ${PROJECT_BINARY_DIR}")
message(WARNING "source dir -- ${PROJECT_SOURCE_DIR/src}")


# # add google test
# enable_testing()

# add_executable(
#   aoc_test
#   main_test.cpp
# )

# target_link_libraries(
#   aoc_test
#   GTest::gtest_main
# )

# include(GoogleTest)
# gtest_discover_tests(aoc_test)
