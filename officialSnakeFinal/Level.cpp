#include "Level.h"

// Khai báo một vector chứa các vị trí của các chướng ngại vật
std::vector<Position> obstacles;


bool gameOver, isSnakeGoToGate;
bool isGate = false;
short winner = 0;
string playerNamePause;
unsigned short playTime;

int xBase, yBase, widthBase, heightBase;
Position preSnake, preSnake1;
int mainColor, frameColor;
int currentLevel = 1;
bool resume = true;


void level1(bool SFXTurnOn) {
	srand(time(NULL));
	DisableScrollBars();
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	HideCursor();
	gameOver = false;
	if (!isLoadGame) {
		SetUpLvl();
	}
	resume = false;
	mainColor = 6;
	frameColor = 5;
	currentLevel = 1;
	Draw(mainColor, frameColor);
	bool timeFlag = false;

	clock_t startTime = 0; 
	clock_t endTime;
	playTime = 0;
	clockAndScore(gameTime, snakeLength - 3, 8 - snakeLength);
	while (!gameOver) {
		isEating = false;
		if (isStart && !timeFlag) {
			startTime = clock();
			timeFlag = true;
		}
		endTime = clock();
		playTime = (unsigned short)((endTime - startTime) / CLOCKS_PER_SEC); // Tính thời gian chơi (s)

		if (isStart)
			clockAndScore(gameTime + playTime, snakeLength - 3, 8 - snakeLength);
		Logic(SFXTurnOn);
		drawSnake(snake);
		drawFruit();
		if (isGate && snake[snakeLength - 1].x == fruit.x && snake[snakeLength - 1].y == fruit.y) {
			isGate = false;
			if (SFXTurnOn == true)
				toggleSound(6);
			Sleep(1000);
			system("cls");
			gameTime += playTime;
			if (!isLoadGame) {
				level2(SFXTurnOn);
			}
			else {
				SetUpLvl2();
				level2(SFXTurnOn);				
			}
		}
		if (state == EXIT) {
			state = NONE;
			Menu();
		}
		if (state == PAUSE) {
			eDirection tmpDir = dir;
			int opt = choosePause();
			if (opt == 0) {
				drawWhiteBoard();
				drawSnake(snake);
				drawFruit();
				dir = tmpDir;
				isStart = false;
			}
			else if (opt == 1) {
				drawSaveBoard();
				pushPause(currentLevel, playTime + gameTime);
				state = EXIT;
			}
			else if (opt == 2)
			{
				page = MENU;
				Menu();
			}
		}
		Sleep(100);
	}
	if (SFXTurnOn == true)
		toggleSound(5);
	overGame(snake);

	// Lấy ngày và giờ chơi hiện tại
	time_t currentTime = time(NULL);
	char buffer[26];
	ctime_s(buffer, sizeof buffer, &currentTime);
	std::string dateTime(buffer);
	gameTime += playTime;

	// Game over, yêu cầu nhập tên người chơi và thêm vào high score list
	string playerName;

	if (!isLoadGame) {
		drawSaveBoard();
		gotoXY(18, 20);
		backColor(14);
		textColor(10);
		cin.clear();
		getline(cin, playerName);
		if (playerName.empty()) getline(cin, playerName);
	}
	else {
		playerName = playerNamePause;
		Sleep(2000);
	}

	if (!isLoadGame) {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
	}
	else {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
		deletePlayerLine(playerName);
	}

	isLoadGame = false;
	GameOverAnnounce(15, 15, 21, 8, 0, 12);
	int opt = chooseGameOver();
	if (opt == 0) {
		level1(SFXTurnOn);
	}
	else if (opt == 1) {
		page = MENU;
		Menu();
	}
}

