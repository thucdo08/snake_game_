#include "Menu.h"


int Music = 1;
int CurrentMusic = 1;
bool SFXTurnOn = true;
int MusicVolume = 100;
int SFXVolume = 100;
bool start = false;

void Menu()
{
    system("cls");
    setCellSize(12, 16);
    SetConsoleWindow(1180, 700);
    HideCursor();
    cursor = NEWGAME;
    page = MENU;
    dir = eDirection::STOP;
    state = NONE;
    backgroundmenu();
    NewGameWord();
    eDirection tmpCur = STOP;
    //start();
    if (start == false&&Music!=-3) {
        toggleSound(CurrentMusic);
        setVolume(MusicVolume);
    }
    while (true) {
        switch (dir) {
        case RIGHT: {
                if (cursor == EXITGAME)
                    cursor = NEWGAME;
                else
                cursor = cursorMenu(cursor + 1);
            break;
        }
        case LEFT: {
            if (cursor == NEWGAME) {
                cursor = EXITGAME;
            }
            else
                cursor = cursorMenu(cursor - 1);

            break;
        }
        default:
            break;
        }

        if (tmpCur!=dir &&  page == MENU) {
            switch (cursor) {
            case 0:
                NewGameWord();
                break;
            case 1:
                LoadGameWord();
                break;
            case 2:
                HighScoreWord();
                break;
            case 3:
                IntroductionWord();
                break;
            case 4:
                SettingsWord();
                break;
            case 5:
                ExitWord();
                break;
            default:
                break;
            }
        }

        switch(state){
        case ENTER: {
            if (page == MENU) {
                switch (cursor) {
                case NEWGAME: {
                    system("cls");
                    state = NONE;
                    start = true;
                    chooseModeGame(SFXTurnOn, SFXVolume,start);
                    break;
                }
                case LOADGAME: {
                    //start = true;
                    drawLoadGame();
                    displayListSave();
                    page = LOAD;
                    state = NONE;
                    loadData(SFXTurnOn,start);
                    while (state != EXIT);
                    start = true;
                    Menu();
                    break;
                }
                case HIGHSCORE: {
                    drawHighScore();
                    displayHighScoreList();
                    while (state != EXIT);
                    start = true;
                    Menu();
                    break;
                }
                case INTRODUCTION: {
                    Introduction();
                    while (state != EXIT);
                    start = true;
                    Menu();
                    break;
                }
                case SETTING: {
                    SettingsMode(Music,CurrentMusic,SFXTurnOn,MusicVolume,SFXVolume,start);
                    break;
                }
                default:
                    break;
                
                }
                if (cursor == NEWGAME) {
                    system("cls");
                    page = Page::HELP;
                    level1(SFXTurnOn);
                    while (true);
                }
                else if (cursor == LOADGAME)
                {
                    system("cls");
                    page = Page::PLAY;
                    drawHighScore();
                    return;
                }
                else if (cursor == EXITGAME) {
                    CloseConsole();
                }
            }
        }
        case EXIT:
        {
            if (page != MENU)
            {
                system("cls");
                Menu();
                break;
            }
        }
        default:
            break;
        }
        state = State::NONE;
        dir = eDirection::STOP;
        Sleep(25);
    
    }
}


