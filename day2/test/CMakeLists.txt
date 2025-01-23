set(AOC_TEST_EXECUTABLE AOC_TEST)

enable_testing()

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


# add google test
add_executable(
  ${AOC_TEST_EXECUTABLE}
  aoc_test.cpp
  aoc_test_2.cpp
)

target_link_libraries(
  ${AOC_TEST_EXECUTABLE}
  GTest::gtest_main
  src_lib
)

include(GoogleTest)
gtest_discover_tests(${AOC_TEST_EXECUTABLE})
