#include <gtest/gtest.h>
#include <Lab3/Sort.hpp>

#include <array>

GTEST_TEST(QuickSortTest, Empty) {
    std::array<int, 0> array{};
    GTEST_ASSERT_TRUE(array.empty());

    lab3::quick_sort(array.begin(), array.end(), std::less<>());
    GTEST_ASSERT_TRUE(array.empty());
}
