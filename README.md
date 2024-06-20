# LearnOpenGL
This is my repo for following along with great tutorials at [LearnOpenGL.com](https://learnopengl.com), using GLFW and Glad. It also helps remind me how to use CMake...

## Checkout
To build, first clone the repository (or just download it from github)

```
git clone https://github.com/alorans/LearnOpenGL.git
```
Make sure CMake is installed on your system. Then enter the repository folder, and run the following
```
mkdir build
cd build
cmake ..
make
```
The output is an executable binary called `learnGL`, but this can be changed by renaming the project in the second line of CMakeLists.txt.