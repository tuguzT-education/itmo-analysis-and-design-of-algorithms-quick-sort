#ifndef LAB3_SORT_HPP
#define LAB3_SORT_HPP

#include <concepts>

namespace lab3 {

namespace detail {

template<typename T>
concept Iterator = requires(T iter) {
    *iter;
};

template<typename Compare, typename T>
concept Comparator = requires(Compare comp, const T &a, const T &b) {
    { comp(a, b) } -> std::same_as<bool>;
};

template<typename T>
using remove_cv_reference_t = std::remove_cv_t<std::remove_reference_t<T>>;

template<typename T, typename Compare>
concept Sort = Iterator<T> && requires(T iter) {
    requires Comparator<Compare, remove_cv_reference_t<decltype(*iter)>>;
};

}

template<typename T, typename Compare>
requires detail::Sort<T, Compare>
void sort(T first, T last, Compare comp);

}

#include "Sort.inl"

#endif //LAB3_SORT_HPP
