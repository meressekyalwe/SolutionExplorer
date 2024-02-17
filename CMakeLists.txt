# CMakeList.txt : CMake project for branch_and_bound, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("branch_and_bound")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add source to this project's executable.
add_executable (branch_and_bound  )

