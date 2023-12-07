#include <benchmark/benchmark.h>
#include <Lab3/Sort.hpp>

#include <array>
#include <string>

using namespace std::string_literals;

void Sort_Empty(benchmark::State &state) {
    std::array<std::string, 0> array;
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size001(benchmark::State &state) {
    std::array array = {"Hello, World!"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size002(benchmark::State &state) {
    std::array array = {"2"s, "1"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size003(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size004(benchmark::State &state) {
    std::array array = {"3"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size005(benchmark::State &state) {
    std::array array = {"3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size006(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size007(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size008(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size009(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size010(benchmark::State &state) {
    std::array array = {"6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s};
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size011(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size012(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size013(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size014(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size015(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size016(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size017(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size018(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size019(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size020(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s, "2"s,
        "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s, "17"s,
    };
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

BENCHMARK_MAIN();