void level2(bool SFXTurnOn) {
	srand(time(NULL));
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	HideCursor();
	gameOver = false;
	if (!isLoadGame){
		SetUpLvl2();
	}
	else { 
		isLoadGame = true; 
	}
	resume = false;
	mainColor = 6;
	frameColor = 5;
	currentLevel = 2;
	Draw(mainColor, frameColor);
	unsigned short count = 1;
	int xUPRight = 44 + xBase, yUPRight = yBase + 0;
	int xUPLeft = xBase + 0, yUPLeft = yBase + 0;
	int xDOWNRight = 44 + xBase, yDOWNRight = yBase + 19;
	int xDOWNLeft = xBase + 0, yDOWNLeft = yBase + 19;

	bool timeFlag = false;
	
	clock_t startTime = 0; // Bắt đầu đếm thời gian
	clock_t endTime;
	unsigned short playTime = 0;
	clockAndScore(gameTime, snakeLength - 3, 8 - snakeLength);
	while (!gameOver) {
		isEating = false;
		if (isStart && !timeFlag) {
			startTime = clock();
			timeFlag = true;
		}
		endTime = clock();
		playTime = (unsigned short)((endTime - startTime) / CLOCKS_PER_SEC); // Tính thời gian chơi (s)

		if (isStart)
			clockAndScore(gameTime + playTime, snakeLength - 3, 8 - snakeLength);
		Logic(SFXTurnOn);
		drawSnake(snake,8);
		drawFruit();
		if (isGate && snake[snakeLength - 1].x == fruit.x && snake[snakeLength - 1].y == fruit.y) {
			isGate = false;
			if (SFXTurnOn == true)
				toggleSound(6);
			Sleep(1000);
			system("cls");
			gameTime += playTime;
			if (!isLoadGame) {
				level3(SFXTurnOn);
			}
			else {
				SetUpLvl3();
				level3(SFXTurnOn);
			}
		}
		if (state == EXIT) {
			state = NONE;
			Menu();
		}
		if (state == PAUSE) {
			eDirection tmpDir = dir;
			int opt = choosePause();
			if (opt == 0) {
				drawWhiteBoard();
				drawSnake(snake,8);
				drawFruit();
				dir = tmpDir;
				isStart = false;
			}
			else if (opt == 1) {
				drawSaveBoard();
				pushPause(currentLevel, playTime + gameTime);
				state = EXIT;
			}
			else if (opt == 2)
			{
				page = MENU;
				Menu();
			}
		}
		Sleep(100);
	}
	if (SFXTurnOn == true)
		toggleSound(5);
	overGame(snake);

	// Lấy ngày và giờ chơi hiện tại
	time_t currentTime = time(NULL);
	char buffer[26];
	ctime_s(buffer, sizeof buffer, &currentTime);
	std::string dateTime(buffer);
	gameTime += playTime;

	string playerName;

	if (!isLoadGame) {
		drawSaveBoard();
		gotoXY(18, 20);
		backColor(14);
		textColor(10);
		cin.clear();
		getline(cin, playerName);
		if (playerName.empty()) getline(cin, playerName);
	}
	else {
		playerName = playerNamePause;
		Sleep(2000);
	}

	if (!isLoadGame) {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
	}
	else {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
		deletePlayerLine(playerName);
	}

	isLoadGame = false;
	GameOverAnnounce(15, 15, 21, 8, 0, 14);
	int opt = chooseGameOver();
	if (opt == 0) {
		level1(SFXTurnOn);
	}
	else if (opt == 1) {
		page = MENU;
		Menu();
	}
}

void level3(bool SFXTurnOn)
{
	srand(time(NULL));
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	HideCursor();
	gameOver = false;
	if (!isLoadGame) {
		SetUpLvl3();
	}
	else {
		isLoadGame = true;
	}
	resume = false;
	mainColor = 6;
	frameColor = 5;
	currentLevel = 3;
	Draw(mainColor, frameColor);
	unsigned short count = 1;
	int xUPRight = 44 + xBase, yUPRight = yBase + 0;
	int xUPLeft = xBase + 0, yUPLeft = yBase + 0;
	int xDOWNRight = 44 + xBase, yDOWNRight = yBase + 19;
	int xDOWNLeft = xBase + 0, yDOWNLeft = yBase + 19;
	bool timeFlag = false;

	clock_t startTime = 0; 
	clock_t endTime;
	unsigned short playTime = 0;
	clockAndScore(gameTime, snakeLength - 3, 8 - snakeLength);
	while (!gameOver) {
		isEating = false;
		if (isStart && !timeFlag) {
			startTime = clock();
			timeFlag = true;
		}
		endTime = clock();
		playTime = (unsigned short)((endTime - startTime) / CLOCKS_PER_SEC); 

		if (isStart)
			clockAndScore(gameTime + playTime, snakeLength - 3, 8 - snakeLength);
		Logic(SFXTurnOn);
		moveObstacle(count, xUPRight, yUPRight, xUPLeft, yUPLeft, xDOWNRight, yDOWNRight, xDOWNLeft, yDOWNLeft);
		drawSnake(snake,16);
		drawFruit();
		if (isGate && snake[snakeLength - 1].x == fruit.x && snake[snakeLength - 1].y == fruit.y) {
			isGate = false;
			if (SFXTurnOn == true)
				toggleSound(6);
			Sleep(1000);
			system("cls");
			isLoadGame = false;
			gameTime += playTime;
			break;
		}
		if (state == EXIT) {
			state = NONE;
			Menu();
		}
		if (state == PAUSE) {
			eDirection tmpDir = dir;
			int opt = choosePause();
			if (opt == 0) {
				drawWhiteBoard();
				drawSnake(snake,16);
				drawFruit();
				dir = tmpDir;
				isStart = false;
			}
			else if (opt == 1) {
				drawSaveBoard();
				pushPause(currentLevel, playTime + gameTime);
				state = EXIT;
			}
			else if (opt == 2)
			{
				page = MENU;
				Menu();
			}
		}
		Sleep(100);
	}
	if (SFXTurnOn) {
		if (gameOver) {
			toggleSound(5);
			overGame(snake);
		}
		else
			toggleSound(7);
	}


	// Lấy ngày và giờ chơi hiện tại
	time_t currentTime = time(NULL);
	char buffer[26];
	ctime_s(buffer, sizeof buffer, &currentTime);
	std::string dateTime(buffer);
	gameTime += playTime;

	string playerName;

	if (!isLoadGame) {
		drawSaveBoard();
		gotoXY(18, 20);
		backColor(14);
		textColor(10);
		cin.clear();
		getline(cin, playerName);
		if (playerName.empty()) getline(cin, playerName);
	}
	else {

		playerName = playerNamePause;
		Sleep(2000);
	}

	if (!isLoadGame) {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
	}
	else {
		addPlayerToHighScore(playerName, currentLevel, snakeLength - 3, gameTime, dateTime); // Thêm ngày và giờ chơi vào hàm
		deletePlayerLine(playerName);
	}

	isLoadGame = false;

	if (gameOver)
		GameOverAnnounce(15, 15, 21, 8, 0, 14);
	else
		DrawWin(14, 7);

	int opt = chooseGameOver();
	if (opt == 0) {
		level1(SFXTurnOn);
	}
	else if (opt == 1) {
		page = MENU;
		Menu();
	}
}

