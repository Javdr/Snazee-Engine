cmake_minimum_required(VERSION 3.8)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(SEND_ERROR "No in source builds")
endif()

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)

if (WIN32)
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif()

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(components/Engine)
add_subdirectory(components/Game)
add_subdirectory(components/Tests)