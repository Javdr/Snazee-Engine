cmake_minimum_required(VERSION 3.8)

project(Engine C CXX)

file(GLOB CPP_FILES Source/*.cpp)
file(GLOB H_FILES Include/*.*)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.2 REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})

message(${Vulkan_INCLUDE_DIRS})
message(${Vulkan_LIBRARIES})
message(${Vulkan_LIBRARY})

add_library(${PROJECT_NAME} SHARED ${CPP_FILES} ${H_FILES})

target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES})
target_link_libraries(${PROJECT_NAME} glfw)