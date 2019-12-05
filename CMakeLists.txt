cmake_minimum_required(VERSION 3.2)

project(ci_cd_test)

set(Test on) 
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

if (Test)
    add_subdirectory(src/unit_test)
endif (Test)