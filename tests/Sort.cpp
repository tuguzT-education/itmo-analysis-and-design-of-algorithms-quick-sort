#include <gtest/gtest.h>
#include <Lab3/Sort.hpp>

#include <array>

GTEST_TEST(SortTest, Empty) {
    std::array<int, 0> array{};
    GTEST_ASSERT_TRUE(array.empty());

    lab3::sort(array.begin(), array.end(), std::less<>());
    GTEST_ASSERT_TRUE(array.empty());
}
