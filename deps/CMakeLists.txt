# Add library subdirectories
add_subdirectory(glfw)
add_subdirectory(glad)
add_subdirectory(glm)
add_subdirectory(stb)

# Set libraries list
set(LEARNGL_LIBRARIES
    glfw
    glad
    glm
    stb
CACHE INTERNAL "")