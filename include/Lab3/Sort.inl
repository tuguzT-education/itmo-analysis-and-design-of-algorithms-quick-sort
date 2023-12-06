#ifndef LAB3_SORT_INL
#define LAB3_SORT_INL

#include <algorithm>

namespace lab3 {

namespace detail {

constexpr std::ptrdiff_t kMaxSizeForInsertionSort = 0;

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
static inline Iter median_of_three(Iter first, Iter last, Compare comp) {
    Iter middle = first + (last - first) / 2;
    auto predicate = [&comp](Iter a, Iter b) { return comp(*a, *b); };

    Iter min = std::min(first, middle, predicate);
    Iter max = std::max(first, middle, predicate);
    Iter clamped = std::max(min, std::min(max, last, predicate), predicate);
    return clamped;
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
static inline Iter partition(Iter first, Iter last, Compare comp) {
    Iter i = first, j = last - 1;
    auto pivot = *median_of_three(i, j, comp);

    while (comp(*i, pivot)) i++;
    while (comp(pivot, *j)) j--;

    while (i < j) {
        std::swap(*i, *j);
        do i++;
        while (comp(*i, pivot));
        do j--;
        while (comp(pivot, *j));
    }

    return j + 1;
}

}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void sort(Iter first, Iter last, Compare comp) {
    const auto size = last - first;
    if (size <= detail::kMaxSizeForInsertionSort) {
        insertion_sort(first, last, comp);
    } else {
        quick_sort(first, last, comp);
    }
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void quick_sort(Iter first, Iter last, Compare comp) {
    if (last - first <= 1) {
        return;
    }

    Iter partition = detail::partition(first, last, comp);
    sort(first, partition, comp);
    sort(partition, last, comp);
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void insertion_sort(Iter first, Iter last, Compare comp) {
    if (first == last) {
        return;
    }

    for (Iter i = first + 1; i != last; ++i) {
        auto temp = std::move(*i);
        Iter j = i - 1;
        while (j >= first && comp(temp, *j)) {
            *(j + 1) = std::move(*j);
            if (j == first) {
                break;
            }
            --j;
        }
        Iter i_temp = j == first ? j : j + 1;
        *i_temp = std::move(temp);
    }
}

}

#endif //LAB3_SORT_INL
