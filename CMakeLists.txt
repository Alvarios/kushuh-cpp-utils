cmake_minimum_required(VERSION 3.16)
project(kushuh_cpp_utils)

set(CMAKE_CXX_STANDARD 14)

add_executable(kushuh_cpp_utils main.cpp string/find_matches.cpp string/find_matches.h main.cpp string/split.cpp string/split.h vector/print_vector.cpp vector/print_vector.h string/format.cpp string/format.h)