#pragma once
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;


void FixConsoleWindow();
void SetConsoleWindow(int width, int height);
void MoveWindow(int posx, int posy);
void MoveCenter();
void CloseConsole();
void HideCursor();
void setCellSize(int x, int y);
void highLight(int x, int y, int color);
void gotoXY(int x, int y);
void textColor(int color);
void backColor(int color);
void outTextXY(int x, int y, const char* str, int Color1);
void outTextXY(int x, int y, string str, int Color1);
void outNumXY(int x, int y, int num, int Color1);
void outTextXY1(int x, int y, const char* str, int size);

