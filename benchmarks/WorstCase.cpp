#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <vector>
#include <string>
#include <ranges>

template<typename Sort>
void WorstCase(benchmark::State &state, Sort sort) {
    std::vector<std::string> vector;

    const auto size = state.range(0);
    vector.reserve(size);

    auto to_string = [](const auto value) { return std::to_string(value); };
    auto range = std::views::iota(0, size) | std::views::transform(to_string);
    std::ranges::copy(range.begin(), range.end(), std::back_inserter(vector));

    for ([[maybe_unused]] auto _ : state) {
        sort(vector.begin(), vector.end(), std::less());
        benchmark::DoNotOptimize(vector);
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
