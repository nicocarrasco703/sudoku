cmake_minimum_required(VERSION 3.23)
project(sudoku)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(Google_tests)

include_directories(Google_tests/lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp
        tst/test1.cpp)
add_executable(sudoku ${SOURCE_FILES})

target_link_libraries(sudoku gtest gtest_main)