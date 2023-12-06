#include <gtest/gtest.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <vector>
#include <random>

GTEST_TEST(SortTest, EmptyArray) {
    std::array<int, 0> array{};
    GTEST_ASSERT_TRUE(array.empty());

    lab3::sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(array.empty());
}

GTEST_TEST(SortTest, OneItemArray) {
    std::array array = {42};
    GTEST_ASSERT_EQ(array.size(), 1);

    lab3::sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_EQ(array.size(), 1);
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}

GTEST_TEST(SortTest, SortedArray) {
    std::array array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::sort(array.begin(), array.end(), std::greater());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));
}

GTEST_TEST(SortTest, ReverseSortedArray) {
    std::array array = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));

    lab3::sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}

GTEST_TEST(SortTest, RandomArray) {
    std::array array = {8, 3, 5, 1, 0, 2, 6, 4, 7};
    GTEST_ASSERT_FALSE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}

GTEST_TEST(SortTest, LargeArray) {
    constexpr std::size_t kLargeArraySize = 10'000;
    std::mt19937 engine{0}; // NOLINT(cert-msc51-cpp)

    std::vector<int> vector(kLargeArraySize);
    std::generate(vector.begin(), vector.end(), engine);
    GTEST_ASSERT_FALSE(std::is_sorted(vector.begin(), vector.end(), std::less()));

    lab3::sort(vector.begin(), vector.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(vector.begin(), vector.end(), std::less()));
}
