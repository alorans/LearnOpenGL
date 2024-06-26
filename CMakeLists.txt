cmake_minimum_required(VERSION 3.15)
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "Prevented in-tree build. Please create a build directory as specified in the README.")
endif()
project(learnGL VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensure OpenGL is on the system
find_package(OpenGL REQUIRED)
if(NOT OpenGL_FOUND)
    message(FATAL_ERROR "OpenGL not found on your system.")
endif()

# Add source files
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/shader.cpp)

# Set include search path
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Add dependencies
add_subdirectory(deps)

# Link library dependencies
target_link_libraries(${PROJECT_NAME} PRIVATE ${LEARNGL_LIBRARIES})