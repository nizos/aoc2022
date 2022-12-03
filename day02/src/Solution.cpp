#include "Solution.hpp"

int getRoundScore(char a, char b)
{
    // Shapes: 1 = Rock, 2 = Paper, 3 = Scissors
    int aShape = a-64; // A -> 1, B -> 2, C -> 3
    int bShape = b-87; // X -> 1, Y -> 2, Z -> 3

    // Round result: 0 = Draw, 1 = Lose, 2 = Win
    int result = ((aShape - bShape) % 3 + 3) % 3;

    // Round score: Draw = 3 + Shape, Lose = 0 + Shape, Win = 6 + Shape
    return (3 - result + 1) % 3 * 3 + bShape;
};

int getRoundScoreAlt(char a, char b)
{
    // Shape: 1 = Rock, 2 = Paper, 3 = Scissors
    int shape = a-64; // A -> 1, B -> 2, C -> 3

    // Strategy: 1 = Lose, 2 = Draw, 3 = Win
    int strategy = b-87; // X -> 1, Y -> 2, Z -> 3

    // Pick: X = Rock, Y = Paper, Z = Scissors
    int pick = 'X'+((shape + strategy) % 3);

    // Round score using picked shape
    return getRoundScore(a, pick);
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
