#ifndef LAB3_SORT_INL
#define LAB3_SORT_INL

namespace lab3 {

namespace detail {

constexpr std::ptrdiff_t kMaxSizeForInsertionSort = 10;

template<typename Iter, typename Compare>
Iter partition(Iter first, Iter last, Compare comp) requires SortableWithComparator<Iter, Compare> {
    Iter i = first, j = last - 1;
    auto pivot = *(i + (j - i) / 2);

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
    if (last - first <= 1) {
        return;
    }

    Iter partition = detail::partition(first, last, comp);
    sort(first, partition, comp);
    sort(partition, last, comp);
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
