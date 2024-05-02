#pragma once
#include "Level.h"
#include "Header.h"
#include "SetUp.h"
#include <Windows.h>
#include <fstream>

using namespace std;

void pushPause(int currentLevel);
void displayListSave();
void getSavedData(int mainColor, int frameColor,int loadCursor);
void loadData();
void recordLog(string msg);