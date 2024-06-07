#include "LoadGame.h"


void pushPause(int currentLevel, unsigned short playtime)
{
    ifstream ifs("pausegame.txt");
    ofstream ofs_tmp("pausegame_tmp.txt");

    if (!isLoadGame) {
        gotoXY(18,20);
        backColor(14);
        textColor(10);

        cin.clear();
        getline(cin, playerNamePause);
        if (playerNamePause.empty()) getline(cin, playerNamePause);

        isLoadGame = true;
    }

    time_t currentTimePause = time(NULL);
    char buffer[26];

    ctime_s(buffer, sizeof buffer, &currentTimePause);
    std::string dateTimePause(buffer);
    dateTimePause.pop_back();

    string updateStr = playerNamePause + " " + to_string(currentLevel) + " " + to_string(snakeLength - 3) + " " + to_string(playtime) + " " + dateTimePause + "@ " + " " + to_string(fruit.x) + " " + to_string(fruit.y) + " " + to_string(snakeLength);
    for (int i = 0; i < snakeLength; i++) {
        updateStr += " " + to_string(snake[i].x) + " " + to_string(snake[i].y);
    }

    updateStr += " " + to_string(isGate);

    string currStr;

    bool isInserted = false;
    while (getline(ifs, currStr)) {
        if (currStr.substr(0, currStr.find(' ')) == playerNamePause) {
            isInserted = true;
            ofs_tmp << updateStr << endl;
        }
        else {
            ofs_tmp << currStr << endl;
        }
    }
    
    if (!isInserted) ofs_tmp << updateStr << endl;


    ofs_tmp.close();
    ifs.close();

    remove("pausegame.txt");
    rename("pausegame_tmp.txt", "pausegame.txt");
   
    state = NONE;
}

void displayListSave() {
    ifstream ifs("pausegame.txt");
    string pName, pDate;
    int pLvl, pScore, pTime;
    gotoXY(0, 1);
    numLoad = 0;
    Position pBase = { 10, 20};
    while (ifs >> pName >> pLvl >> pScore >> pTime) {
        getline(ifs, pDate, '@');
        ifs.ignore(UINT_MAX, '\n');
        int min = pTime / 60;
        int sec = pTime % 60;

        outTextXY(14, pBase.y+(numLoad+1)*2, pName, 10);
        outNumXY(37, pBase.y+(numLoad+1)*2,pLvl, 10);
        outNumXY(52,pBase.y+(numLoad+1)*2, pScore, 10);
        outNumXY(66, pBase.y + (numLoad + 1) * 2, min, 10);
        outTextXY(67, pBase.y + (numLoad + 1) * 2, ":", 10);
        outNumXY(68, pBase.y + (numLoad + 1) * 2, sec, 10);

        outTextXY(80,pBase.y+(numLoad+1)*2, pDate, 10);
        ++numLoad;
    }
    ifs.close();
}

void getSavedData(int mainColor, int frameColor,int loadCursor, bool SFXTurnOn)
{
    ifstream ifs2("pausegame.txt");
    for (int i = 1; i < loadCursor; i++) {
        ifs2.ignore(UINT_MAX, '\n');
    }

    ifs2 >> playerNamePause;

    int currentLvl;
    ifs2 >> currentLvl;

    ifs2.ignore(UINT_MAX, ' ');
    ifs2.ignore(UINT_MAX, ' ');

    int currentPlaytime;
    ifs2 >> currentPlaytime;

    ifs2.ignore(UINT_MAX, '@');

    switch (currentLvl) {
    case 1:
        SetUpLvl();
        break;
    case 2:
        SetUpLvl2();
        break;
    case 3:
        SetUpLvl3();
        break;
    default:
        break;
    }

    dir = STOP;
    ifs2 >> fruit.x;
    ifs2 >> fruit.y;
    ifs2 >> snakeLength;
    snake.clear();
    int xTmp, yTmp;
    for (int i = 0; i < snakeLength; i++) {
        ifs2 >> xTmp >> yTmp;
        snake.push_back({ xTmp,yTmp });
    }
    
    ifs2 >> isGate;
    gameTime = currentPlaytime;

    ifs2.close();
    
    system("cls");
    isLoadGame = true;

    if (snake[0].x == snake[1].x) {
        if (snake[0].y == snake[1].y - 1) invalidLoadDir = DOWN;
        else invalidLoadDir = UP;
    }
    else {
        if (snake[0].x == snake[1].x - 1) invalidLoadDir = RIGHT;
        else invalidLoadDir = LEFT;
    }

    recordLog(to_string(invalidLoadDir));

    page = PLAY;

    switch (currentLvl) {
    case 1:
        level1(SFXTurnOn);
        break;
    case 2:
        level2(SFXTurnOn);
        break;
    case 3:
        level3(SFXTurnOn);
        break;
    default:
        exit(-1);
    }

}

void loadData(bool SFXTurnOn, bool&start) {
    int loadCursor = 1;
    while (page == LOAD) {
        outTextXY(10, 20 + loadCursor * 2, "  ", 10);

        if (state == EXIT)
            break;
        switch (dir) {
        case UP:
            if (loadCursor != 1)
                loadCursor--;
            else
                loadCursor = numLoad;
            break;
        case DOWN:
            if (loadCursor != numLoad)
                loadCursor++;
            else
                loadCursor = 1;
        default:
            break;
        }
        dir = STOP;
        outTextXY(10, 20 + loadCursor * 2, ">>", 10);
        if (state == ENTER) {
            start = false;
            toggleSound(-3);
            state = NONE;
            getSavedData(6,5,loadCursor, SFXTurnOn);
        }
        Sleep(50);
    }
}

