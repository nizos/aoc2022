#include <gtest/gtest.h>
#include "../src/Solution.cpp"

TEST(day03, getCompartmentsOne)
{
    std::string rucksack = "vJrwpWtwJgWrhcsFMMfFFhFp";
    std::pair<std::string, std::string> compartments = {"vJrwpWtwJgWr", "hcsFMMfFFhFp"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, getCompartmentsTwo)
{
    std::string rucksack = "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL";
    std::pair<std::string, std::string> compartments = {"jqHRNqRjqzjGDLGL", "rsFMfFZSrLrFZsSL"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, getCompartmentsThree)
{
    std::string rucksack = "PmmdzqPrVvPwwTWBwg";
    std::pair<std::string, std::string> compartments = {"PmmdzqPrV", "vPwwTWBwg"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, getCompartmentsFour)
{
    std::string rucksack = "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn";
    std::pair<std::string, std::string> compartments = {"wMqvLMZHhHMvwLH", "jbvcjnnSBnvTQFn"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, getCompartmentsFive)
{
    std::string rucksack = "ttgJtRGJQctTZtZT";
    std::pair<std::string, std::string> compartments = {"ttgJtRGJ", "QctTZtZT"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, getCompartmentsSix)
{
    std::string rucksack = "CrZsJsPPZsGzwwsLwLmpwMDw";
    std::pair<std::string, std::string> compartments = {"CrZsJsPPZsGz", "wwsLwLmpwMDw"};
    ASSERT_EQ(getCompartments(&rucksack), compartments);
}

TEST(day03, sortCompartmentFirst)
{
    std::string original = "vJrwpWtwJgWr";
    std::string expected = "JJWWgprrtvww";
    sortCompartment(&original);
    ASSERT_EQ(original, expected);
}

TEST(day03, sortCompartmentSecond)
{
    std::string original = "hcsFMMfFFhFp";
    std::string expected = "FFFFMMcfhhps";
    sortCompartment(&original);
    ASSERT_EQ(original, expected);
}

TEST(day03, getItemPrioritySmallA)
{
    ASSERT_EQ(getItemPriority('a'), 1);
}

TEST(day03, getItemPrioritySmallZ)
{
    ASSERT_EQ(getItemPriority('z'), 26);
}

TEST(day03, getItemPriorityCapitalA)
{
    ASSERT_EQ(getItemPriority('A'), 27);
}

TEST(day03, getItemPriorityCapitalZ)
{
    ASSERT_EQ(getItemPriority('Z'), 52);
}


TEST(day03, getRucksackTotalOne)
{
    std::string rucksack = "vJrwpWtwJgWrhcsFMMfFFhFp";
    ASSERT_EQ(getRucksackTotal(&rucksack), 16);
}

TEST(day03, getRucksackTotalTwo)
{
    std::string rucksack = "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL";
    ASSERT_EQ(getRucksackTotal(&rucksack), 38);
}

TEST(day03, getRucksackTotalThree)
{
    std::string rucksack = "PmmdzqPrVvPwwTWBwg";
    ASSERT_EQ(getRucksackTotal(&rucksack), 42);
}


TEST(day03, getRucksackTotalFour)
{
    std::string rucksack = "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn";
    ASSERT_EQ(getRucksackTotal(&rucksack), 22);
}


TEST(day03, getRucksackTotalFive)
{
    std::string rucksack = "ttgJtRGJQctTZtZT";
    ASSERT_EQ(getRucksackTotal(&rucksack), 20);
}


TEST(day03, getRucksackTotalSix)
{
    std::string rucksack = "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getRucksackTotal(&rucksack), 19);
}

TEST(day03, getTotal)
{
    std::string data = "vJrwpWtwJgWrhcsFMMfFFhFp\n";
    data += "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL\n";
    data += "PmmdzqPrVvPwwTWBwg\n";
    data += "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn\n";
    data += "ttgJtRGJQctTZtZT\n";
    data += "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getTotal(&data), 157);
}
