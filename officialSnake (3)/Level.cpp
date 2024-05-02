#include "Level.h"
#include "SetUp.h"
#include "Sound.h"
#include "HighScore.h" 


bool gameOver, isGate, isSnakeGoToGate;
// bool isStart;
int xBase, yBase, widthBase, heightBase;
//Position fruit;
//Position snake[100];
//int snakeLength;
Position preSnake;
Position Gate;
int mainColor, frameColor;
int currentLevel = 1;
bool resume = true;

void level1() {
    srand(time(NULL));
    setCellSize(15, 15);
    SetConsoleWindow(1200, 700);
    HideCursor();
    gameOver = false;
    if (!isLoadGame) SetUpLvl();
    resume = false;
    mainColor = 6;
    frameColor = 5;
    currentLevel = 1;
    //outTextXY(3, 3, "can draw", 10);
    Draw(mainColor, frameColor);

    clock_t startTime = clock(); // Bắt đầu đếm thời gian
    while (!gameOver) {
        Logic();
        gotoXY(0, 0);
        textColor(1);
        cout << "Score: " << snakeLength - 3;
        isEatingSound = false;
        drawSnFr();
        if (isGate && snake[snakeLength - 1].x == Gate.x && snake[snakeLength - 1].y == Gate.y) {
            Sleep(1000);
            system("cls");
            level2();
        }
        if (state == EXIT) {
            state = NONE;
            Menu();
        }
        if (state == PAUSE) {
            pushPause(currentLevel);
            state = EXIT;
        }
        Sleep(100);
    }
    overGame();
    isLoadGame = false;
    GameOverAnnounce(15,15,20,15,0,14);

    clock_t endTime = clock(); // Kết thúc đếm thời gian
    int gameTime = static_cast<int>((endTime - startTime) / CLOCKS_PER_SEC / 60); // Tính thời gian chơi (phút)

    // Lấy ngày và giờ chơi hiện tại
    time_t currentTime = time(NULL);
    char buffer[26];
    ctime_s(buffer, sizeof buffer,&currentTime);
    std::string dateTime(buffer);

    // Game over, yêu cầu nhập tên người chơi và thêm vào high score list
    string playerName;
    outTextXY(20, 38, "Game over! Enter your name: ", 10);
    
    cin.clear();
    getline(cin, playerName);
    if (playerName.empty()) getline(cin, playerName);

    addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, dateTime); // Thêm ngày và giờ chơi vào hàm

    // Hiển thị high scores
    //displayHighScore();

    Menu();
}


void level2()
{
    setCellSize(15, 15);

    srand(time(NULL));
    HideCursor();
    setCellSize(15, 15);
    SetConsoleWindow(1200, 700);
    SetUpLvl();
    mainColor = 2;
    frameColor = 3;
    currentLevel = 2;
    Draw(mainColor, frameColor);

    while (!gameOver)
    {
        Logic();
        gotoXY(0, 0);
        textColor(1);
        cout << "Score: " << snakeLength - 3;
        isEatingSound = false;
        drawSnFr();
        if (isGate && snake[snakeLength - 1].x == Gate.x && snake[snakeLength - 1].y == Gate.y)
        {
            Sleep(1000);
            Menu();
            return;
        }
        if (state == EXIT)
        {
            Menu();
        }
        Sleep(70);
    }
    overGame();

    Menu();
}

void SetUpLvl()
{
    dir = STOP;
    gameOver = false;
    isStart = false;
    isGate = false;
    isSnakeGoToGate = false;
    snakeLength = 3;
    xBase = 10, yBase = 5;
    widthBase = 40, heightBase = 32;
    dir = STOP;
    Gate.x = 0;
    Gate.y = 0;

    snake[0].x = xBase + widthBase / 2;
    snake[0].y = yBase + heightBase / 2;
    snake[1].x = snake[0].x - 1;
    snake[1].y = snake[0].y;
    snake[2].x = snake[0].x - 2;
    snake[2].y = snake[0].y;

    fruit.x = rand() % (widthBase) + xBase;
    fruit.y = rand() % (heightBase) + yBase;
}

void Draw(int mainColor, int frameColor)
{
    drawBox(xBase - 1, yBase - 1, widthBase + 1, heightBase + 1, mainColor, frameColor);
    drawSnFr();
}

void Logic()
{
    if (snake[0].x == fruit.x && snake[0].y == fruit.y)
    {
        isEatingSound = true;
        fruit.x = rand() % (widthBase) + xBase;
        fruit.y = rand() % (heightBase) + yBase;
        snakeLength++;
        if (snakeLength == 8 && !isGate)
        {
            isGate = true;
            snakeGate();
        }
    }

    preSnake = snake[snakeLength - 1];

    if (snake[0].x == Gate.x && snake[0].y == Gate.y)
        isSnakeGoToGate = true;
    if (isStart && dir != STOP)
    {
        for (int i = snakeLength - 1; i >= 1; i--)
            snake[i] = snake[i - 1];
    }

    if (!isSnakeGoToGate)
    {
        switch (dir)
        {
        case UP:
            snake[0].y--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
        case LEFT:
            snake[0].x--;
            break;
        case DOWN:
            snake[0].y++;
            break;
        default:
            // system("Pause");
            break;
        }
        // isPress = false;
    }

    int temp = (isEatingSound) ? snakeLength - 1 : snakeLength;

    for (int i = 1; i < temp; i++)
    {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y && !isSnakeGoToGate) {
            gameOver = true;
            recordLog("Test 1");
        }
    }

    if (snake[0].x < xBase || snake[0].x >= xBase + widthBase || snake[0].y < yBase || snake[0].y >= yBase + heightBase)
    {
        gameOver = true;
        recordLog("Test 2" + to_string(snake[0].x) + " " + to_string(snake[0].y));
    }
}

