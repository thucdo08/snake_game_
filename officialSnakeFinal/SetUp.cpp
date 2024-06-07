#include "SetUp.h"


// Khai báo biến và hàm liên quan đến highscore
eDirection dir = STOP, dir1 = STOP, invalidLoadDir = STOP;
bool isStart = false, isStart1 = false, isEating = false, isPress = false, isLoadGame = false, pvpMode = false;
Page page;
State state;
cursorMenu cursor;
vector<Position> snake,snake1;
int snakeLength = 0, snakeLength1 = 0;
Position fruit;
unsigned short numLoad,gameTime = 0;

void studentID(short length)
{
    string id = "2312023223120237231202222312023322120362";
    cout << id[length % 40];
}

void Input()
{
    char temp;
    while (true)
    {
        if (_kbhit())
        {
            recordLog("i " + to_string(invalidLoadDir));
            temp = tolower(_getch());
            switch (temp)
            {
            case 'w':
            {
                if ((dir != DOWN || page == MENU) && invalidLoadDir != UP) {
                    dir = UP;
                    isStart = true;
                    invalidLoadDir = STOP;
                }
                break;
            }
            case 'a':
                if ((dir != RIGHT || page == MENU) && invalidLoadDir != LEFT) {
                    dir = LEFT;
                    isStart = true;
                    invalidLoadDir = STOP;
                }
                break;
            case 's':
            {
                if ((dir != UP || page == MENU) && invalidLoadDir != DOWN) {
                    dir = DOWN;
                    isStart = true;
                    invalidLoadDir = STOP;
                }
                break;
            }
            case 'd':
                if ((dir != LEFT || page == MENU) && invalidLoadDir != RIGHT) {
                    dir = RIGHT;
                    isStart = true;
                    invalidLoadDir = STOP;
                }
                break;
            // return enter
            case char(13) :
                state = ENTER;
                break;

            // esc key
            case char(27) :
                state = EXIT;
                break;
            case 'i':
                state = PAUSE;
                break;
            case 'l':
                state = RESUME;
            }

            temp = toupper(temp);
            switch (temp)
            {
            case 72:
            {
                if (dir1 != DOWN || page == MENU)
                    dir1 = UP;
                isStart1 = true;
                break;
            }
            case 75:
                if (dir1 != RIGHT && dir1!=STOP||page==MENU)
                    dir1 = LEFT;
                break;
            case 80:
            {
                if (dir1 != UP || page == MENU)
                    dir1 = DOWN;
                isStart1 = true;
                break;
            }
            case 77:
                if (dir1 != LEFT || page == MENU)
                    dir1 = RIGHT;
                isStart1 = true;
                break;
            }
            //isStart = true;
        }
        Sleep(100);
    }
}

void recordLog(string msg) {
    ofstream ofs("activity.log", ios_base::app);

    time_t currentTime = time(NULL);
    char buffer[26];

    ctime_s(buffer, sizeof buffer, &currentTime);
    std::string dateTime(buffer);
    dateTime.pop_back();

    ofs << msg << " [" << dateTime << "]" << endl;

    ofs.close();
}