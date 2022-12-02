#include <iostream>
#include <string>
#include "Solution.hpp"


int main()
{
    // Input file
    std::string fileName = "../input.txt";

    // Solution to part 01
    std::cout << "Sum of largest: " << sumOfLargest(fileName) << std::endl;

    // Solution to part 02
    std::cout << "Sum of largest three: "<< sumOfLargestThree(fileName) << std::endl;

    return 0;
}