void PVPMode(bool SFXTurnOn)
{
	srand(time(NULL));
	HideCursor();
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	SetUpPVP();
	mainColor = 14;
	frameColor = 14;
	currentLevel = 2;
	Draw(mainColor, frameColor);
	drawSnake(snake1, 32);
	pvpMode = true;
	bool InGate = false;
	bool timeFlag = false;

	clock_t startTime = 0; // Bắt đầu đếm thời gian
	clock_t endTime;
	unsigned short playTime = 0;
	clockAndScorePVP(gameTime, snakeLength - 3, snakeLength1 - 3);
	while (!gameOver) {
		if ((isStart1 || isStart) && !timeFlag) {
			startTime = clock();
			timeFlag = true;
		}
		endTime = clock();
		playTime = (unsigned short)((endTime - startTime) / CLOCKS_PER_SEC); // Tính thời gian chơi (s)

		if (isStart||isStart1)
			clockAndScorePVP(gameTime, snakeLength - 3, snakeLength1 - 3);
		if (60 - playTime == 0)
			break;
		Logic(SFXTurnOn);
		if (snakeLength == 8) {
			drawSnake(snake);
			gameOver = true;
			winner = 1;
		}
		Logic1(SFXTurnOn);
		if (snakeLength1 == 8) {
			drawSnake(snake1, 32);
			gameOver = true;
			winner = 2;
		}
		if (gameOver)
			break;
		isEating = false;
		drawSnake(snake);
		drawSnake(snake1, 32);
		drawFruit();
		if (isGate && snake[snakeLength - 1].x == fruit.x && snake[snakeLength - 1].y == fruit.y) {
			if (SFXTurnOn == true)
				toggleSound(6);
			InGate = true;
			Sleep(1000);
			system("cls");
			break;
		}
		if (state == EXIT) {
			state = NONE;
			pvpMode = false;
			Menu();
		}
		Sleep(100);
	}
	if (winner == 0) {
		if (SFXTurnOn == true)
			toggleSound(5);
		if (snakeLength > snakeLength1)
			winner = 1;
		else if (snakeLength < snakeLength1)
			winner = 2;
	}
	if (winner == 1) {
		if (SFXTurnOn == true)
			toggleSound(5);
		overGame(snake1);
		if (SFXTurnOn == true)
			toggleSound(7);
		GameOverAnnounce(15, 15, 22, 7, 0, 14);
		short tmp = 1;
		while (!_kbhit()) {
			outTextXY(40, 40, "PLAYER 1 WIN!!!!", (tmp - 2) / 3, 10);
			outTextXY(34, 44, "Press any key to continue...", (tmp++) / 4, 10);
			Sleep(20);
		}
	}
	else if (winner == 2) {
		if (SFXTurnOn == true && InGate == false)
			toggleSound(5);
		overGame(snake);
		if (SFXTurnOn == true)
			toggleSound(7);
		GameOverAnnounce(15, 15, 22, 7, 0, 14);
		short tmp = 1;
		while (!_kbhit()) {
			outTextXY(40, 40, "PLAYER 2 WIN!!!!", (tmp - 2) / 3, 10);
			outTextXY(34, 44, "Press any key to continue...", (tmp++) / 4, 10);
			Sleep(20);
		}
	}
	else {
		Sleep(3000);
		GameOverAnnounce(15, 15, 22, 12, 0, 14);
		short tmp = 1;
		while (!_kbhit()) {
			outTextXY(40, 40, "IT'S A DRAW!!!!", (tmp - 2) / 3, 10);
			outTextXY(34, 44, "Press any key to continue...", (tmp++) / 4, 10);
			Sleep(20);
		}

	}

	pvpMode = false;
	page = MENU;
	Menu();
}

