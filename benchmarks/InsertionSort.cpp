#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>
#include <ranges>

using namespace std::string_literals;

std::string to_string(const std::size_t i) {
    return std::to_string(i);
}

void InsertionSort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size001(benchmark::State &state) {
    std::array<std::string, 1> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size002(benchmark::State &state) {
    std::array<std::string, 2> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size003(benchmark::State &state) {
    std::array<std::string, 3> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size004(benchmark::State &state) {
    std::array<std::string, 4> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size005(benchmark::State &state) {
    std::array<std::string, 5> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size006(benchmark::State &state) {
    std::array<std::string, 6> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size007(benchmark::State &state) {
    std::array<std::string, 7> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size008(benchmark::State &state) {
    std::array<std::string, 8> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size009(benchmark::State &state) {
    std::array<std::string, 9> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size010(benchmark::State &state) {
    std::array<std::string, 10> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size011(benchmark::State &state) {
    std::array<std::string, 11> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size012(benchmark::State &state) {
    std::array<std::string, 12> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size013(benchmark::State &state) {
    std::array<std::string, 13> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size014(benchmark::State &state) {
    std::array<std::string, 14> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size015(benchmark::State &state) {
    std::array<std::string, 15> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size016(benchmark::State &state) {
    std::array<std::string, 16> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size017(benchmark::State &state) {
    std::array<std::string, 17> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size018(benchmark::State &state) {
    std::array<std::string, 18> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size019(benchmark::State &state) {
    std::array<std::string, 19> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size020(benchmark::State &state) {
    std::array<std::string, 20> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size021(benchmark::State &state) {
    std::array<std::string, 21> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size022(benchmark::State &state) {
    std::array<std::string, 22> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size023(benchmark::State &state) {
    std::array<std::string, 23> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size024(benchmark::State &state) {
    std::array<std::string, 24> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size025(benchmark::State &state) {
    std::array<std::string, 25> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size026(benchmark::State &state) {
    std::array<std::string, 26> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size027(benchmark::State &state) {
    std::array<std::string, 27> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size028(benchmark::State &state) {
    std::array<std::string, 28> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size029(benchmark::State &state) {
    std::array<std::string, 29> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size030(benchmark::State &state) {
    std::array<std::string, 30> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size031(benchmark::State &state) {
    std::array<std::string, 31> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size032(benchmark::State &state) {
    std::array<std::string, 32> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size033(benchmark::State &state) {
    std::array<std::string, 33> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size034(benchmark::State &state) {
    std::array<std::string, 34> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size035(benchmark::State &state) {
    std::array<std::string, 35> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size036(benchmark::State &state) {
    std::array<std::string, 36> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size037(benchmark::State &state) {
    std::array<std::string, 37> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size038(benchmark::State &state) {
    std::array<std::string, 38> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size039(benchmark::State &state) {
    std::array<std::string, 39> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size040(benchmark::State &state) {
    std::array<std::string, 40> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size041(benchmark::State &state) {
    std::array<std::string, 41> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size042(benchmark::State &state) {
    std::array<std::string, 42> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size043(benchmark::State &state) {
    std::array<std::string, 43> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size044(benchmark::State &state) {
    std::array<std::string, 44> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size045(benchmark::State &state) {
    std::array<std::string, 45> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size046(benchmark::State &state) {
    std::array<std::string, 46> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size047(benchmark::State &state) {
    std::array<std::string, 47> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size048(benchmark::State &state) {
    std::array<std::string, 48> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size049(benchmark::State &state) {
    std::array<std::string, 49> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size050(benchmark::State &state) {
    std::array<std::string, 50> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size051(benchmark::State &state) {
    std::array<std::string, 51> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size052(benchmark::State &state) {
    std::array<std::string, 52> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size053(benchmark::State &state) {
    std::array<std::string, 53> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size054(benchmark::State &state) {
    std::array<std::string, 54> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size055(benchmark::State &state) {
    std::array<std::string, 55> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size056(benchmark::State &state) {
    std::array<std::string, 56> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size057(benchmark::State &state) {
    std::array<std::string, 57> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size058(benchmark::State &state) {
    std::array<std::string, 58> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size059(benchmark::State &state) {
    std::array<std::string, 59> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size060(benchmark::State &state) {
    std::array<std::string, 60> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

BENCHMARK(InsertionSort_Empty);
BENCHMARK(InsertionSort_Size001);
BENCHMARK(InsertionSort_Size002);
BENCHMARK(InsertionSort_Size003);
BENCHMARK(InsertionSort_Size004);
BENCHMARK(InsertionSort_Size005);
BENCHMARK(InsertionSort_Size006);
BENCHMARK(InsertionSort_Size007);
BENCHMARK(InsertionSort_Size008);
BENCHMARK(InsertionSort_Size009);
BENCHMARK(InsertionSort_Size010);
BENCHMARK(InsertionSort_Size011);
BENCHMARK(InsertionSort_Size012);
BENCHMARK(InsertionSort_Size013);
BENCHMARK(InsertionSort_Size014);
BENCHMARK(InsertionSort_Size015);
BENCHMARK(InsertionSort_Size016);
BENCHMARK(InsertionSort_Size017);
BENCHMARK(InsertionSort_Size018);
BENCHMARK(InsertionSort_Size019);
BENCHMARK(InsertionSort_Size020);
BENCHMARK(InsertionSort_Size021);
BENCHMARK(InsertionSort_Size022);
BENCHMARK(InsertionSort_Size023);
BENCHMARK(InsertionSort_Size024);
BENCHMARK(InsertionSort_Size025);
BENCHMARK(InsertionSort_Size026);
BENCHMARK(InsertionSort_Size027);
BENCHMARK(InsertionSort_Size028);
BENCHMARK(InsertionSort_Size029);
BENCHMARK(InsertionSort_Size030);
BENCHMARK(InsertionSort_Size031);
BENCHMARK(InsertionSort_Size032);
BENCHMARK(InsertionSort_Size033);
BENCHMARK(InsertionSort_Size034);
BENCHMARK(InsertionSort_Size035);
BENCHMARK(InsertionSort_Size036);
BENCHMARK(InsertionSort_Size037);
BENCHMARK(InsertionSort_Size038);
BENCHMARK(InsertionSort_Size039);
BENCHMARK(InsertionSort_Size040);
BENCHMARK(InsertionSort_Size041);
BENCHMARK(InsertionSort_Size042);
BENCHMARK(InsertionSort_Size043);
BENCHMARK(InsertionSort_Size044);
BENCHMARK(InsertionSort_Size045);
BENCHMARK(InsertionSort_Size046);
BENCHMARK(InsertionSort_Size047);
BENCHMARK(InsertionSort_Size048);
BENCHMARK(InsertionSort_Size049);
BENCHMARK(InsertionSort_Size050);
BENCHMARK(InsertionSort_Size051);
BENCHMARK(InsertionSort_Size052);
BENCHMARK(InsertionSort_Size053);
BENCHMARK(InsertionSort_Size054);
BENCHMARK(InsertionSort_Size055);
BENCHMARK(InsertionSort_Size056);
BENCHMARK(InsertionSort_Size057);
BENCHMARK(InsertionSort_Size058);
BENCHMARK(InsertionSort_Size059);
BENCHMARK(InsertionSort_Size060);
BENCHMARK(InsertionSort_Size060);

BENCHMARK_MAIN();
