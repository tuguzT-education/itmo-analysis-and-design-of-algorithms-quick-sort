#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>
#include <ranges>

using namespace std::string_literals;

std::string to_string(const std::size_t i) {
    return std::to_string(i);
}

void QuickSort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size001(benchmark::State &state) {
    std::array<std::string, 1> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size002(benchmark::State &state) {
    std::array<std::string, 2> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size003(benchmark::State &state) {
    std::array<std::string, 3> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size004(benchmark::State &state) {
    std::array<std::string, 4> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size005(benchmark::State &state) {
    std::array<std::string, 5> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size006(benchmark::State &state) {
    std::array<std::string, 6> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size007(benchmark::State &state) {
    std::array<std::string, 7> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size008(benchmark::State &state) {
    std::array<std::string, 8> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size009(benchmark::State &state) {
    std::array<std::string, 9> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size010(benchmark::State &state) {
    std::array<std::string, 10> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size011(benchmark::State &state) {
    std::array<std::string, 11> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size012(benchmark::State &state) {
    std::array<std::string, 12> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size013(benchmark::State &state) {
    std::array<std::string, 13> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size014(benchmark::State &state) {
    std::array<std::string, 14> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size015(benchmark::State &state) {
    std::array<std::string, 15> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size016(benchmark::State &state) {
    std::array<std::string, 16> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size017(benchmark::State &state) {
    std::array<std::string, 17> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size018(benchmark::State &state) {
    std::array<std::string, 18> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size019(benchmark::State &state) {
    std::array<std::string, 19> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size020(benchmark::State &state) {
    std::array<std::string, 20> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size021(benchmark::State &state) {
    std::array<std::string, 21> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size022(benchmark::State &state) {
    std::array<std::string, 22> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size023(benchmark::State &state) {
    std::array<std::string, 23> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size024(benchmark::State &state) {
    std::array<std::string, 24> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size025(benchmark::State &state) {
    std::array<std::string, 25> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size026(benchmark::State &state) {
    std::array<std::string, 26> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size027(benchmark::State &state) {
    std::array<std::string, 27> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size028(benchmark::State &state) {
    std::array<std::string, 28> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size029(benchmark::State &state) {
    std::array<std::string, 29> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size030(benchmark::State &state) {
    std::array<std::string, 30> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size031(benchmark::State &state) {
    std::array<std::string, 31> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size032(benchmark::State &state) {
    std::array<std::string, 32> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size033(benchmark::State &state) {
    std::array<std::string, 33> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size034(benchmark::State &state) {
    std::array<std::string, 34> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size035(benchmark::State &state) {
    std::array<std::string, 35> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size036(benchmark::State &state) {
    std::array<std::string, 36> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size037(benchmark::State &state) {
    std::array<std::string, 37> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size038(benchmark::State &state) {
    std::array<std::string, 38> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size039(benchmark::State &state) {
    std::array<std::string, 39> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size040(benchmark::State &state) {
    std::array<std::string, 40> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size041(benchmark::State &state) {
    std::array<std::string, 41> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size042(benchmark::State &state) {
    std::array<std::string, 42> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size043(benchmark::State &state) {
    std::array<std::string, 43> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size044(benchmark::State &state) {
    std::array<std::string, 44> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size045(benchmark::State &state) {
    std::array<std::string, 45> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size046(benchmark::State &state) {
    std::array<std::string, 46> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size047(benchmark::State &state) {
    std::array<std::string, 47> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size048(benchmark::State &state) {
    std::array<std::string, 48> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size049(benchmark::State &state) {
    std::array<std::string, 49> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size050(benchmark::State &state) {
    std::array<std::string, 50> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size051(benchmark::State &state) {
    std::array<std::string, 51> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size052(benchmark::State &state) {
    std::array<std::string, 52> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size053(benchmark::State &state) {
    std::array<std::string, 53> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size054(benchmark::State &state) {
    std::array<std::string, 54> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size055(benchmark::State &state) {
    std::array<std::string, 55> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size056(benchmark::State &state) {
    std::array<std::string, 56> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size057(benchmark::State &state) {
    std::array<std::string, 57> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size058(benchmark::State &state) {
    std::array<std::string, 58> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size059(benchmark::State &state) {
    std::array<std::string, 59> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size060(benchmark::State &state) {
    std::array<std::string, 60> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

BENCHMARK(QuickSort_Empty);
BENCHMARK(QuickSort_Size001);
BENCHMARK(QuickSort_Size002);
BENCHMARK(QuickSort_Size003);
BENCHMARK(QuickSort_Size004);
BENCHMARK(QuickSort_Size005);
BENCHMARK(QuickSort_Size006);
BENCHMARK(QuickSort_Size007);
BENCHMARK(QuickSort_Size008);
BENCHMARK(QuickSort_Size009);
BENCHMARK(QuickSort_Size010);
BENCHMARK(QuickSort_Size011);
BENCHMARK(QuickSort_Size012);
BENCHMARK(QuickSort_Size013);
BENCHMARK(QuickSort_Size014);
BENCHMARK(QuickSort_Size015);
BENCHMARK(QuickSort_Size016);
BENCHMARK(QuickSort_Size017);
BENCHMARK(QuickSort_Size018);
BENCHMARK(QuickSort_Size019);
BENCHMARK(QuickSort_Size020);
BENCHMARK(QuickSort_Size021);
BENCHMARK(QuickSort_Size022);
BENCHMARK(QuickSort_Size023);
BENCHMARK(QuickSort_Size024);
BENCHMARK(QuickSort_Size025);
BENCHMARK(QuickSort_Size026);
BENCHMARK(QuickSort_Size027);
BENCHMARK(QuickSort_Size028);
BENCHMARK(QuickSort_Size029);
BENCHMARK(QuickSort_Size030);
BENCHMARK(QuickSort_Size031);
BENCHMARK(QuickSort_Size032);
BENCHMARK(QuickSort_Size033);
BENCHMARK(QuickSort_Size034);
BENCHMARK(QuickSort_Size035);
BENCHMARK(QuickSort_Size036);
BENCHMARK(QuickSort_Size037);
BENCHMARK(QuickSort_Size038);
BENCHMARK(QuickSort_Size039);
BENCHMARK(QuickSort_Size040);
BENCHMARK(QuickSort_Size041);
BENCHMARK(QuickSort_Size042);
BENCHMARK(QuickSort_Size043);
BENCHMARK(QuickSort_Size044);
BENCHMARK(QuickSort_Size045);
BENCHMARK(QuickSort_Size046);
BENCHMARK(QuickSort_Size047);
BENCHMARK(QuickSort_Size048);
BENCHMARK(QuickSort_Size049);
BENCHMARK(QuickSort_Size050);
BENCHMARK(QuickSort_Size051);
BENCHMARK(QuickSort_Size052);
BENCHMARK(QuickSort_Size053);
BENCHMARK(QuickSort_Size054);
BENCHMARK(QuickSort_Size055);
BENCHMARK(QuickSort_Size056);
BENCHMARK(QuickSort_Size057);
BENCHMARK(QuickSort_Size058);
BENCHMARK(QuickSort_Size059);
BENCHMARK(QuickSort_Size060);

BENCHMARK_MAIN();
