# LearnOpenGL
This is my repo for following along with great tutorials at [LearnOpenGL.com](https://learnopengl.com). It also helps remind me how to set up a project with CMake...

## Checkout
To build, first clone the repository recursively, to get dependencies.
```
git clone --recursive https://github.com/alorans/LearnOpenGL.git
cd LearnOpenGL
```
If the repository wasn't cloned recursively, update the submodules using this command
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