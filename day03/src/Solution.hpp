#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <algorithm>
#include <utility>
#include <fstream>
#include <filesystem>
#include <array>

// Splits a string in half into a pair of strings
std::pair<std::string, std::string> getCompartments(const std::string* rucksack);

// Sorts contents of a string
void sortCompartment(std::string* compartment);

// Returns the first found character that appears in two sorted strings
template<class InIt>
char getCommonItem(InIt first1, InIt last1, InIt first2, InIt last2);

// Returns the set of characters common in two sorted strings
template<class InIt, class OutIt>
void getCommonItems(InIt first1, InIt last1, InIt first2, InIt last2, OutIt intersect);

// Returns the priority of an item
int getItemPriority(const char item);

// Returns the priority of an item found in both compartments of a rucksack
int getRucksackItemPriority(const std::string* rucksack);

// Returns the sum of all priorities of items found in both compartments of provided rucksacks
int getTotalItemPriorities(const std::string* data);

// Returns the group badge priority in a group of three rucksacks
int getGroupBadgePriority(std::string* a, std::string* b, std::string* c);

// Returns the sum of all badge priorities for provided rucksacks
int getTotalGroupBadgePriorities(const std::string* data);

// Returns a string containing data read from a file
std::string readFile(const std::filesystem::path path);

#endif
