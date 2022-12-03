#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <algorithm>
#include <utility>
#include <fstream>
#include <filesystem>

// Splits a string in half into a pair of strings
std::pair<std::string, std::string> getCompartments(const std::string* rucksack);

// Sorts contents of a string
void sortCompartment(std::string* compartment);

// Returns the first found character that appears in two sorted strings
template<class It>
char getCommonItem(It first1, It last1, It first2, It last2);

// Returns the priority of an item
int getItemPriority(const char item);

// Returns the priority of an item found in both compartments of a rucksack
int getRucksackTotal(const std::string* rucksack);

// Returns the sum of all priorities of items found in both compartments of provided rucksacks
int getTotal(const std::string* data);

// Returns a string containing data read from a file
std::string readFile(const std::filesystem::path path);

#endif
