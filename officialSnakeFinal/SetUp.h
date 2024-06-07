#pragma once
#include <string>
#include <iostream>
#include <conio.h>
#include "Header.h"
#include "HighScore.h"
using namespace std;

struct Position
{
    int x;
    int y;
};

enum eDirection { DOWN = -2, RIGHT, STOP, LEFT, UP};
enum Page { MENU, PLAY, LOAD, HELP};
enum cursorMenu { NEWGAME, LOADGAME, HIGHSCORE, INTRODUCTION, SETTING, EXITGAME };
enum State { EXIT, ENTER, NONE, PAUSE, RESUME};

extern eDirection dir,dir1;
extern Page page;
extern cursorMenu cursor;
extern State state;
extern int snakeLength, snakeLength1;
extern vector<Position> snake, snake1;
extern Position fruit;
extern unsigned short numLoad, gameTime;
extern eDirection invalidLoadDir;

extern std::string playerNamePause;
//extern unsigned short playTime;
extern bool isStart,isStart1, isEating, isPress, isLoadGame, isGate, pvpMode;

void recordLog(string msg);


void studentID(short length);
void Input();
