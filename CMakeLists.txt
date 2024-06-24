cmake_minimum_required(VERSION 3.15)
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "Prevented in-tree built. Please create a build directory outside of the source code and call cmake from there.")
endif()
project(learnGL VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ensure OpenGL is on the system
find_package(OpenGL REQUIRED)
if(NOT OpenGL_FOUND)
    message(FATAL_ERROR "OpenGL not found on your system.")
endif()

# Add source files
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/shader.cpp
    src/stb_image.cpp)

# Set include search path
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Add dependencies
add_subdirectory(deps)

# Include directories for third-party libraries
include_directories(deps/glfw/include)
include_directories(deps/glad/include)
include_directories(deps/glm)

# Link GLFW and glad
target_link_libraries(${PROJECT_NAME} PRIVATE glfw glad)

# Link OS-specific GLFW dependencies
if(APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE "-framework Cocoa" "-framework OpenGL" "-framework IOKit")
elseif(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32)
elseif(UNIX AND NOT APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE GL X11 pthread Xrandr Xi)
endif()

# Silence OpenGL deprecation warnings on Mac
if(APPLE)
    target_compile_options(${PROJECT_NAME} PRIVATE "-DGL_SILENCE_DEPRECATION")
endif()