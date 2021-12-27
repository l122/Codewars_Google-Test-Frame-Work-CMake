cmake_minimum_required(VERSION 3.0.0)

#set a variable for this project name
set(This ExampleTests)

#set a variable for the source files
set(Sources
    ExampleTests.cxx
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    RomanNumeralsDecoder
)

add_test(
    NAME ${This}
    COMMAND ${This}
)