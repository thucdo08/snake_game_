#include "LoadGame.h"

void pushPause(int currentLevel)
{
    string playerNamePause;
    cout << "Game paused! Enter your name: ";

    ifstream ifs("pausegame.txt");
    ofstream ofs_tmp("pausegame_tmp.txt");

    cin.clear();
    getline(cin, playerNamePause);
    if (playerNamePause.empty()) getline(cin, playerNamePause);

    time_t currentTimePause = time(NULL);
    char buffer[26];

    ctime_s(buffer, sizeof buffer, &currentTimePause);
    std::string dateTimePause(buffer);
    dateTimePause.pop_back();

    string updateStr = playerNamePause + " " + to_string(currentLevel) + " " + to_string(snakeLength - 3) + " " + dateTimePause + "@ " + " " + to_string(fruit.x) + " " + to_string(fruit.y) + " " + to_string(snakeLength);
    for (int i = 0; i < snakeLength; i++) {
        updateStr += " " + to_string(snake[i].x) + " " + to_string(snake[i].y);
    }

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
    int pLvl, pScore;
    gotoXY(0, 1);
    numLoad = 0;
    Position pBase = { 10, 20};
    while (ifs >> pName >> pLvl >> pScore) {
        getline(ifs, pDate, '@');
        ifs.ignore(UINT_MAX, '\n');
        //cout << stt << " " << pName << " " << pLvl << " " << pScore << " " << pDate << endl;
        outTextXY(14, pBase.y+(numLoad+1)*2, pName, 10);
        outNumXY(36, pBase.y+(numLoad+1)*2,pLvl, 10);
        outNumXY(60,pBase.y+(numLoad+1)*2, pScore, 10);
        outTextXY(80,pBase.y+(numLoad+1)*2, pDate, 10);
        ++numLoad;
    }
    ifs.close();
}

void getSavedData(int mainColor, int frameColor,int loadCursor)
{

    ifstream ifs2("pausegame.txt");
    for (int i = 1; i < loadCursor; i++) {
        ifs2.ignore(UINT_MAX, '\n');
    }

    SetUpLvl();

    ifs2.ignore(UINT_MAX, '@');

    dir = STOP;
    ifs2 >> fruit.x;
    ifs2 >> fruit.y;
    ifs2 >> snakeLength;
    for (int i = 0; i < snakeLength; i++) {
        ifs2 >> snake[i].x >> snake[i].y;
    }
    
    ifs2.close();
    state = NONE;
    system("cls");
    isLoadGame = true;
    page = PLAY;
    level1();
}

void loadData() {
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
            state = NONE;
            getSavedData(6,5,loadCursor);
        }
        Sleep(50);
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