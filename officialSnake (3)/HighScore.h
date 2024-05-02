#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Header.h"

// Struct to hold player information
struct Player {
    std::string name;
    int score;
    int level;
    std::string dateTime;
};
//bool comparePlayers(const Player& a, const Player& b);

// Function to add a player to the high score list
void addPlayerToHighScore(const std::string& name, int score, int playTime, const std::string& dateTime);

// Function to display high scores
void displayHighScoreList();

#endif // HIGHSCORE_H