void SetUpLvl() {
	dir = RIGHT;
	gameOver = false;
	isStart = false;
	isGate = false;
	isSnakeGoToGate = false;
	snakeLength = 3;
	xBase = 5, yBase = 3;
	widthBase = 50, heightBase = 25;
	gameTime = 0;
	fruit.x = 0;
	fruit.y = 0;
	gameTime = 0;


    snake.clear();

    // Use push_back to add new positions to the snake vector
    snake.push_back({xBase + widthBase / 2, yBase + heightBase / 2});
    snake.push_back({snake[0].x - 1, snake[0].y});
    snake.push_back({snake[0].x - 2, snake[0].y});


	fruit.x = rand() % (widthBase)+xBase;
	fruit.y = rand() % (heightBase)+yBase;

	obstacles.clear();
}

void SetUpPVP()
{
    dir = RIGHT;
    gameOver = false;
    isStart = false;
    isGate = false;
    isSnakeGoToGate = false;
    snakeLength = 3;
    xBase = 5, yBase = 3;
    widthBase = 50, heightBase = 25;
    fruit.x = 0;
    fruit.y = 0;

    // Clear the snake vector before adding new positions
    snake.clear();

    // Use push_back to add new positions to the snake vector
    snake.push_back({xBase + widthBase / 2 - 5, yBase + heightBase / 2});
    snake.push_back({snake[0].x - 1, snake[0].y});
    snake.push_back({snake[0].x - 2, snake[0].y});

    dir1 = LEFT;
    gameOver = false;
    isStart1 = false;
    isGate = false;
    isSnakeGoToGate = false;
    snakeLength1 = 3;
    xBase = 5, yBase = 3;
    widthBase = 50, heightBase = 25;

    // Clear the snake1 vector before adding new positions
    snake1.clear();

    // Use push_back to add new positions to the snake1 vector
    snake1.push_back({xBase + widthBase / 2 + 5, yBase + heightBase / 2});
    snake1.push_back({snake1[0].x + 1, snake1[0].y});
    snake1.push_back({snake1[0].x + 2, snake1[0].y});

    fruit.x = rand() % (widthBase)+xBase;
    fruit.y = rand() % (heightBase)+yBase;
}


void SetUpLvl2()
{
	dir = RIGHT;
	gameOver = false;
	isStart = false;
	isGate = false;
	isSnakeGoToGate = false;
	snakeLength = 3;
	xBase = 5, yBase = 3;
	widthBase = 50, heightBase = 25;
	fruit.x = 0;
	fruit.y = 0;

    snake.clear();

    // Use push_back to add new positions to the snake vector
    snake.push_back({xBase + widthBase / 2, yBase + heightBase / 2});
    snake.push_back({snake[0].x - 1, snake[0].y});
    snake.push_back({snake[0].x - 2, snake[0].y});

	int centerX = xBase + widthBase / 2;
	int centerY = yBase + heightBase / 2;
	// Thiết lập các chướng ngại vật tam giác
	//Ví dụ thiết lập một tam giác ở góc trên bên trái

	obstacles.clear();
	for (int i = 0; i < 5; ++i) {
		obstacles.push_back({ 24, 7 + i }); // Trên giữa
		obstacles.push_back({ 32, 7 + i }); // Trên giữa
		obstacles.push_back({ 24, 18 + i }); // Trên giữa
		obstacles.push_back({ 32, 18 + i }); // Trên giữa

	}
	for (int i = 0; i < 8; ++i) {
		obstacles.push_back({ 17 + i, 12 }); // Trên giữa
		obstacles.push_back({ 32 + i, 12 }); // Trên giữa
		obstacles.push_back({ 17 + i,18 }); // Trên giữa
		obstacles.push_back({ 32 + i, 18 }); // Trên giữa
	}

	// Đặt vị trí của trái cây và đảm bảo không nằm trên chướng ngại vật
	do {
		fruit.x = rand() % (widthBase)+xBase;
		fruit.y = rand() % (heightBase)+yBase;
	} while (isObstacle(fruit.x, fruit.y));

	// Đặt vị trí của cổng nếu cần
}

