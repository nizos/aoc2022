#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <fstream>
#include <filesystem>
#include <cmath>

int getRoundScore(char a, char b);
int getRoundScoreAlt(char a, char b);
int getGameScore(std::string data);
int getGameScoreAlt(std::string data);
std::string readFile(std::filesystem::path path);

#endif
