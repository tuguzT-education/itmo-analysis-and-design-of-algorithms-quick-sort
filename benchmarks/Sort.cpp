#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>
#include <ranges>

using namespace std::string_literals;

std::string to_string(const std::size_t i) {
    return std::to_string(i);
}

void Sort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size001(benchmark::State &state) {
    std::array<std::string, 1> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size002(benchmark::State &state) {
    std::array<std::string, 2> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size003(benchmark::State &state) {
    std::array<std::string, 3> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size004(benchmark::State &state) {
    std::array<std::string, 4> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size005(benchmark::State &state) {
    std::array<std::string, 5> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size006(benchmark::State &state) {
    std::array<std::string, 6> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size007(benchmark::State &state) {
    std::array<std::string, 7> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size008(benchmark::State &state) {
    std::array<std::string, 8> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size009(benchmark::State &state) {
    std::array<std::string, 9> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size010(benchmark::State &state) {
    std::array<std::string, 10> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size011(benchmark::State &state) {
    std::array<std::string, 11> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size012(benchmark::State &state) {
    std::array<std::string, 12> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size013(benchmark::State &state) {
    std::array<std::string, 13> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size014(benchmark::State &state) {
    std::array<std::string, 14> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size015(benchmark::State &state) {
    std::array<std::string, 15> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size016(benchmark::State &state) {
    std::array<std::string, 16> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size017(benchmark::State &state) {
    std::array<std::string, 17> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size018(benchmark::State &state) {
    std::array<std::string, 18> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size019(benchmark::State &state) {
    std::array<std::string, 19> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size020(benchmark::State &state) {
    std::array<std::string, 20> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size021(benchmark::State &state) {
    std::array<std::string, 21> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size022(benchmark::State &state) {
    std::array<std::string, 22> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size023(benchmark::State &state) {
    std::array<std::string, 23> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size024(benchmark::State &state) {
    std::array<std::string, 24> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size025(benchmark::State &state) {
    std::array<std::string, 25> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size026(benchmark::State &state) {
    std::array<std::string, 26> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size027(benchmark::State &state) {
    std::array<std::string, 27> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size028(benchmark::State &state) {
    std::array<std::string, 28> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size029(benchmark::State &state) {
    std::array<std::string, 29> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size030(benchmark::State &state) {
    std::array<std::string, 30> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size031(benchmark::State &state) {
    std::array<std::string, 31> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size032(benchmark::State &state) {
    std::array<std::string, 32> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size033(benchmark::State &state) {
    std::array<std::string, 33> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size034(benchmark::State &state) {
    std::array<std::string, 34> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size035(benchmark::State &state) {
    std::array<std::string, 35> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size036(benchmark::State &state) {
    std::array<std::string, 36> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size037(benchmark::State &state) {
    std::array<std::string, 37> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size038(benchmark::State &state) {
    std::array<std::string, 38> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size039(benchmark::State &state) {
    std::array<std::string, 39> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size040(benchmark::State &state) {
    std::array<std::string, 40> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size041(benchmark::State &state) {
    std::array<std::string, 41> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size042(benchmark::State &state) {
    std::array<std::string, 42> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size043(benchmark::State &state) {
    std::array<std::string, 43> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size044(benchmark::State &state) {
    std::array<std::string, 44> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size045(benchmark::State &state) {
    std::array<std::string, 45> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size046(benchmark::State &state) {
    std::array<std::string, 46> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size047(benchmark::State &state) {
    std::array<std::string, 47> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size048(benchmark::State &state) {
    std::array<std::string, 48> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size049(benchmark::State &state) {
    std::array<std::string, 49> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size050(benchmark::State &state) {
    std::array<std::string, 50> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size051(benchmark::State &state) {
    std::array<std::string, 51> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size052(benchmark::State &state) {
    std::array<std::string, 52> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size053(benchmark::State &state) {
    std::array<std::string, 53> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size054(benchmark::State &state) {
    std::array<std::string, 54> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size055(benchmark::State &state) {
    std::array<std::string, 55> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size056(benchmark::State &state) {
    std::array<std::string, 56> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size057(benchmark::State &state) {
    std::array<std::string, 57> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size058(benchmark::State &state) {
    std::array<std::string, 58> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size059(benchmark::State &state) {
    std::array<std::string, 59> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size060(benchmark::State &state) {
    std::array<std::string, 60> array;
    auto range = std::views::iota(decltype(array)::size_type{0}, array.size()) | std::views::transform(to_string);
    std::transform(range.begin(), range.end(), array.rbegin(), std::identity());

    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

BENCHMARK(Sort_Empty);
BENCHMARK(Sort_Size001);
BENCHMARK(Sort_Size002);
BENCHMARK(Sort_Size003);
BENCHMARK(Sort_Size004);
BENCHMARK(Sort_Size005);
BENCHMARK(Sort_Size006);
BENCHMARK(Sort_Size007);
BENCHMARK(Sort_Size008);
BENCHMARK(Sort_Size009);
BENCHMARK(Sort_Size010);
BENCHMARK(Sort_Size011);
BENCHMARK(Sort_Size012);
BENCHMARK(Sort_Size013);
BENCHMARK(Sort_Size014);
BENCHMARK(Sort_Size015);
BENCHMARK(Sort_Size016);
BENCHMARK(Sort_Size017);
BENCHMARK(Sort_Size018);
BENCHMARK(Sort_Size019);
BENCHMARK(Sort_Size020);
BENCHMARK(Sort_Size021);
BENCHMARK(Sort_Size022);
BENCHMARK(Sort_Size023);
BENCHMARK(Sort_Size024);
BENCHMARK(Sort_Size025);
BENCHMARK(Sort_Size026);
BENCHMARK(Sort_Size027);
BENCHMARK(Sort_Size028);
BENCHMARK(Sort_Size029);
BENCHMARK(Sort_Size030);
BENCHMARK(Sort_Size031);
BENCHMARK(Sort_Size032);
BENCHMARK(Sort_Size033);
BENCHMARK(Sort_Size034);
BENCHMARK(Sort_Size035);
BENCHMARK(Sort_Size036);
BENCHMARK(Sort_Size037);
BENCHMARK(Sort_Size038);
BENCHMARK(Sort_Size039);
BENCHMARK(Sort_Size040);
BENCHMARK(Sort_Size041);
BENCHMARK(Sort_Size042);
BENCHMARK(Sort_Size043);
BENCHMARK(Sort_Size044);
BENCHMARK(Sort_Size045);
BENCHMARK(Sort_Size046);
BENCHMARK(Sort_Size047);
BENCHMARK(Sort_Size048);
BENCHMARK(Sort_Size049);
BENCHMARK(Sort_Size050);
BENCHMARK(Sort_Size051);
BENCHMARK(Sort_Size052);
BENCHMARK(Sort_Size053);
BENCHMARK(Sort_Size054);
BENCHMARK(Sort_Size055);
BENCHMARK(Sort_Size056);
BENCHMARK(Sort_Size057);
BENCHMARK(Sort_Size058);
BENCHMARK(Sort_Size059);
BENCHMARK(Sort_Size060);

BENCHMARK_MAIN();
