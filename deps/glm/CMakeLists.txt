# Turn off standalone build options
set(GLM_BUILD_LIBRARY   OFF CACHE INTERNAL "")
set(GLM_BUILD_TESTS     OFF CACHE INTERNAL "")
set(GLM_BUILD_INSTALL   OFF CACHE INTERNAL "")
add_subdirectory(glm)