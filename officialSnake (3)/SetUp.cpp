#include "SetUp.h"
#include "Header.h"
#include "Sound.h"
#include "HighScore.h"

// Khai báo biến và hàm liên quan đến highscore
eDirection dir = STOP, preDir = STOP;
bool isStart, isEatingSound = false, isPress = false, isLoadGame = false;
Page page;
State state;
cursorMenu cursor;
Position snake[100];
int snakeLength = 0;
Position fruit;
unsigned short numLoad;

void studentID(short length)
{
    string id = "2312023223120237231202222312023322120362";
    cout << id[length % 8];
}

void Input()
{
    while (true)
    {
        if (_kbhit())
        {
            char temp = tolower(_getch());
            switch (temp)
            {
            case 'w':
            {
                if (dir != DOWN || page == MENU)
                    dir = UP;
                isStart = true;
                break;
            }
            case 'a':
                if (dir != RIGHT && dir!=STOP||page==MENU)
                    dir = LEFT;
                break;
            case 's':
            {
                if (dir != UP || page == MENU)
                    dir = DOWN;
                isStart = true;
                break;
            }
            case 'd':
                if (dir != LEFT) dir = RIGHT;
                isStart = true;
                break;

            // return enter
            case char(13) :
                state = ENTER;
                break;

            // esc key
            case char(27) :
                state = EXIT;
                break;
            case 'p':
                state = PAUSE;
                break;
            case 'l':
                state = RESUME;
            }
            isStart = true;
        }
        Sleep(100);
    }
}

void Sound()
{
    while (true)
    {
        if (isEatingSound)
            playEatingSound();
    }
}

