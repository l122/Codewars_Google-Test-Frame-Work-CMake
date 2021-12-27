#include "../Kata.hxx"

#include <gtest/gtest.h>

TEST(Test1, multi_table)
{
    std::string actual = multi_table(5);
        
    std::string expected = "1 * 5 = 5\n"
                            "2 * 5 = 10\n"
                            "3 * 5 = 15\n"
                            "4 * 5 = 20\n"
                            "5 * 5 = 25\n"
                            "6 * 5 = 30\n"
                            "7 * 5 = 35\n"
                            "8 * 5 = 40\n"
                            "9 * 5 = 45\n"
                            "10 * 5 = 50";
    
    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test2, multi_table)
{
    std::string actual = multi_table(1);
        
    std::string expected = "1 * 1 = 1\n"
                        "2 * 1 = 2\n"
                        "3 * 1 = 3\n"
                        "4 * 1 = 4\n"
                        "5 * 1 = 5\n"
                        "6 * 1 = 6\n"
                        "7 * 1 = 7\n"
                        "8 * 1 = 8\n"
                        "9 * 1 = 9\n"
                        "10 * 1 = 10";
    
    EXPECT_EQ(
        expected,
        actual
        );
}