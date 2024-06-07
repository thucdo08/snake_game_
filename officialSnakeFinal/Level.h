#pragma once
#include <ctime>
#include <iostream>
#include "Header.h"
#include "Menu.h"
#include "LoadGame.h"
#include <Windows.h>
#include <chrono>
#include "Setting.h"
using namespace std;


void SetUpLvl();

void Draw(int, int);
void Input();
void Logic(bool SFXTurnOn);
void drawSnake(vector<Position> sn, int k=0);
void drawFruit();
void drawBox(int x, int y, int width, int height,int, int);
void level1(bool SFXTurnOn);
void level2(bool SFXTurnOn);
void level3(bool SFXTurnOn);
void moveObstacle(unsigned short& count, int& xUPRight, int& yUPRight, int& xUPLeft, int& yUPLeft, int& xDOWNRight, int& yDOWNRight, int& xDOWNLeft, int& yDOWNLeft);

void PVPMode(bool SFXTurnOn);
void overGame(vector<Position> sn);
bool checkGameOver();
bool checkGameOver1();
void chooseModeGame(bool SFXTurnOn, int SFXVolume, bool &start);

void Logic1(bool SFXTurnOn);


void drawObstacles(int, int );
void SetUpLvl2();
void SetUpLvl3();
void SetUpPVP();
bool isObstacle(int x, int y);

short choosePause();
int chooseGameOver();
void deletePlayerLine(const std::string& playerName);
