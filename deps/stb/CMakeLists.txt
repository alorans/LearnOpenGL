cmake_minimum_required(VERSION 3.15)
project(stb LANGUAGES C)

# Create a static library from stb.c
# Use OBJECT instead of STATIC if the object files will be used in multiple targets
add_library(${PROJECT_NAME} STATIC stb.c)
target_include_directories(${PROJECT_NAME} PUBLIC .)