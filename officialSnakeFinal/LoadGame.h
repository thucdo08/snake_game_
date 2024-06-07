#pragma once
#include "Level.h"
#include "Header.h"
#include "SetUp.h"
#include <Windows.h>
#include <fstream>
#include "Setting.h"

using namespace std;

void pushPause(int currentLevel, unsigned short playTime);
void displayListSave();
void getSavedData(int mainColor, int frameColor,int loadCursor, bool SFXTurnOn);
void loadData(bool SFXTurnOn, bool &start);
