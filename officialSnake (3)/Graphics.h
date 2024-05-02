#pragma once
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include "Header.h"

using namespace std;

void NewGameWord();
void ContinueWord();
void LoadGameWord();
void HighScoreWord();
void IntroductionWord();
void SettingsWord();
void backgroundmenu();
void ExitWord();
void Introduction();
void drawHighScore();
void drawLoadGame();


void amongus(int x, int y, int c1, int c2);
void charI(int x, int y, int c1, int c2);
void charN(int x, int y, int c1, int c2);
void charT(int x, int y, int c1, int c2);
void charR(int x, int y, int c1, int c2);
void charO(int x, int y, int c1, int c2);
void charD(int x, int y, int c1, int c2);
void charU(int x, int y, int c1, int c2);
void charC(int x, int y, int c1, int c2);
void nameMem(int x, int y);
void howToPlay(int x, int y);
void instruction(int x, int y);
void GameOverAnnounce(short sz1, short sz2, short x, short y, short color1, short color2);
void Art(short sz, short color, short x, short y);