void SetUpLvl3()
{
	dir = RIGHT;
	gameOver = false;
	isStart = false;
	isGate = false;
	isSnakeGoToGate = false;
	snakeLength = 3;
	xBase = 5, yBase = 3;
	widthBase = 50, heightBase = 25;
	fruit.x = 0;
	fruit.y = 0;

    snake.clear();

    // Use push_back to add new positions to the snake vector
    snake.push_back({xBase + widthBase / 2, yBase + heightBase / 2});
    snake.push_back({snake[0].x - 1, snake[0].y});
    snake.push_back({snake[0].x - 2, snake[0].y});

	obstacles.clear();
	int centerX = xBase + widthBase / 2;
	int centerY = yBase + heightBase / 2;
	do {
		fruit.x = rand() % (widthBase)+xBase;
		fruit.y = rand() % (heightBase)+yBase;
	} while (isObstacle(fruit.x, fruit.y));

}
void moveObstacle(unsigned short& count, int& xUPRight, int& yUPRight, int& xUPLeft, int& yUPLeft, int& xDOWNRight, int& yDOWNRight, int& xDOWNLeft, int& yDOWNLeft)
{

	if (isStart && !gameOver)
	{
		if (count == 1 || (((count / 4) <= 6 && (count / 4) >= 1 || (count / 4) > 6) && count % 4 == 1))
		{
			drawObstacles(14, 14);
			obstacles.clear();
		}
		if (count == 1)
		{
			// tren phai
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPRight,yUPRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPRight + i, yUPRight + 5 });
			// tren trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPLeft + 5,yUPLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPLeft + i, yUPLeft + 5 });

			//duoi trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNLeft + 5,yDOWNLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xDOWNLeft + i, yDOWNLeft });

			//duoi phai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight,yDOWNRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight + i, yDOWNRight });

		}
		else if ((count / 4) <= 6 && (count / 4) >= 1 && count % 4 == 1)
		{
			xUPRight -= 1;
			yUPRight += 1;
			xUPLeft += 1;
			yUPLeft += 1;
			xDOWNLeft += 1;
			yDOWNLeft -= 1;
			xDOWNRight -= 1;
			yDOWNRight -= 1;
			// tren phai
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPRight,yUPRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPRight + i, yUPRight + 5 });

			// tren trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPLeft + 5,yUPLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPLeft + i, yUPLeft + 5 });

			//duoi trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNLeft + 5,yDOWNLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xDOWNLeft + i, yDOWNLeft });


			//duoi phai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight,yDOWNRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight + i, yDOWNRight });

		}
		else if ((count / 4) >= 7 && (count / 4) <= 12 && count % 4 == 1)
		{
			xUPRight += 1;
			yUPRight -= 1;
			xUPLeft -= 1;
			yUPLeft -= 1;
			xDOWNLeft -= 1;
			yDOWNLeft += 1;
			xDOWNRight += 1;
			yDOWNRight += 1;
			//tren phai
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPRight,yUPRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPRight + i, yUPRight + 5 });

			// tren trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xUPLeft + 5,yUPLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xUPLeft + i, yUPLeft + 5 });

			//duoi trai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNLeft + 5,yDOWNLeft + i });
			for (int i = 0; i < 5; i++)
				obstacles.push_back({ xDOWNLeft + i, yDOWNLeft });


			//duoi phai
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight,yDOWNRight + i });
			for (int i = 0; i < 6; i++)
				obstacles.push_back({ xDOWNRight + i, yDOWNRight });
		}

		if ((count % 4) == 1 && (count / 4) == 12) {
			count = 2;
		}
		count++;
		drawObstacles(4, 4);

	}


}

bool isObstacle(int x, int y)
{
	for (const auto& obs : obstacles) {
		if (obs.x == x && obs.y == y) return true;
	}
	return false;
}

// Hàm vẽ chướng ngại vật
void drawObstacles(int tcolor, int bcolor) {
	backColor(4);
	for (const auto& obs : obstacles) {
		textColor(tcolor); // Màu đỏ cho chướng ngại vật
		backColor(bcolor);
		gotoXY(obs.x, obs.y);
		cout << "X"; // Ký tự đại diện cho chướng ngại vật
	}
}

