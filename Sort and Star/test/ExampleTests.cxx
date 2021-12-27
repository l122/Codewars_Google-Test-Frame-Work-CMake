#include "../Kata.hxx"

#include <gtest/gtest.h>

TEST(Test1, twoSort)
{
    std::string expected = "b***i***t***c***o***i***n";
    std::string actual = twoSort({"bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps"});
    // std::string actual = twoSort({"a", "A", "aa", "AA", "aA", "Aa", "aAa", "AzA", " as"});

    EXPECT_EQ(
        expected,
        actual
        );
}

TEST(Test2, twoSort)
{
    std::string expected = "a***r***e";
        
    std::string actual = twoSort({"turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones"});
    
    EXPECT_EQ(
        expected,
        actual
        );
}