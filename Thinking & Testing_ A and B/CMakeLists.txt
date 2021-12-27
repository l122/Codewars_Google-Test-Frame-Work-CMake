cmake_minimum_required(VERSION 3.0.0)

#Some of the code below is taken from the youtube video "Introduction to Google Test and CMake" by  rhymu8354
# https://www.youtube.com/watch?v=Lp1ifh9TuFI


######################### CHANGE PROJECT NAME #############################
#Set a variable name for the project
set(This ThinkingAndTestingAandB)
###########################################################################

project(${This} VERSION 0.1.0)
project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# include(CTest)  #maybe it's not necessary

enable_testing()

add_subdirectory(googletest)

#set variable for headers
set(Headers
    Kata.hxx
)

#set variable for source files
set(Sources
    Kata.cxx
)

#Add googletest as library
add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)