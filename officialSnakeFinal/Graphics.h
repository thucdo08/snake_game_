#pragma once
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
#include "SetUp.h"
#include "Header.h"

using namespace std;

#define ngang 196
#define doc 179
#define goctraitren 218
#define gocphaitren 191
#define goctraiduoi 192
#define gocphaiduoi 217
#define borderColor 10
#define frameColors 0
#define backGrounds 14

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

void Art(short x_Go, short y_Go, short color1, short color2, char state, short x, short y, char ch);
void Screen(short x, short y, short h, short w);
void clockAndScore(unsigned short seconds, unsigned short scores, unsigned short foods);
void clockAndScorePVP(unsigned short seconds, unsigned short scores, unsigned short scores1);
void LevelCer(short levelNumber);
void MainScreen();
void highLightBox(short, short, short, short, short);
void ArtWin(int gotox, int gotoy, char state, int i, int j, int bcolor, int tcolor);
void DrawWin(int x, int y);
void drawMenuInGame();
void drawWhiteBoard();
void drawSaveBoard();
