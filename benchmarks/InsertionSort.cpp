#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>

using namespace std::string_literals;

void InsertionSort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size001(benchmark::State &state) {
    std::array array = {"Hello, World!"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size002(benchmark::State &state) {
    std::array array = {"2"s, "1"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size003(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size004(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size005(benchmark::State &state) {
    std::array array = {"3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size006(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size007(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size008(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size009(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size010(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size011(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size012(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size013(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size014(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size015(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size016(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size017(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size018(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size019(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size020(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
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

BENCHMARK_MAIN();
