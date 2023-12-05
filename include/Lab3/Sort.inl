#ifndef LAB3_SORT_INL
#define LAB3_SORT_INL

namespace lab3 {

namespace detail {

constexpr std::ptrdiff_t kMaxSizeForInsertionSort = 10;

}

template<typename Iter, typename Compare>
void sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare> {
    const auto size = last - first;
    if (size <= detail::kMaxSizeForInsertionSort) {
        insertion_sort(first, last, comp);
    } else {
        quick_sort(first, last, comp);
    }
}

template<typename Iter, typename Compare>
void quick_sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare> {
    // TODO
}

template<typename Iter, typename Compare>
void insertion_sort(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare> {
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
