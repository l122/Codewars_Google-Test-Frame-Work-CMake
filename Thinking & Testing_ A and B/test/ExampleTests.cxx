#include "../Kata.hxx"

#include <gtest/gtest.h>



TEST(Test1, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 1;

    //Act 
    int actual = testit(0, 1);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}


TEST(Test2, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 3;

    //Act 
    int actual = testit(1, 2);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test3, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 30;

    //Act 
    int actual = testit(10, 20);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test4, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 1;

    //Act 
    int actual = testit(1, 1);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test5, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 3;

    //Act 
    int actual = testit(1, 3);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test6, ThinkingAndTestingAandB)
{
    //Arrange
    int expected = 10231;

    //Act 
    int actual = testit(9383, 886);
    
    //Assert
    // EXPECT_TRUE(actual);
    EXPECT_EQ(
        expected,
        actual
        );
}