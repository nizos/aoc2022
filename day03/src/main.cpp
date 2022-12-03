#include <iostream>
#include <string>
#include "Solution.hpp"


int main()
{
    // Input
    std::string data = readFile("../input.txt");

    // Solution to part 01
    std::cout << "Solution to part 01" << std::endl;
    std::cout << "Total: " << getTotal(&data) << std::endl << std::endl;

    return 0;
}
