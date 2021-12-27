#include "../Kata.hxx"

#include <gtest/gtest.h>



TEST(Test1, chessBoardCellColor)
{
    //Arrange
    bool expected = true;

    //Act 
    bool actual = chessBoardCellColor("A1","C3");
    
    //Assert
    EXPECT_TRUE(actual);
    // EXPECT_EQ(
    //     expected,
    //     actual
    //     );
}

TEST(Test2, chessBoardCellColor)
{
    //Arrange
    bool expected = false;

    //Act 
    bool actual = chessBoardCellColor("D5","B4");
    
    //Assert
    EXPECT_FALSE(actual);
    // EXPECT_EQ(
    //     expected,
    //     actual
    //     );
}

TEST(Test3, chessBoardCellColor)
{
    //Arrange
    bool expected = false;

    //Act 
    bool actual = chessBoardCellColor("C3","H7");
    
    //Assert
    EXPECT_FALSE(actual);
    // EXPECT_EQ(
    //     expected,
    //     actual
    //     );
}

TEST(Test4, chessBoardCellColor)
{
    //Arrange
    bool expected = true;

    //Act 
    bool actual = chessBoardCellColor("H1","A8");
    
    //Assert
    EXPECT_TRUE(actual);
    // EXPECT_EQ(
    //     expected,
    //     actual
    //     );
}

TEST(Test5, chessBoardCellColor)
{
    //Arrange
    bool expected = true;

    //Act 
    bool actual = chessBoardCellColor("A1","H8");
    
    //Assert
    EXPECT_TRUE(actual);
    // EXPECT_EQ(
    //     expected,
    //     actual
    //     );
}