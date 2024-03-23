#include "SetUp.h"
#include "Header.h"
#include "Sound.h"

eDirection dir = STOP, preDir = STOP;
bool isStart, isEatingSound = false, isPress = false;
Page page;
State state;
cursorMenu cursor;

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
                break;
            }
            case 'a':
                if (dir != RIGHT && isStart)
                    dir = LEFT;
                break;
            case 's':
            {
                if (dir != UP || page == MENU)
                    dir = DOWN;
                break;
            }
            case 'd':
                if (dir != LEFT)
                    dir = RIGHT;
                break;
            case char(13):
                state = ENTER;
                break;
            case char(27):
                state = EXIT;
                break;
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