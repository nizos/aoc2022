#include <gtest/gtest.h>
#include "../src/Solution.cpp"

TEST(day02, getRoundScoreDrawWithRock)
{
    ASSERT_EQ(getRoundScore('A', 'X'), 4);
}

TEST(day02, getRoundScoreDrawWithPaper)
{
    ASSERT_EQ(getRoundScore('B', 'Y'), 5);
}

TEST(day02, getRoundScoreDrawWithScissors)
{
    ASSERT_EQ(getRoundScore('C', 'Z'), 6);
}

TEST(day02, getRoundScoreWinWithRock)
{
    ASSERT_EQ(getRoundScore('C', 'X'), 7);
}

TEST(day02, getRoundScoreWinWithPaper)
{
    ASSERT_EQ(getRoundScore('A', 'Y'), 8);
}

TEST(day02, getRoundScoreWinWithScissors)
{
    ASSERT_EQ(getRoundScore('B', 'Z'), 9);
}

TEST(day02, getRoundScoreLoseWithRock)
{
    ASSERT_EQ(getRoundScore('B', 'X'), 1);
}

TEST(day02, getRoundScoreLoseWithPaper)
{
    ASSERT_EQ(getRoundScore('C', 'Y'), 2);
}

TEST(day02, getRoundScoreLoseWithScissors)
{
    ASSERT_EQ(getRoundScore('A', 'Z'), 3);
}

TEST(day02, getGameScore)
{
    std::string data = readFile("../input.txt");
    ASSERT_EQ(getGameScore(data), 12586);
}

TEST(day02, getRoundScoreAltRockDraw)
{
    ASSERT_EQ(getRoundScoreAlt('A', 'Y'), 4);
}

TEST(day02, getRoundScoreAltPaperLose)
{
    ASSERT_EQ(getRoundScoreAlt('B', 'X'), 1);
}

TEST(day02, getRoundScoreAltScissorsWin)
{
    ASSERT_EQ(getRoundScoreAlt('C', 'Z'), 7);
}

TEST(day02, getGameScoreAlt)
{
    std::string data = readFile("../input.txt");
    ASSERT_EQ(getGameScoreAlt(data), 13193);
}
