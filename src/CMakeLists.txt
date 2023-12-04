set(HEADERS)

add_library(lab3 INTERFACE ${HEADERS})
target_include_directories(lab3 INTERFACE "${PROJECT_SOURCE_DIR}/include")
target_compile_features(lab3 INTERFACE cxx_std_20)
