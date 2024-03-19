#pragma once
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

enum eDirection { STOP, DOWN, UP, RIGHT, LEFT, ENTER, EXIT };
enum Page { MENU, PLAY, HELP, LOADGAME};
enum cursorMenu { NEWGAME, curHELP, SETTING, RANKING, EXITGAME };

extern eDirection dir;
extern Page page;
extern cursorMenu cursor;

extern bool isStart;


void studentID(short length);
