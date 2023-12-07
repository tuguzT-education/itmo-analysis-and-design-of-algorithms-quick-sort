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

void InsertionSort_Size021(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s,
        "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size022(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size023(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size024(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size025(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s, "16"s,
        "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size026(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s,
        "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size027(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s, "25"s,
        "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size028(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "28"s,
        "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s,
        "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size029(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size030(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size031(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s,
        "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size032(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s, "20"s,
        "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s,
        "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size033(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s,
        "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size034(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size035(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size036(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size037(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size038(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size039(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size040(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size041(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s,
        "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size042(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size043(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size044(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size045(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size046(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size047(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size048(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size049(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size050(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "50"s,
        "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s,
        "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s,
        "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s,
        "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size051(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s,
        "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s,
        "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
        "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size052(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size053(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size054(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s,
        "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size055(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s,
        "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size056(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size057(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size058(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size059(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::insertion_sort(array.begin(), array.end(), std::less());
    }
}

void InsertionSort_Size060(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "60"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s,
        "18"s, "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
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

BENCHMARK_MAIN();
