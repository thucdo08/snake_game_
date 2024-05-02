#include "Menu.h"


void Menu()
{
    system("cls");
    setCellSize(12, 16);
    SetConsoleWindow(1200, 700);
    HideCursor();
    cursor = NEWGAME;
    page = MENU;
    dir = eDirection::STOP;
    state = NONE;
    //for (int i = 0; i < 41; i++) {
    //    gotoXY(0,i);
    //    backColor(6);
    //    cout << " ";
    //}
    backgroundmenu();
    NewGameWord();
    eDirection tmpCur = STOP;
    //start();

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
        tmpCur = dir;

        switch(state){
        case ENTER: {
            if (page == MENU) {
                switch (cursor) {
                case NEWGAME: {
                    system("cls");
                    page = PLAY;
                    level1();
                    while (true);
                    break;
                }
                case LOADGAME: {
                    drawLoadGame();
                    displayListSave();
                    page = LOAD;
                    state = NONE;
                    loadData();
                    while (state != EXIT);
                    Menu();
                    break;
                }
                case HIGHSCORE: {
                    drawHighScore();
                    displayHighScoreList();
                    while (state != EXIT);
                    Menu();
                    break;
                }
                case INTRODUCTION: {
                    Introduction();
                    while (state != EXIT);
                    Menu();
                    break;
                }
                case SETTING: {
                    break;
                }
                default:
                    break;
                
                }
                if (cursor == NEWGAME) {

                    system("cls");
                    page = Page::HELP;
                    level1();
                    while (true);
                }
                else if (cursor == LOADGAME)
                {
                    system("cls");
                    page = Page::PLAY;
                    drawHighScore();
                    return;
                }
                else if (cursor == EXITGAME)
                    CloseConsole();
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


