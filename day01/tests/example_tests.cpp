#include <gtest/gtest.h>
#include "../src/Example.cpp"

TEST(FirstTest, GetPhrase)
{
    Example example;
    ASSERT_EQ(example.getPhrase(), "Hello world!");
}
