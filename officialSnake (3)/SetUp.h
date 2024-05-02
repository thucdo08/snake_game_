#pragma once
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

struct Position
{
    int x;
    int y;
};

enum eDirection { STOP, DOWN, UP, RIGHT, LEFT };
enum Page { MENU, PLAY, LOAD, HELP};
enum cursorMenu { NEWGAME, LOADGAME, HIGHSCORE, INTRODUCTION, SETTING, EXITGAME };
enum State { EXIT, ENTER, NONE, PAUSE, RESUME};

extern eDirection dir;
extern Page page;
extern cursorMenu cursor;
extern State state;
extern int snakeLength;
extern Position snake[];
extern Position fruit;
extern unsigned short numLoad;

extern bool isStart, isEatingSound, isPress, isLoadGame;

void gameEnd(int score, int playTime);


void studentID(short length);
void Input();
void Sound();
