#include "Solution.hpp"

/**
 * Returns the start and end values of two comma-separated ranges in a string as a pair of int pairs.
 *
 * @param range string containing two comma-separated ranges. ex: "2-4,3-6".
 * @return a pair of start and end int pairs of the two provided ranges. ex: {{2, 4}, {3, 6}}.
 */
std::pair<std::pair<int, int>, std::pair<int, int>> getRangePairs(const std::string* range)
{
    int delimiter = range->find(",");
    std::string a = range->substr(0, delimiter);
    std::string b = range->substr(delimiter+1);

    int aSep = a.find("-");
    int bSep = b.find("-");

    int firstStart  = std::stoi(a.substr(0, aSep));
    int firstEnd    = std::stoi(a.substr(aSep+1));
    int secondStart = std::stoi(b.substr(0, bSep));
    int secondEnd   = std::stoi(b.substr(bSep+1));

    return {{firstStart, firstEnd}, {secondStart, secondEnd}};
}

/**
 * Returns whether any overlap is found between two provided ranges.
 *
 * @param a the first of the two ranges. ex: {2, 4}.
 * @param b the second of the two ranges. ex: {3, 6}.
 * @return a boolean value of whether any overlap was found or not.
 */
bool arePartiallyOverlapped(const std::pair<int, int> a, const std::pair<int, int> b)
{
    return ((a.first <= b.second && a.second >= b.first) || (b.first <= a.second && b.second >= a.first));
}

/**
 * Returns whether two provided ranges fully overlap or not.
 *
 * @param a the first of the two ranges. ex: {2, 4}.
 * @param b the second of the two ranges. ex: {3, 6}.
 * @return a boolean value of whether a full overlap was found or not.
 */
bool areFullyOverlapped(const std::pair<int, int> a, const std::pair<int, int> b)
{
    return ((a.first <= b.first && a.second >= b.second) || (b.first <= a.first && b.second >= a.second));
}

/**
 * Returns the total number of partial overlaps in range pairs provided in a string.
 *
 * @param data a new-line delimited string of range pairs. ex: "2-4,3-6\n5-8,9-14"
 * @return the total number of partially overlapping range pairs.
 */
int getTotalPartialOverlaps(const std::string* data)
{
    int total = 0;
    std::string line;
    std::istringstream stream(*data);
    while (std::getline(stream, line))
    {
        auto range = getRangePairs(&line);
        arePartiallyOverlapped(range.first, range.second) && total++;
    }
    return total;
}

/**
 * Returns the total number of full overlaps in range pairs provided in a string.
 *
 * @param data a new-line delimited string of range pairs. ex: "2-4,3-6\n5-8,9-14"
 * @return the total number of fully overlapping range pairs.
 */
int getTotalFullOverlaps(const std::string* data)
{
    int total = 0;
    std::string line;
    std::istringstream stream(*data);
    while (std::getline(stream, line))
    {
        auto range = getRangePairs(&line);
        areFullyOverlapped(range.first, range.second) && total++;
    }
    return total;
}

/**
 * Returns a string containing data read from a file.
 *
 * @param path the path of the file to read from.
 * @return the file contents as a string.
 */
std::string readFile(const std::filesystem::path path)
{
    std::ifstream file(path, std::ios::in | std::ios::binary);
    const auto size = std::filesystem::file_size(path);
    std::string result(size, '\0');
    file.read(result.data(), size);
    return result;
};