// draw snake and fruit
void drawSnFr()
{
    if (!isGate)
    {
        highLight(fruit.x, fruit.y, 7);
        gotoXY(fruit.x, fruit.y);
        textColor(0);
        studentID(snakeLength);
    }
    for (int i = 0; i < snakeLength; i++)
    {
        if (snake[i].x == Gate.x && snake[i].y == Gate.y)
            highLight(snake[i].x, snake[i].y, 3);
        else
        {
            highLight(snake[i].x, snake[i].y, (i == 7) ? 3 : i);
            gotoXY(snake[i].x, snake[i].y);
            textColor(7);
            studentID(i);
        }
        if (isStart && dir != STOP)
            highLight(preSnake.x, preSnake.y, mainColor);
    }
}

void snakeGate()
{
    Gate.x = rand() % (widthBase - 1) + (xBase + 1);
    Gate.y = rand() % (heightBase - 1) + (yBase + 1);
    highLight(Gate.x, Gate.y, 3);
}

void drawBox(int x, int y, int width, int height, int mainColor, int frameColor)
{
    for (int i = x; i <= x + width; i++)
    {
        for (int j = y; j <= y + height; j++)
        {
            if (i == x || i == x + width || j == y || j == y + height)
            {
                highLight(i, j, frameColor);
            }
            else
                highLight(i, j, mainColor);
        }
        cout << endl;
    }
}

void overGame()
{
    // system("cls");
    int i = 0;
    while (i < 10)
    {
        for (int j = snakeLength - 1; j >= 0; j--)
        {
            int color = j + i + 1;
            if (color == 6)
                color = 0;
            highLight(snake[j].x, snake[j].y, color);
        }
        i++;
        Sleep(100);
    }
    Sleep(2000);
}

//void pushPause()
//{
//    string playerNamePause;
//    cout << "Game paused! Enter your name: ";
//
//    ifstream ifs("pausegame.txt");
//    ofstream ofs_tmp("pausegame_tmp.txt");
//
//    cin.clear();
//    getline(cin, playerNamePause);
//    if (playerNamePause.empty()) getline(cin, playerNamePause);
//
//    time_t currentTimePause = time(NULL);
//    char buffer[26];
//
//    ctime_s(buffer, sizeof buffer, &currentTimePause);
//    std::string dateTimePause(buffer);
//    dateTimePause.pop_back();
//
//    string updateStr = playerNamePause + " " + to_string(currentLevel) + " " + to_string(snakeLength - 3) + " " + dateTimePause + "@ " + to_string(dir) + " " + to_string(fruit.x) + " " + to_string(fruit.y) + " " + to_string(snakeLength);
//    for (int i = 0; i < snakeLength; i++) {
//        updateStr += " " + to_string(snake[i].x) + " " + to_string(snake[i].y);
//    }
//
//    string currStr;
//
//    bool isInserted = false;
//    while (getline(ifs, currStr)) {
//        if (currStr.substr(0, currStr.find(' ')) == playerNamePause) {
//            isInserted = true;
//            ofs_tmp << updateStr << endl;
//        }
//        else {
//            ofs_tmp << currStr << endl;
//        }
//    }
//    
//    if (!isInserted) ofs_tmp << updateStr << endl;
//
//
//    ofs_tmp.close();
//    ifs.close();
//
//    remove("pausegame.txt");
//    rename("pausegame_tmp.txt", "pausegame.txt");
//   
//    state = NONE;
//}
//
//void displayListPause()
//{
//    ifstream ifs("pausegame.txt");
//    string pName, pDate;
//    int pLvl, pScore;
//    gotoXY(0, 1);
//    int stt = 1;
//    Position pBase = { 10,10 };
//    while (ifs >> pName >> pLvl >> pScore) {
//        getline(ifs, pDate, '@');
//        ifs.ignore(UINT_MAX, '\n');
//        cout << stt << " " << pName << " " << pLvl << " " << pScore << " " << pDate << endl;
//        //outTextXY(pBase.x, 16, pName, 14);
//        //outNumXY(pBase.x, 40, pLvl, 14);
//        //outNumXY(pBase.x, 70, pScore, 14);
//        //outTextXY(pBase.x, 100, pDate, 14);
//        ++stt;
//    }
//    ifs.close();
//    cout << "Chon file de load: ";
//
//    int op;
//    cin.clear();
//    cin >> op;
//
//    ifstream ifs2("pausegame.txt");
//    for (int i = 1; i < op; i++) {
//        ifs2.ignore(UINT_MAX, '\n');
//    }
//
//    ifs2.ignore(UINT_MAX, '@');
//
//    int val;
//    ifs2 >> val;
//    dir = eDirection(val);
//    ifs2 >> fruit.x;
//    ifs2 >> fruit.y;
//    ifs2 >> snakeLength;
//    for (int i = 0; i < snakeLength; i++) {
//        ifs2 >> snake[i].x >> snake[i].y;
//    }
//    
//    ifs2.close();
//    state = NONE;
//    Draw(mainColor, frameColor);
//    drawSnFr();
//    resume = true;
//}