// Cập nhật hàm Draw để vẽ thêm chướng ngại vật
void Draw(int mainColor, int frameColor)
{
	// Vẽ khu vực chính
	MainScreen();

	// Vẽ rắn
	drawSnake(snake);

	// Vẽ trái cây
	drawFruit();

	// Vẽ các chướng ngại vật
	for (const auto& obs : obstacles) {
		highLight(obs.x, obs.y, 4); // Sử dụng màu khác để hiển thị chướng ngại vật
	}
}

void Logic(bool SFXTurnOn)
{
	// Kiểm tra va chạm với trái cây
	if (snake[0].x == fruit.x && snake[0].y == fruit.y && !isGate)
	{
		if (SFXTurnOn == true)
			toggleSound(4);
		snake.push_back({ snake[snakeLength - 1].x,snake[snakeLength - 1].y });
		do {
			fruit.x = rand() % (widthBase)+xBase;
			fruit.y = rand() % (heightBase)+yBase;
		} while (isObstacle(fruit.x, fruit.y));
		snakeLength++;
		if (snakeLength == 8)
			isGate = true;
	}

	preSnake = snake[snakeLength - 1];
	if (snake[0].x == fruit.x && snake[0].y == fruit.y && isGate)
		isSnakeGoToGate = true;

	Position prevSnake[2];
	prevSnake[0] = snake[0];

	if (!isSnakeGoToGate && isStart)
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
			break;
		}
	}

	// Kiểm tra va chạm với chướng ngại vật
	if (isObstacle(snake[0].x, snake[0].y)) {
		gameOver = true;
		winner = 2;
	}

	// Kiểm tra va chạm với thân mình và biên giới
	if (checkGameOver()) {
		snake[0] = prevSnake[0];
		gameOver = true;
		winner = 2;
	}

	if (isStart && !gameOver) {
		for (int i = 1; i < snakeLength; i++) {
			prevSnake[1] = snake[i];
			snake[i] = prevSnake[0];
			prevSnake[0] = prevSnake[1];
		}
	}
}

void Logic1(bool SFXTurnOn)
{
	if (gameOver)
		return;
	if (snake1[0].x == fruit.x && snake1[0].y == fruit.y && !isGate)
	{
		if (SFXTurnOn == true)
			toggleSound(4);
		snake1.push_back({ snake1[snakeLength1 - 1].x,snake1[snakeLength1 - 1].y });
		fruit.x = rand() % (widthBase)+xBase;
		fruit.y = rand() % (heightBase)+yBase;
		snakeLength1++;
		if (snakeLength1 == 8 && !isGate)
			isGate = true;
	}

	preSnake1 = snake1[snakeLength1 - 1];
	if (snake1[0].x == fruit.x && snake1[0].y == fruit.y && isGate)
		isSnakeGoToGate = true;

	Position prevSnake[2];
	prevSnake[0] = snake1[0];

	if (!isSnakeGoToGate && isStart1)
	{
		switch (dir1)
		{
		case UP:
			snake1[0].y--;
			break;
		case RIGHT:
			snake1[0].x++;
			break;
		case LEFT:
			snake1[0].x--;
			break;
		case DOWN:
			snake1[0].y++;
			break;
		default:
			break;
		}
	}

	if (checkGameOver1()) {
		snake1[0] = prevSnake[0];
		gameOver = true;
		winner = 1;
	}

	if (isStart1 && !gameOver) {
		for (int i = 1; i < snakeLength1; i++) {
			prevSnake[1] = snake1[i];
			snake1[i] = prevSnake[0];
			prevSnake[0] = prevSnake[1];
		}
	}
}

bool checkGameOver() {
	// Kiểm tra va chạm với chướng ngại vật
	for (int i = 0; i < snakeLength; i++) {
		// Check for collision with each part of the snake's body
		if (isObstacle(snake[i].x, snake[i].y))
			return true;
	}

	// Kiểm tra va chạm với chính mình
	for (int i = 1; i < snakeLength; i++) {
		if (snake[0].x == snake[i].x && snake[0].y == snake[i].y && !isSnakeGoToGate)
			return true;
	}

	// Kiểm tra va chạm với biên giới
	if (snake[0].x < xBase || snake[0].x >= xBase + widthBase || snake[0].y < yBase || snake[0].y >= yBase + heightBase)
		return true;

	// Kiểm tra va chạm với đối thủ trong chế độ PvP
	if (pvpMode) {
		for (int i = 0; i < snakeLength1; i++) {
			if (snake[0].x == snake1[i].x && snake[0].y == snake1[i].y)
				return true;
		}
	}

	return false;
}

