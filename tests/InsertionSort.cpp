#include <gtest/gtest.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <vector>
#include <random>
#include <string>

GTEST_TEST(InsertionSortTest, EmptyArray) {
    std::array<int, 0> array{};
    GTEST_ASSERT_TRUE(array.empty());

    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(array.empty());
}

GTEST_TEST(InsertionSortTest, OneItemArray) {
    std::array array = {42};
    GTEST_ASSERT_EQ(array.size(), 1);

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_EQ(array.size(), 1);
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, InsertionSortedArray) {
    std::array array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));

    lab3::insertion_sort(array.begin(), array.end(), std::greater());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, InsertionSortedStringArray) {
    using namespace std::string_literals;

    std::array array = {"1"s, "2"s, "3"s, "4"s, "5"s, "6"s, "7"s, "8"s, "9"s};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));

    lab3::insertion_sort(array.begin(), array.end(), std::greater());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, ReverseInsertionSortedArray) {
    std::array array = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, ReverseInsertionSortedStringArray) {
    using namespace std::string_literals;

    std::array array = {"9"s, "8"s, "7"s, "6"s, "5"s, "4"s, "3"s, "2"s, "1"s};
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::greater()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, RandomArray) {
    std::array array = {8, 3, 5, 1, 0, 2, 6, 4, 7};
    GTEST_ASSERT_FALSE(std::is_sorted(array.begin(), array.end(), std::less()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, RandomStringArray) {
    using namespace std::string_literals;

    std::array array = {"8"s, "3"s, "5"s, "1"s, "0"s, "2"s, "6"s, "4"s, "7"s};
    GTEST_ASSERT_FALSE(std::is_sorted(array.begin(), array.end(), std::less()));

    const auto old = array;
    lab3::insertion_sort(array.begin(), array.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(array.begin(), array.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(array.begin(), array.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, LargeArray) {
    constexpr std::size_t kLargeArraySize = 1'000;
    std::mt19937 engine{0}; // NOLINT(cert-msc51-cpp)

    std::vector<int> vector(kLargeArraySize);
    std::generate(vector.begin(), vector.end(), engine);
    GTEST_ASSERT_FALSE(std::is_sorted(vector.begin(), vector.end(), std::less()));

    const auto old = vector;
    lab3::insertion_sort(vector.begin(), vector.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(vector.begin(), vector.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(vector.begin(), vector.end(), old.begin(), old.end()));
}

GTEST_TEST(InsertionSortTest, LargeStringArray) {
    constexpr std::size_t kLargeArraySize = 1'000;
    std::mt19937 engine{0}; // NOLINT(cert-msc51-cpp)

    std::vector<std::string> vector(kLargeArraySize);
    std::generate(vector.begin(), vector.end(), engine);
    GTEST_ASSERT_FALSE(std::is_sorted(vector.begin(), vector.end(), std::less()));

    const auto old = vector;
    lab3::insertion_sort(vector.begin(), vector.end(), std::less());
    GTEST_ASSERT_TRUE(std::is_sorted(vector.begin(), vector.end(), std::less()));
    GTEST_ASSERT_TRUE(std::is_permutation(vector.begin(), vector.end(), old.begin(), old.end()));
}
