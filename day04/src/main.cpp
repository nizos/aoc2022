#include <iostream>
#include <string>
#include "Solution.hpp"


int main()
{
    // Input
    std::string data = readFile("../input.txt");

    // Solution to part 01
    std::cout << "Solution to part 01" << std::endl;
    std::cout << "Total full overlaps: " << getTotalFullOverlaps(&data) << std::endl << std::endl;

    // Solution to part 02
    std::cout << "Solution to part 02" << std::endl;
    std::cout << "Total partial overlaps: " << getTotalPartialOverlaps(&data) << std::endl;

    return 0;
}