bool checkGameOver1() {
	for (int i = 1; i < snakeLength1; i++)
	{
		if (snake1[0].x == snake1[i].x && snake1[0].y == snake1[i].y && !isSnakeGoToGate)
			return true;
	}

	if (snake1[0].x < xBase || snake1[0].x >= xBase + widthBase || snake1[0].y < yBase || snake1[0].y >= yBase + heightBase)
		return true;

	for (int i = 0; i < snakeLength; i++) {
		if (snake1[0].x == snake[i].x && snake1[0].y == snake[i].y)
			return true;
	}
	return false;
}

void chooseModeGame(bool SFXTurnOn, int SFXVolume, bool& start) {
	DisableScrollBars();
	backColor(14);
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	HideCursor();

	short md = 0;
	highLightBox(10, 14, 15, 9, 1);
	highLightBox(35, 14, 15, 9, 3);
	outTextXY(13, 18, "NORMAL MODE", 15,1);
	outTextXY(40, 18, "PVP MODE", 15,3);
	while (true) {
		if (dir == LEFT || dir == RIGHT)
			md = (md == 1) ? 0 : 1;
		else if (state == EXIT) {
			page = MENU;
			Menu();
		}

		if (dir != STOP) {
			if (md == 0) {
				highLightBox(10, 14, 15, 9, 1);
				outTextXY(13, 18, "NORMAL MODE", 15,1);
				highLightBox(35, 14, 15, 9, 3);
				outTextXY(40, 18, "PVP MODE", 15,3);
			}
			else {
				highLightBox(10, 14, 15, 9, 3);
				outTextXY(13, 18, "NORMAL MODE", 15,3);
				highLightBox(35, 14, 15, 9, 1);
				outTextXY(40, 18, "PVP MODE", 15,1);
			}
		}
		if (state == ENTER) {
			break;
		}

		dir = STOP;
		Sleep(100);
		backColor(14);

	}
	page = PLAY;
	if (md == 0) {
		toggleSound(-3);
		if (SFXTurnOn == true)
			setVolume(SFXVolume);
		start = false;
		level1(SFXTurnOn);
	}
	else {
		toggleSound(-3);
		if (SFXTurnOn == true)
			setVolume(SFXVolume);
		start = false;
		PVPMode(SFXTurnOn);
	}

}
// draw snake and fruit
void drawFruit()
{
	if (!isGate)
	{
		highLight(fruit.x, fruit.y, 7);
		gotoXY(fruit.x, fruit.y);
		textColor(0);
		studentID(snakeLength);
	}
	else {
		highLight(fruit.x, fruit.y, 3);
		backColor(14);
	}
}

