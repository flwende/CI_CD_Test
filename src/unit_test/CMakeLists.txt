cmake_minimum_required(VERSION 3.2)

find_package(GTest REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/unit_test")
set(CMAKE_BUILD_TYPE Debug)

add_executable(Test_A Test_A.cpp)
target_link_libraries(Test_A LINK_PUBLIC gtest pthread)