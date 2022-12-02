#include <gtest/gtest.h>
#include "../src/Solution.cpp"

TEST(FirstTest, sumOfLargest)
{
    std::string fileName = "../input.txt";
    ASSERT_EQ(sumOfLargest(fileName), 71780);
}


TEST(FirstTest, sumOfLargestThree)
{
    std::string fileName = "../input.txt";
    ASSERT_EQ(sumOfLargestThree(fileName), 212489);
}
