#ifndef LAB3_SORT_INL
#define LAB3_SORT_INL

namespace lab3 {

template<typename T, typename Compare>
requires detail::Sort<T, Compare>
void sort(T first, T last, Compare comp) {
    // empty for now
}

}

#endif //LAB3_SORT_INL
