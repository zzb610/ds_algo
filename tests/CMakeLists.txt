cmake_minimum_required(VERSION 3.10)

enable_testing()
 
include(GoogleTest)

include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)


add_executable(test_insertion_sort test_insertion_sort.cc)


target_link_libraries(test_insertion_sort
        ${GTEST_BOTH_LIBRARIES}
        pthread gtest_main)

# add to test
gtest_discover_tests(test_insertion_sort)
