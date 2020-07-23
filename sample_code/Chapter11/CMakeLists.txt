cmake_minimum_required(VERSION 3.15)
project(sample_code)

set(CMAKE_CXX_STANDARD 17)

add_executable(pointers pointers.cpp)
add_executable(pointer_arithmetic pointer_arithmetic.cpp)
add_executable(const_pointers const_pointers.cpp)
add_executable(memory_diagram memory_diagram.cpp)
add_executable(arrays_md arrays_md.cpp)
add_executable(arrays arrays.cpp)
add_executable(objects objects.cpp)
add_executable(vectors_pointers vectors_pointers.cpp)