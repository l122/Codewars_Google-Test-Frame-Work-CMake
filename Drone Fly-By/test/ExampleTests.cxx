#include "../toTest.hxx"

#include <gtest/gtest.h>


TEST(Test1, MainTests)
{
    //std::vector<std::string> expected = { "*" };
    std::string expected = flyBy("xxxxxx", "====T");
    std::string actual = "ooooox";
    
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test2, MainTests)
{
    //std::vector<std::string> expected = { "*" };
    std::string expected = flyBy("xxxxxxxxx", "==T");
    std::string actual = "oooxxxxxx";
    
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test3, MainTests)
{
    //std::vector<std::string> expected = { "*" };
    std::string expected = flyBy("xxxxxxxxxxxxxxx", "=========T");
    std::string actual = "ooooooooooxxxxx";
    
    EXPECT_EQ(
        expected,
        actual
        );
}