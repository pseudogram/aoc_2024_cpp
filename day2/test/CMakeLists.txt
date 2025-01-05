add_library(test main_test.cpp)

# add google test
enable_testing()

add_executable(
  aoc_test
  main_test.cpp
)

target_link_libraries(
  aoc_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(aoc_test)
