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

TEST(day03, getCommonItem)
{
    std::string a = "abcdefghijklmn";
    std::string b = "mnopqrstuvwxyz";
    char item = getCommonItem(begin(a), end(a), begin(b), end(b));
    ASSERT_EQ(item, 'm');
}

TEST(day03, getCommonItems)
{
    std::string a = "abcdefghijklmn";
    std::string b = "mnopqrstuvwxyz";
    std::string common;
    getCommonItems(begin(a), end(a), begin(b), end(b), std::back_inserter(common));
    ASSERT_EQ(common, "mn");
}


TEST(day03, getRucksackItemPriorityOne)
{
    std::string rucksack = "vJrwpWtwJgWrhcsFMMfFFhFp";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 16);
}

TEST(day03, getRucksackItemPriorityTwo)
{
    std::string rucksack = "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 38);
}

TEST(day03, getRucksackItemPriorityThree)
{
    std::string rucksack = "PmmdzqPrVvPwwTWBwg";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 42);
}


TEST(day03, getRucksackItemPriorityFour)
{
    std::string rucksack = "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 22);
}


TEST(day03, getRucksackItemPriorityFive)
{
    std::string rucksack = "ttgJtRGJQctTZtZT";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 20);
}


TEST(day03, getRucksackItemPrioritySix)
{
    std::string rucksack = "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getRucksackItemPriority(&rucksack), 19);
}

TEST(day03, getTotalItemPriorities)
{
    std::string data = "vJrwpWtwJgWrhcsFMMfFFhFp\n";
    data += "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL\n";
    data += "PmmdzqPrVvPwwTWBwg\n";
    data += "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn\n";
    data += "ttgJtRGJQctTZtZT\n";
    data += "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getTotalItemPriorities(&data), 157);
}

TEST(day03, getGroupBadgePriorityOne)
{
    std::string a = "vJrwpWtwJgWrhcsFMMfFFhFp";
    std::string b = "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL";
    std::string c = "PmmdzqPrVvPwwTWBwg";
    ASSERT_EQ(getGroupBadgePriority(&a, &b, &c), 18);
}

TEST(day03, getGroupBadgePriorityTwo)
{
    std::string a = "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn";
    std::string b = "ttgJtRGJQctTZtZT";
    std::string c = "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getGroupBadgePriority(&a, &b, &c), 52);
}


TEST(day03, getTotalGroupBadgePriorities)
{
    std::string data = "vJrwpWtwJgWrhcsFMMfFFhFp\n";
    data += "jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL\n";
    data += "PmmdzqPrVvPwwTWBwg\n";
    data += "wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn\n";
    data += "ttgJtRGJQctTZtZT\n";
    data += "CrZsJsPPZsGzwwsLwLmpwMDw";
    ASSERT_EQ(getTotalGroupBadgePriorities(&data), 70);
}