#ifndef LAB3_SORT_HPP
#define LAB3_SORT_HPP

#include <concepts>
#include <compare>

namespace lab3 {

namespace detail {

template<typename T>
concept reference = std::is_reference_v<T>;

}

template<typename Iter>
concept Iterator = requires(Iter first, Iter last) {
    { *first } -> detail::reference;
    { first + 1 } -> std::same_as<Iter>;
    { first - 1 } -> std::same_as<Iter>;
    { ++first } -> std::same_as<std::add_lvalue_reference_t<Iter>>;
    { --first } -> std::same_as<std::add_lvalue_reference_t<Iter>>;
    { last - first } -> std::integral;
    { first <=> last } -> std::convertible_to<std::partial_ordering>;
};

template<typename Compare, typename T>
concept Comparator = requires(Compare comp, const T &a, const T &b) {
    { comp(a, b) } -> std::same_as<bool>;
};

template<typename Iter, typename Compare>
concept SortableWithComparator = Iterator<Iter> && requires(Iter iter) {
    requires Comparator<Compare, std::remove_cvref_t<decltype(*iter)>>;
};

template<typename Iter, typename Compare>
void sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare>;

template<typename Iter, typename Compare>
void quick_sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare>;

template<typename Iter, typename Compare>
void insertion_sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare>;

}

#include "Sort.inl"

#endif //LAB3_SORT_HPP
