# LearnOpenGL
This is my repo for following along with great tutorials at [LearnOpenGL.com](https://learnopengl.com), using GLFW and Glad. It also helps remind me how to set up a project with CMake...

## Checkout
To build, first clone the repository (or just download it from github)
```
git clone https://github.com/alorans/LearnOpenGL.git
```
And update the submodules
```
git submodule update --init --recursive
```
To configure with CMake, first make sure it is installed on your system. Then enter the repository folder, and run the following
```
mkdir build
cd build
cmake ..
```
To build the executable from source code, enter the build folder, and run
```
make
```
The output is an executable binary called `learnGL`, but this can be changed by renaming the project in the second line of CMakeLists.txt.