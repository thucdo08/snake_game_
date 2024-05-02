#pragma once
#include <ctime>
#include <iostream>
#include "Header.h"
#include "Menu.h"
#include "LoadGame.h"
#include <Windows.h>

using namespace std;


void SetUpLvl();
void Draw(int, int);
void Input();
void Logic();
void drawSnFr();
void snakeGate();
void drawBox(int x, int y, int width, int height,int, int);
void level1();
void level2();
void overGame();

//void pushPause();
//void displayListPause();
//void pullPause();