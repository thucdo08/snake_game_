﻿#pragma once
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;


void FixConsoleWindow();
void setConsoleWindow(int width, int height);
void MoveWindow(int posx, int posy);
void MoveCenter();
void highLight(int x, int y, int color);
void gotoXY(int x, int y);
void textColor(int color);
void backColor(int color);
