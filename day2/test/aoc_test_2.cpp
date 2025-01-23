#include "aoc.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(check_increasingg, handles_valid_input) {
    std::vector<int> row{1,2,4,7};
    // Expect two strings not to be equal.
    EXPECT_TRUE(check_increasing(row));
    EXPECT_TRUE(true);
}

// Demonstrate some basic assertions.
TEST(Test22, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}
