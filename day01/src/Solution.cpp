#include "Solution.hpp"

int sumOfLargest(std::string fileName)
{
    // Show largest sum of calories
    int max, current = 0;
    std::ifstream file;

    file.open(fileName);
    if (file.is_open())
    {
        std::string line;
        while (getline(file, line))
        {
            if (line.empty())
            {
                if (current > max)
                {
                    max = current;
                }
                current = 0;
            }
            else
            {
                current += std::stoi(line);
            }
        }
        file.close();
    }

    return max;
};

int sumOfLargestThree(std::string fileName)
{
    // Show total of 3 largest calorie sums
    int current = 0;
    std::ifstream file;
    std::multiset<int> mset;

    file.open(fileName);
    if (file.is_open())
    {
        std::string line;
        while(getline(file, line))
        {
            if (line.empty())
            {
                mset.insert(current);
                current = 0;
            }
            else
            {
                current += std::stoi(line);
            }
        }
        file.close();
    }

    int sum = std::accumulate(mset.rbegin(), std::next(mset.rend(), 4), 0);
    return sum;
};