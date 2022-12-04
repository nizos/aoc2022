#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <utility>
#include <fstream>
#include <filesystem>

// Returns the start and end values of two comma-separated ranges in a string as a pair of int pairs
std::pair<std::pair<int, int>, std::pair<int, int>> getRangePairs(const std::string* range);

// Returns whether any overlap is found between two provided ranges
bool arePartiallyOverlapped(const std::pair<int, int> a, const std::pair<int, int> b);

// Returns whether two provided ranges fully overlap or not
bool areFullyOverlapped(const std::pair<int, int> a, const std::pair<int, int> b);

// Returns the total number of partial overlaps in range pairs provided in a string
int getTotalPartialOverlaps(const std::string* data);

// Returns the total number of full overlaps in range pairs provided in a string
int getTotalFullOverlaps(const std::string* data);

// Returns a string containing data read from a file
std::string readFile(const std::filesystem::path path);

#endif
