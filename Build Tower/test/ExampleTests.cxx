#include "../Kata.hxx"

#include <gtest/gtest.h>

TEST(Test1, towerBuilder)
{
    std::vector<std::string> expected = { "*" };
        
    Kata kata;
    std::vector<std::string> actual = kata.towerBuilder(1);
    
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test2, towerBuilder)
{
    std::vector<std::string> expected = { " * ", "***" };
        
        Kata kata;
        std::vector<std::string> actual = kata.towerBuilder(2);
    
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test3, towerBuilder)
{
    std::vector<std::string> expected = { "  *  ", " *** ", "*****" };
        
        Kata kata;
        std::vector<std::string> actual = kata.towerBuilder(3);
    
    EXPECT_EQ(
        expected,
        actual
        );
}