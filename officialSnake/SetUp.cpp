#include "SetUp.h"
#include "Header.h"

eDirection dir;
bool isStart = false;
Page page;
cursorMenu cursor;

void studentID(short length)
{
    string id = "23120232";
    cout << id[length % 8];
}

void Input()
{
        //cout<<"Press W, A, S, D to move, J to enter, E to exit";
    if (_kbhit())
    {
        isStart = true;
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
            if (dir != RIGHT)
                dir = LEFT;
            break;
        case 's': {
            if (dir != UP || page == MENU)
                dir = DOWN;
            break;
        }
        case 'd':
            if (dir != LEFT)
                dir = RIGHT;
            break;
        case 'j':
            dir = ENTER;
            break;
        case 'e':
            dir = EXIT;
            break;
        }
    }
}
