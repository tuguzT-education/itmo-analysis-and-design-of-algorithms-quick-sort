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

void Sort_Size021(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "7"s, "4"s,
        "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s, "18"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size022(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size023(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "9"s, "1"s, "22"s, "7"s,
        "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size024(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "13"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size025(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "5"s, "10"s, "24"s, "9"s, "1"s, "22"s,
        "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s, "16"s,
        "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size026(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "12"s, "14"s, "25"s, "13"s,
        "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size027(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "1"s,
        "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s, "25"s,
        "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size028(benchmark::State &state) {
    std::array array = {
        "6"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s, "28"s,
        "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s, "14"s,
        "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size029(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size030(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "10"s, "24"s, "9"s,
        "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s, "12"s,
        "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size031(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "2"s, "15"s, "20"s, "27"s,
        "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s, "30"s,
        "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size032(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s, "20"s,
        "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s, "18"s,
        "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size033(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s, "23"s,
        "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size034(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "16"s, "19"s, "11"s,
        "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size035(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size036(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size037(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "4"s, "31"s, "2"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size038(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size039(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size040(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size041(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s, "2"s,
        "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s, "17"s,
        "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size042(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size043(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size044(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "5"s, "31"s, "10"s, "24"s,
        "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s, "31"s,
        "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size045(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size046(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size047(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s,
        "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s,
        "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size048(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size049(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "10"s,
        "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s, "4"s,
        "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s, "34"s,
        "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s,
        "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size050(benchmark::State &state) {
    std::array array = {
        "6"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s, "50"s,
        "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s, "38"s,
        "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s, "12"s,
        "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s,
        "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size051(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "15"s, "20"s, "27"s,
        "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s, "11"s,
        "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s, "39"s,
        "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size052(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size053(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "2"s, "41"s, "46"s, "52"s, "15"s, "20"s,
        "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s, "36"s,
        "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s, "43"s,
        "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size054(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "8"s, "26"s, "45"s, "5"s, "31"s,
        "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s, "7"s,
        "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s, "15"s,
        "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s, "19"s,
        "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s, "17"s,
        "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size055(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s, "52"s,
        "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s, "16"s,
        "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s, "44"s,
        "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size056(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size057(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "21"s, "55"s, "8"s, "26"s, "45"s, "5"s,
        "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s, "22"s,
        "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s, "46"s,
        "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s, "35"s,
        "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s, "30"s,
        "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size058(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size059(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "12"s, "34"s, "14"s, "25"s, "13"s,
        "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s, "18"s,
        "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
    };
    for ([[maybe_unused]] auto _ : state) {
        lab3::sort(array.begin(), array.end(), std::less());
    }
}

void Sort_Size060(benchmark::State &state) {
    std::array array = {
        "6"s, "51"s, "29"s, "3"s, "58"s, "21"s, "55"s, "8"s, "26"s, "45"s,
        "5"s, "31"s, "50"s, "10"s, "24"s, "9"s, "33"s, "28"s, "42"s, "1"s,
        "22"s, "7"s, "38"s, "4"s, "56"s, "48"s, "31"s, "54"s, "2"s, "41"s,
        "46"s, "52"s, "15"s, "20"s, "27"s, "60"s, "12"s, "34"s, "14"s, "25"s,
        "13"s, "35"s, "16"s, "19"s, "36"s, "11"s, "40"s, "23"s, "37"s, "49"s,
        "18"s, "30"s, "44"s, "17"s, "59"s, "43"s, "39"s, "47"s, "53"s, "57"s,
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
