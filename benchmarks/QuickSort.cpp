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

void QuickSort_Size021(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s,
        "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size022(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size023(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size024(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size025(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s, "16"s,
        "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size026(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s,
        "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size027(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s, "25"s,
        "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size028(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "28"s,
        "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s,
        "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size029(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size030(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size031(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s,
        "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size032(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s, "20"s,
        "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s,
        "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size033(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s,
        "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size034(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size035(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size036(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size037(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size038(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size039(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size040(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size041(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s,
        "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size042(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size043(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size044(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size045(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size046(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size047(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size048(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size049(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size050(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "50"s,
        "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s,
        "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s,
        "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s,
        "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size051(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s,
        "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s,
        "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
        "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size052(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size053(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size054(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s,
        "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size055(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s,
        "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size056(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size057(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size058(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size059(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::quick_sort(array.begin(), array.end(), std::less());
    }
}

void QuickSort_Size060(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "60"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s,
        "18"s, "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
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
