#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include <numeric>
#include <iterator>

int part_01();
int part_02();

int main()
{
	// Solutions
	std::cout << part_01() << std::endl;
	std::cout << part_02() << std::endl;

	return 0;
}

int part_01()
{
	// Show largest sum of calories
	int max, current = 0;
	std::string file = "../input.txt";
	std::ifstream dataFile;

	dataFile.open(file);
	if (dataFile.is_open())
	{
		std::string line;
		while (getline(dataFile, line))
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
		dataFile.close();
	}

	return max;
}

int part_02()
{
	// Show total of 3 largest calorie sums
	int current = 0;
	std::string file = "../input.txt";
	std::ifstream dataFile;
	std::multiset<int> mset;

	dataFile.open(file);
    if (dataFile.is_open())
    {
		std::string line;
        while(getline(dataFile, line))
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
        dataFile.close();
    }

	int sum = std::accumulate(mset.rbegin(), std::next(mset.rend(), 4), 0);
	return sum;
}