void drawSnake(vector<Position> sn, int k) {
	short i = 0;
	if (k == 32)
	recordLog("snake length 1: " + to_string(sn.size()));
	for(const auto& snk:sn)
	{
		if (snk.x == fruit.x && snk.y == fruit.y)
			highLight(snk.x, snk.y, 3);
		else
		{
			highLight(snk.x, snk.y, (i == 7) ? 3 : i);
			gotoXY(snk.x, snk.y);
			textColor(15);
			studentID(i + k);
		}

		i++;
	}
		if (isStart && k != 32)
			highLight(preSnake.x, preSnake.y, 14);
		else if (isStart1 && k == 32)
			highLight(preSnake1.x, preSnake1.y, 14);
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

void overGame(vector<Position> sn)
{
	// system("cls");
	int i = 0;
	while (i < 10)
	{
		for (const auto& snk : sn) {
			int color = i++ + 1;
			if (color == 14)
				color = 0;
			highLight(snk.x, snk.y, color);
		}
		i++;
		Sleep(100);
	}
	Sleep(2000);
}

short choosePause() {
	drawMenuInGame();
	short curs = 0;
	dir = STOP;
	page = MENU;
	while (true) {
		if (dir == DOWN) {
			curs += 1;
			if (curs == 3)
				curs = 0;
		}
		else if (dir == UP) {
			curs -= 1;
			if (curs == -1)
				curs = 2;
		}
		else if (state == ENTER)
		{
			state = NONE;
			break;
		}

		// nút resume
		if (dir == UP || dir == DOWN) {
			if (curs == 0) {
				for (int i = 26; i <= 33; i++) {
					for (int j = 10; j <= 12; j++) {
						gotoXY(i, j);
						backColor(1);
						cout << " ";
					}
				}
				gotoXY(27, 11);
				textColor(15);
				cout << "RESUME";
				if (dir == UP) {
					for (int i = 26; i <= 33; i++) {
						for (int j = 14; j <= 16; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(28, 15);
					cout << "SAVE";
				}
				else if (dir == DOWN) {
					//nút exit
					for (int i = 26; i <= 33; i++) {
						for (int j = 18; j <= 20; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(28, 19);
					cout << "EXIT";
				}
			}
			else if (curs == 1) {
				// nút save
				for (int i = 26; i <= 33; i++) {
					for (int j = 14; j <= 16; j++) {
						gotoXY(i, j);
						backColor(1);
						cout << " ";
					}
				}
				gotoXY(28, 15);
				cout << "SAVE";
				if (dir == UP) {
					//nút exit
					for (int i = 26; i <= 33; i++) {
						for (int j = 18; j <= 20; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(28, 19);
					cout << "EXIT";
				}
				else if (dir == DOWN) {
					for (int i = 26; i <= 33; i++) {
						for (int j = 10; j <= 12; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(27, 11);
					textColor(15);
					cout << "RESUME";
				}
			}
			// nút save
			else if (curs == 2) {
				//nút exit
				for (int i = 26; i <= 33; i++) {
					for (int j = 18; j <= 20; j++) {
						gotoXY(i, j);
						backColor(1);
						cout << " ";
					}
				}
				gotoXY(28, 19);
				cout << "EXIT";
				if (dir == UP) {
					for (int i = 26; i <= 33; i++) {
						for (int j = 10; j <= 12; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(27, 11);
					textColor(15);
					cout << "RESUME";
				}
				else if (dir == DOWN) {
					// nút save
					for (int i = 26; i <= 33; i++) {
						for (int j = 14; j <= 16; j++) {
							gotoXY(i, j);
							backColor(3);
							cout << " ";
						}
					}
					gotoXY(28, 15);
					cout << "SAVE";
				}
			}
			dir = STOP;
		}
		Sleep(100);
	}
	page = PLAY;
	return curs;
}

int chooseGameOver() {
	dir = STOP;
	if (gameOver) {
		short md = 0;
		highLightBox(20, 36, 15, 5, 1);
		highLightBox(55, 36, 15, 5, 3);
		outTextXY(24, 38, "NEW GAME", 15, 1);
		outTextXY(61, 38, "MENU", 15, 3);
		state = NONE;
		while (true) {
			if (dir == LEFT || dir == RIGHT)
				md = (md == 1) ? 0 : 1;
			else if (state == EXIT) {
				page = MENU;
				Menu();
			}

			if (dir != STOP) {
				if (md == 0) {
					highLightBox(20, 36, 15, 5, 1);
					highLightBox(55, 36, 15, 5, 3);
					outTextXY(24, 38, "NEW GAME", 15, 1);
					outTextXY(61, 38, "MENU", 15, 3);
				}
				else {
					highLightBox(20, 36, 15, 5, 3);
					highLightBox(55, 36, 15, 5, 1);
					outTextXY(24, 38, "NEW GAME", 15, 3);
					outTextXY(61, 38, "MENU", 15, 1);
				}
			}
			if (state == ENTER) {
				break;
			}

			dir = STOP;
			Sleep(100);

		}
		page = PLAY;
		return md;
	}
	else {
		short md = 0;
		highLightBox(15, 26, 9, 3, 1);
		highLightBox(36, 26, 9, 3, 3);
		outTextXY(16, 27, "NEW GAME", 15, 1);
		outTextXY(39, 27, "MENU", 15, 3);
		state = NONE;
		while (true) {
			if (dir == LEFT || dir == RIGHT)
				md = (md == 1) ? 0 : 1;
			else if (state == EXIT) {
				page = MENU;
				Menu();
			}
			if (dir != STOP) {
				if (md == 0) {
					highLightBox(15, 26, 9, 3, 1);
					highLightBox(36, 26, 9, 3, 3);
					outTextXY(16, 27, "NEW GAME", 15, 1);
					outTextXY(39, 27, "MENU", 15, 3);
				}
				else {
					highLightBox(15, 26, 9, 3, 3);
					highLightBox(36, 26, 9, 3, 1);
					outTextXY(16, 27, "NEW GAME", 15, 3);
					outTextXY(39, 27, "MENU", 15, 1);
				}
			}
			if (state == ENTER) {
				break;
			}

			dir = STOP;
			Sleep(100);

		}
		page = PLAY;
		std::cout << std::flush;
		return md;
	}
}

void deletePlayerLine(const std::string& playerName) {
	std::ifstream inputFile("pausegame.txt");
	std::vector<std::string> lines;
	std::string line;

	if (inputFile.is_open()) {
		while (getline(inputFile, line)) {
			if (line.find(playerName) == std::string::npos) {
				lines.push_back(line); // Chỉ lưu các dòng không chứa tên người chơi
			}
		}
		inputFile.close();
	}

	std::ofstream outputFile("pausegame.txt");
	if (outputFile.is_open()) {
		for (const auto& outputLine : lines) {
			outputFile << outputLine << std::endl;
		}
		outputFile.close();
	}
}