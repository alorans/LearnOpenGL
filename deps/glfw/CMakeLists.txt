# Turn off standalone build options
set(GLFW_BUILD_EXAMPLES  OFF CACHE INTERNAL "")
set(GLFW_BUILD_TESTS     OFF CACHE INTERNAL "")
set(GLFW_BUILD_DOCS      OFF CACHE INTERNAL "")
set(GLFW_INSTALL         OFF CACHE INTERNAL "")
add_subdirectory(glfw)