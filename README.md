# My soulution from Codewars using GoogleTest framework and CMake

This repository stores the code of my solutions from [codewars.com](https://www.codewars.com/). 

Link to Codewars' profile: [https://www.codewars.com/users/l122](https://www.codewars.com/users/l122)

The tests are done usind [Google's C++ test framework](https://github.com/google/googletest) and [CMake](https://cmake.org/)


## How to download it to your PC

- Navigate to the folder which you want to download the project. 
- Open a terminal in that folder. 
- In the command line of the terminal copy and paste this line: **git clone https://github.com/l122/Codewars_Google-Test-Frame-Work-CMake.git**

## Install CMake
1) Check if CMake is already installed by typing the following in a command line: cmake --version

If CMake presents the terminal will dispaly "cmake version ....."

2) In case CMake is not installed, go to https://cmake.org/download/ and follow the instructions of how to install it in your system.


## How to run it in Windows

- open a mommand line terminal in the folder of a specific project, e.g. "Build Tower"
- download [GoogleTest](https://github.com/google/googletest) by typing the following command in the terminal: **git clone https://github.com/google/googletest.git**
- create a "build" folder: mkdir build
- go to "build" folder: cd build
- configure project: cmake ..

(in case of an error, edit and try the following command: cmake --no-warn-unused-cli -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=**C:\your-path-to\C-compiler-gcc.exe** -DCMAKE_CXX_COMPILER:FILEPATH=**C:\your-path-to\CPP-compiler-g++.exe** .. -G "Unix Makefiles" )


- build project: cmake --build .
- run: test\ExampleTests.exe

The output should display a test report.
