#include <gtest/gtest.h>
#include <Lab3/Sort.hpp>

#include <array>

GTEST_TEST(InsertionSortTest, EmptyArray) {
    std::array<int, 0> array{};
    GTEST_ASSERT_TRUE(array.empty());

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(array.empty());
}

GTEST_TEST(InsertionSortTest, OneItemArray) {
    std::array array = {42};
    GTEST_ASSERT_EQ(array.size(), 1);

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_EQ(array.size(), 1);
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}

GTEST_TEST(InsertionSortTest, SortedArray) {
    std::array array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::insertion_sort(array.begin(), array.end(), std::greater());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));
}

GTEST_TEST(InsertionSortTest, ReverseSortedArray) {
    std::array array = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}

GTEST_TEST(InsertionSortTest, RandomArray) {
    std::array array = {8, 3, 5, 1, 0, 2, 6, 4, 7};
    GTEST_ASSERT_FALSE(std::is_sorted(array.begin(), array.end(), std::less()));

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
}
