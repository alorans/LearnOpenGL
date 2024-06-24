# glfw
set(GLFW_BUILD_EXAMPLES  OFF CACHE INTERNAL "")
set(GLFW_BUILD_TESTS     OFF CACHE INTERNAL "")
set(GLFW_BUILD_DOCS      OFF CACHE INTERNAL "")
set(GLFW_INSTALL         OFF CACHE INTERNAL "")
add_subdirectory(glfw)

# glad
add_subdirectory(glad)

# glm
set(GLM_BUILD_LIBRARY   OFF CACHE INTERNAL "")
set(GLM_BUILD_TESTS     OFF CACHE INTERNAL "")
set(GLM_BUILD_INSTALL   OFF CACHE INTERNAL "")
add_subdirectory(glm)
