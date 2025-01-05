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
  aoc_test.tsk
  main_test.cpp
)

target_link_libraries(
  aoc_test.tsk
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(aoc_test.tsk)
