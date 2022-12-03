#include "Solution.hpp"

/**
 * Splits a string in half into a pair of strings.
 *
 * @param rucksack a reference to the string from which to create the pair of strings.
 * @return a pair of strings.
 */
std::pair<std::string, std::string> getCompartments(const std::string* rucksack)
{
    std::string comp1 = rucksack->substr(0, rucksack->length()/2);
    std::string comp2 = rucksack->substr(rucksack->length()/2);
    return std::make_pair(comp1, comp2);
}

/**
 * Sorts contents of a string.
 *
 * @param compartment a reference to the string to sort.
 */
void sortCompartment(std::string* compartment)
{
    std::sort(begin(*compartment), end(*compartment));
}

/**
 * Returns the first found character that appears in two sorted strings.
 *
 * @param first1 the beginning of the first element.
 * @param last1 the end of the first element.
 * @param first2 the beginning of second element.
 * @param last2 the end of second element.
 * @return the first encountered character common in both.
 */
template<class It>
char getCommonItem(It first1, It last1, It first2, It last2)
{
    char match;
    while (first1 != last1 && first2 != last2) {
        if (*first1 < *first2) {
            ++first1;
        } else  {
            if (!(*first2 < *first1)) {
                match = *first1;
                break;
            }
            ++first2;
        }
    }
    return match;
}

/**
 * Returns the priority of an item.
 *
 * @param item a char: a-z, A-Z.
 * @return the integer representing the priority of the item.
 */
int getItemPriority(char item)
{
    return (item > 90) ? item-96 : item-38;
}

/**
 * Returns the priority of an item found in both compartments of a rucksack.
 *
 * @param rucksack a string of characters.
 * @return the integer representing the priority of the found item.
 */
int getRucksackTotal(const std::string* rucksack)
{
    // Split rucksack into compartments
    std::pair<std::string, std::string> c = getCompartments(rucksack);

    // Sort items in compartments
    sortCompartment(&c.first);
    sortCompartment(&c.second);

    // Get common item in compartments
    char item = getCommonItem(begin(c.first), end(c.first), begin(c.second), end(c.second));

    // Return item priority
    return getItemPriority(item);
}

/**
 * Returns the sum of all priorities of items found in both compartments of provided rucksacks.
 *
 * @param data a new-line delimited string of rucksacks.
 * @return the sum of all priorities of found items.
 */
int getTotal(const std::string* data)
{
    int total = 0;
    std::string line;
    std::istringstream stream(*data);
    while (std::getline(stream, line))
    {
        total += getRucksackTotal(&line);
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
