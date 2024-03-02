
cmake_minimum_required (VERSION 3.22)

project ("Backtracking" VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

#add_subdirectory(templates)

add_subdirectory(tests)

option(BUILD_WITH_DOCS "Generate Docs" ON)
if(TASKSCH_BUILD_WITH_DOCS)
	add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/docs)
endif()

if(NOT TARGET OpenMP::OpenMP_CXX)
    find_package(Threads REQUIRED)
    add_library(OpenMP::OpenMP_CXX IMPORTED INTERFACE)
    set_property(TARGET OpenMP::OpenMP_CXX
                 PROPERTY INTERFACE_COMPILE_OPTIONS ${OpenMP_CXX_FLAGS})
    # Only works if the same flag is passed to the linker; use CMake 3.9+ otherwise (Intel, AppleClang)
    set_property(TARGET OpenMP::OpenMP_CXX
                 PROPERTY INTERFACE_LINK_LIBRARIES ${OpenMP_CXX_FLAGS} Threads::Threads)

endif()
target_link_libraries(${PROJECT_NAME} PUBLIC OpenMP::OpenMP_CXX)

