set(BINARY ${CMAKE_PROJECT_NAME}_test)
 

unset(TEST_LIST)

list (APPEND TEST_LIST "test_insertion_sort")


foreach (test IN LISTS TEST_LIST)
  set(BINARY ${test})
  file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES true ${test}.cc)
  add_executable(${BINARY} ${TEST_SOURCES})
  add_test(NAME ${BINARY} COMMAND ${BINARY})
  target_link_libraries(${BINARY} PUBLIC  gtest)
endforeach()


 

