#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <vector>
#include <string>
#include <ranges>

void QuickSort(benchmark::State &state) {
    std::vector<std::string> vector;

    auto transform = [](const auto arg) { return std::to_string(arg); };
    auto range = std::views::iota(std::int64_t{0}, state.range()) | std::views::transform(transform);
    std::ranges::copy(range.begin(), range.end(), std::back_inserter(vector));

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(vector.begin(), vector.end(), std::less());
    }
}

BENCHMARK(QuickSort)->DenseRange(0, 100);
BENCHMARK_MAIN();
