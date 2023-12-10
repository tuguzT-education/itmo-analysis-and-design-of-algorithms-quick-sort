#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <vector>
#include <string>
#include <ranges>

template<typename Sort>
void WorstCase(benchmark::State &state, Sort sort) {
    std::vector<std::string> vector;
    vector.reserve(state.range());

    auto transform = [](const auto arg) { return std::to_string(arg); };
    auto range = std::views::iota(std::int64_t{0}, state.range()) | std::views::transform(transform);
    std::ranges::copy(range.begin(), range.end(), std::back_inserter(vector));

    for ([[maybe_unused]] auto _ : state) {
        sort(vector.begin(), vector.end(), std::less());
    }
}

auto InsertionSort = [](auto first, auto last, auto comp) {
    lab3::insertion_sort(first, last, comp);
};
auto QuickSort = [](auto first, auto last, auto comp) {
    lab3::quick_sort(first, last, comp);
};
auto Sort = [](auto first, auto last, auto comp) {
    lab3::sort(first, last, comp);
};

BENCHMARK_CAPTURE(WorstCase, InsertionSort, InsertionSort)->DenseRange(0, 100);
BENCHMARK_CAPTURE(WorstCase, QuickSort, QuickSort)->DenseRange(0, 100);
BENCHMARK_CAPTURE(WorstCase, Sort, Sort)->DenseRange(0, 100);

BENCHMARK_MAIN();
