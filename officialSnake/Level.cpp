#include "Level.h"
#include "SetUp.h"

enum eDirection { STOP, DOWN, UP, RIGHT, LEFT };
eDirection dir, preDir;


struct Position {
    int x;
    int y;
};

bool gameOver;
bool start;
int xBase, yBase, widthBase, heightBase;
Position fruit;
Position snake[100];
int snakeLength = 3;



void level1() {
    
  
    CONSOLE_FONT_INFOEX cf = {0};
    cf.cbSize = sizeof cf;
    cf.dwFontSize.X = 10;
    cf.dwFontSize.Y = 20;
    wcscpy_s(cf.FaceName, L"Terminal");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), 0, &cf);   
             
         
    srand(time(NULL));
    SetUp();
    Draw();
    while (!gameOver) {
        Input();
        Logic();
        drawSnFr();
        Sleep(100);
    }
    
    gotoXY(200, 100);
    system("PAUSE");
}

void SetUp() {
    gameOver = false;
    start = false;

    xBase = 10, yBase = 5;
    widthBase = 40, heightBase = 20;

    dir = STOP;

    snake[0].x = xBase + widthBase / 2;
    snake[0].y = yBase + heightBase / 2;
    snake[1].x = snake[0].x - 1;
    snake[1].y = snake[0].y;
    snake[2].x = snake[1].x - 1;
    snake[2].y = snake[0].y;

    fruit.x = rand() % (widthBase)+xBase;
    fruit.y = rand() % (heightBase)+yBase;
}

void Draw() {
    drawBox(xBase - 1, yBase - 1, widthBase + 1, heightBase + 1);
    drawSnFr();
}

void Input() {
    if (_kbhit()) {
        start = true;
        char temp = tolower(_getch());
        switch (temp) {
        case 'w':
            if (dir != DOWN)
                dir = UP;
            break;
        case'a':
            if (dir != RIGHT)
                dir = LEFT;
            break;
        case's':
            if (dir != UP)
                dir = DOWN;
            break;
        case'd':
            if (dir != LEFT)
                dir = RIGHT;
            break;
        default:
            break;
        }
    }
}

void Logic() {
    Position preSnake[2];
    preSnake[0] = snake[1];
    snake[1] = snake[0];
    for (int i = 2; i < snakeLength; i++) {
        preSnake[1] = snake[i];
        snake[i] = preSnake[0];
        preSnake[0] = preSnake[1];
    }
    gotoXY(preSnake[0].x, preSnake[0].y);
    cout << "5";
    //highLight(preSnake[0].x, preSnake[0].y, 6);

    switch (dir) {
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
    if (start) {
        for (int i = 1; i < snakeLength; i++) {
            if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
                gameOver = true;
        }
    }
    if (snake[0].x == fruit.x && snake[0].y == fruit.y) {
        fruit.x = rand() % (widthBase)+xBase;
        fruit.y = rand() % (heightBase)+yBase;
        snakeLength++;
        snake[snakeLength - 1] = snake[snakeLength - 2];
    }
    if (snake[0].x < xBase || snake[0].x >= xBase + widthBase || snake[0].y < yBase || snake[0].y >= yBase + heightBase) {
        gameOver = true;
    }
}

//draw snake and fruit
void drawSnFr() {
        for (int i = 0; i < snakeLength; i++) {
        highLight(snake[i].x, snake[i].y, i);
        studentID(i);
    }
    highLight(fruit.x, fruit.y, 7);
}







void drawBox(int x, int y, int width, int height) {
	for (int i = x; i <= x + width; i++) {
		for (int j = y; j <= y + height; j++) {
            if (i == x || i == x + width||j==y||j==y+height) {
                highLight(i, j, 5);
            }
			else
				highLight(i,j,6);
		}
        cout << endl;
	}
}
