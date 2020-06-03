cmake_minimum_required(VERSION 3.16)
project(kushuh_cpp_utils)

set(CMAKE_CXX_STANDARD 14)

add_executable(kushuh_cpp_utils
    main.cpp
    string_utils/find_matches.cpp
    string_utils/find_matches.h
    string_utils/split.cpp
    string_utils/split.h
    string_utils/format.cpp
    string_utils/format.h
    vector_utils/print_vector.cpp
    vector_utils/print_vector.h
)

add_library(
    KushuhCppUtils STATIC
    string_utils/find_matches.cpp
    string_utils/split.cpp
    string_utils/format.cpp
    vector_utils/print_vector.cpp
)

target_link_libraries(kushuh_cpp_utils KushuhCppUtils)