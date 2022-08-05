cmake_minimum_required(VERSION 3.10)

project(ds_algo C CXX)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

add_compile_options(-std=c++14)
add_compile_options(-fPIC)
add_compile_options(-Wl,--no-as-needed)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories(include)

add_subdirectory(tests)

add_subdirectory(lib/googletest)

