
cmake_minimum_required (VERSION 3.22)

project ("Backtracking" VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

#add_subdirectory(templates)

#add_subdirectory(tests)