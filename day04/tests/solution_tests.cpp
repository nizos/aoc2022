#include <gtest/gtest.h>
#include "../src/Solution.cpp"

#include <iostream>

TEST(getRangePairs, singleDigits)
{
    std::string range = "2-4,6-8";
    std::pair<int, int> first  = std::make_pair(2, 4);
    std::pair<int, int> second = std::make_pair(6, 8);
    std::pair<std::pair<int,int>, std::pair<int,int>> res = std::make_pair(first, second);
    ASSERT_EQ(getRangePairs(&range), res);
}

TEST(getRangePairs, doubleDigits)
{
    std::string range = "24-41,60-89";
    std::pair<int, int> first  = std::make_pair(24, 41);
    std::pair<int, int> second = std::make_pair(60, 89);
    std::pair<std::pair<int,int>, std::pair<int,int>> res = std::make_pair(first, second);
    ASSERT_EQ(getRangePairs(&range), res);
}

TEST(getRangePairs, mixedDigits)
{
    std::string range = "2-41,6-8";
    std::pair<int, int> first  = std::make_pair(2, 41);
    std::pair<int, int> second = std::make_pair(6, 8);
    std::pair<std::pair<int,int>, std::pair<int,int>> res = std::make_pair(first, second);
    ASSERT_EQ(getRangePairs(&range), res);
}

TEST(arePartiallyOverlapped, noOverlapOne)
{
    // 2-4, 6-8
    std::pair<int, int> a = std::make_pair(2, 4);
    std::pair<int, int> b = std::make_pair(6, 8);
    ASSERT_EQ(arePartiallyOverlapped(a, b), false);
}

TEST(arePartiallyOverlapped, noOverlapTwo)
{
    // 2-3, 4-5
    std::pair<int, int> a = std::make_pair(2, 3);
    std::pair<int, int> b = std::make_pair(4, 5);
    ASSERT_EQ(arePartiallyOverlapped(a, b), false);
}

TEST(arePartiallyOverlapped, smallerFirst)
{
    // 5-7, 7-9
    std::pair<int, int> a = std::make_pair(5, 7);
    std::pair<int, int> b = std::make_pair(7, 9);
    ASSERT_EQ(arePartiallyOverlapped(a, b), true);
}

TEST(arePartiallyOverlapped, fullOverlap)
{
    // 2-8, 3-7
    std::pair<int, int> a = std::make_pair(2, 8);
    std::pair<int, int> b = std::make_pair(3, 7);
    ASSERT_EQ(arePartiallyOverlapped(a, b), true);
}

TEST(arePartiallyOverlapped, largerFirst)
{
    // 6-6, 4-6
    std::pair<int, int> a = std::make_pair(6, 6);
    std::pair<int, int> b = std::make_pair(4, 6);
    ASSERT_EQ(arePartiallyOverlapped(a, b), true);
}

TEST(arePartiallyOverlapped, multipleOverlap)
{
    // 2-6, 4-8
    std::pair<int, int> a = std::make_pair(2, 6);
    std::pair<int, int> b = std::make_pair(4, 8);
    ASSERT_EQ(arePartiallyOverlapped(a, b), true);
}


TEST(areFullyOverlapped, noOverlap)
{
    // 2-4, 6-8
    std::pair<int, int> a = std::make_pair(2, 4);
    std::pair<int, int> b = std::make_pair(6, 8);
    ASSERT_EQ(areFullyOverlapped(a, b), false);
}

TEST(areFullyOverlapped, fullOverlap)
{
    // 2-8, 3-7
    std::pair<int, int> a = std::make_pair(2, 8);
    std::pair<int, int> b = std::make_pair(3, 7);
    ASSERT_EQ(areFullyOverlapped(a, b), true);
}

TEST(areFullyOverlapped, smallerFirstPartialOverlap)
{
    // 2-8, 7-9
    std::pair<int, int> a = std::make_pair(2, 8);
    std::pair<int, int> b = std::make_pair(7, 9);
    ASSERT_EQ(areFullyOverlapped(a, b), false);
}

TEST(areFullyOverlapped, largerFirstPartialOverlap)
{
    // 7-9, 2-8
    std::pair<int, int> a = std::make_pair(7, 9);
    std::pair<int, int> b = std::make_pair(2, 8);
    ASSERT_EQ(areFullyOverlapped(a, b), false);
}

TEST(day04, getTotalFullOverlaps)
{
    std::string data;
    data  = "2-4,6-8\n";
    data += "2-3,4-5\n";
    data += "5-7,7-9\n";
    data += "2-8,3-7\n"; // overlap
    data += "6-6,4-6\n"; // overlap
    data += "2-6,4-8\n";
    ASSERT_EQ(getTotalFullOverlaps(&data), 2);
}
