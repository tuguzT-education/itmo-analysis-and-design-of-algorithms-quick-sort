#ifndef LAB3_SORT_INL
#define LAB3_SORT_INL

#include <algorithm>

namespace lab3 {

namespace detail {

constexpr std::ptrdiff_t kMaxSizeForInsertionSort = 0;

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
static inline Iter median_of_three(Iter first, Iter last, Compare comp) {
    Iter middle = first + (last - first - 1) / 2;
    auto predicate = [&comp](Iter a, Iter b) { return comp(*a, *b); };

    Iter min = std::min(first, middle, predicate);
    Iter max = std::max(first, middle, predicate);
    Iter clamped = std::max(min, std::min(max, last - 1, predicate), predicate);
    return clamped;
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
static inline Iter partition(Iter first, Iter last, Compare comp) {
    Iter pivot = median_of_three(first, last, comp);
    auto value = *pivot;

    Iter left = first, right = last - 1;
    while (true) {
        while (comp(*left, value)) ++left;
        while (comp(value, *right)) --right;

        if (left >= right) {
            break;
        }
        std::swap(*left, *right);
        ++left;
        --right;
    }
    return right + 1;
}

}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void sort(Iter first, Iter last, Compare comp) {
    const auto size = last - first;
    if (size <= detail::kMaxSizeForInsertionSort) {
        insertion_sort(first, last, comp);
    } else {
        quick_sort(first, last, comp, true);
    }
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void quick_sort(Iter first, Iter last, Compare comp, const bool optimize_tiny) {
    auto sort = [optimize_tiny](Iter first, Iter last, Compare comp) {
        if (optimize_tiny) {
            lab3::sort(first, last, comp);
        } else {
            lab3::quick_sort(first, last, comp);
        }
    };
    while (last - first > 1) {
        Iter partition = detail::partition(first, last, comp);
        if (partition - first < last - partition) {
            sort(first, partition, comp);
            first = partition;
        } else {
            sort(partition, last, comp);
            last = partition;
        }
    }
}

template<typename Iter, typename Compare>
requires SortableWithComparator<Iter, Compare>
void insertion_sort(Iter first, Iter last, Compare comp) {
    if (last - first <= 1) {
        return;
    }

    for (Iter i = first + 1; i != last; ++i) {
        auto value = std::move(*i);
        auto j = (i - first) - 1;

        while (j >= 0 && comp(value, *(first + j))) {
            *(first + (j + 1)) = std::move(*(first + j));
            --j;
        }
        *(first + (j + 1)) = std::move(value);
    }
}

}

#endif //LAB3_SORT_INL
