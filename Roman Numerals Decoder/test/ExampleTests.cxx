#include "../Kata.hxx"

#include <gtest/gtest.h>

TEST(Test1, solution)
{
    //Arrange
    int expected = 21;

    //Act 
    int actual = solution("XXI");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test2, solution)
{
    //Arrange
    int expected = 1;

    //Act 
    int actual = solution("I");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test3, solution)
{
    //Arrange
    int expected = 4;

    //Act 
    int actual = solution("IV");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test4, solution)
{
    //Arrange
    int expected = 2008;

    //Act 
    int actual = solution("MMVIII");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test5, solution)
{
    //Arrange
    int expected = 1666;

    //Act 
    int actual = solution("MDCLXVI");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test6, solution)
{
    //Arrange
    int expected = 40;

    //Act 
    int actual = solution("XL");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test7, solution)
{
    //Arrange
    int expected = 90;

    //Act 
    int actual = solution("XC");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test8, solution)
{
    //Arrange
    int expected = 400;

    //Act 
    int actual = solution("CD");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test9, solution)
{
    //Arrange
    int expected = 3900;

    //Act 
    int actual = solution("MMMCM");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test10, solution)
{
    //Arrange
    int expected = 3999;

    //Act 
    int actual = solution("MMMCMXCIX");
    
    //Assert
    EXPECT_EQ(
        expected,
        actual
        );
}