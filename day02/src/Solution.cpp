#include "Solution.hpp"

int getRoundScore(char a, char b)
{
    int score = 0;
    int aVal = a-64; // Opponent
    int bVal = b-87; // Player
    int result = ((aVal - bVal) % 3 + 3) % 3;
    switch (result)
    {
        case 0:
            score = 3 + bVal;
            break;
        case 1:
            score = bVal;
            break;
        case 2:
            score = 6 + bVal;
            break;
    }
    return score;
};

int getRoundScoreAlt(char a, char b)
{
    int aVal = a-64; // Opponent
    int bVal = b-87; // Strategy
    int result = (aVal + bVal) % 3;
    return getRoundScore(a, 'X'+result);
};

int getGameScore(std::string data)
{
    int total = 0;
    std::string line;
    std::istringstream stream(data);
    while (std::getline(stream, line))
    {
        total += getRoundScore(line[0], line[2]);
    }
    return total;
};

int getGameScoreAlt(std::string data)
{
    int total = 0;
    std::string line;
    std::istringstream stream(data);
    while (std::getline(stream, line))
    {
        total += getRoundScoreAlt(line[0], line[2]);
    }
    return total;
};

std::string readFile(std::filesystem::path path)
{
    std::ifstream file(path, std::ios::in | std::ios::binary);
    const auto size = std::filesystem::file_size(path);
    std::string result(size, '\0');
    file.read(result.data(), size);
    return result;
};
