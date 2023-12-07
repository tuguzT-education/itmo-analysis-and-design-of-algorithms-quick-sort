#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>

using namespace std::string_literals;

void QuickSort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size001(benchmark::State &state) {
    std::array array = {"Hello, World!"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size002(benchmark::State &state) {
    std::array array = {"2"s, "1"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size003(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size004(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size005(benchmark::State &state) {
    std::array array = {"3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size006(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size007(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size008(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size009(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size010(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size011(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size012(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size013(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size014(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size015(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size016(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size017(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size018(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size019(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size020(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
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

BENCHMARK_MAIN();
