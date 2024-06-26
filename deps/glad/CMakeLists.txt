cmake_minimum_required(VERSION 3.15)
project(glad LANGUAGES C)

# Create static library
add_library(${PROJECT_NAME} STATIC glad/src/glad.c)
target_include_directories(${PROJECT_NAME} PUBLIC glad/include)