#include "../Kata.hxx"

#include <gtest/gtest.h>


// "SOS! THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."

TEST(Test2, decodeMorse)
{
    //Arrange
    std::string expected = "SOS! T";

    //Act 
    std::string actual = decodeMorse("...---... -.-.-   -");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test1, decodeMorse)
{
    //Arrange
    std::string expected = "HEY JUDE";

    //Act 
    std::string actual = decodeMorse(".... . -.--   .--- ..- -.. .");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}