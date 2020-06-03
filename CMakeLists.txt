cmake_minimum_required(VERSION 3.16)
project(kushuh_cpp_utils)

set(CMAKE_CXX_STANDARD 14)

add_executable(kushuh_cpp_utils main.cpp string_utils/find_matches.cpp string_utils/find_matches.h main.cpp string_utils/split.cpp string_utils/split.h vector_utils/print_vector.cpp vector_utils/print_vector.h string_utils/format.cpp string_utils/format.h)