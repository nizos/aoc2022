#include <iostream>
#include <string>
#include "Solution.hpp"


int main()
{
    // Input
    std::string data = readFile("../input.txt");

    // Solution to part 01
    std::cout << "Solution to part 01" << std::endl;
    std::cout << "Items total: " << getTotalItemPriorities(&data) << std::endl << std::endl;

    // Solution to part 02
    std::cout << "Solution to part 02" << std::endl;
    std::cout << "Badges total: " << getTotalGroupBadgePriorities(&data) << std::endl;

    return 0;
}
