#include "Level.h"
#include "SetUp.h"

//eDirection dir;
struct Position {
    int x;
    int y;
};



bool gameOver, isGate,isSnakeGoToGate;
//bool isStart;
int xBase, yBase, widthBase, heightBase;
Position fruit;
Position snake[100];
int snakeLength;
Position preSnake;
Position Gate;
int mainColor, frameColor;





void level1() {
    setCellSize(15,15);

         
    srand(time(NULL));
    SetUpLvl();
    mainColor = 6;
    frameColor = 5;
    Draw(mainColor,frameColor);
    
    while (!gameOver) {
        Input();
        Logic();
        drawSnFr();
        gotoXY(150, 50);
        cout<< "Score: " << snakeLength - 3;
        if (snakeLength >= 5 && !isGate)
        {
			gateSnake();
            isGate = true;
		}
        if (isGate && snake[snakeLength - 1].x == Gate.x && snake[snakeLength - 1].y == Gate.y)
        {
            system("cls");
            level2();
        }
        Sleep(100);
    }
    system("cls");
    menu();
    
}

void level2() {
    setCellSize(15,15);

         
    srand(time(NULL));
    SetUpLvl();
    mainColor = 2;
    frameColor = 3;
    Draw(mainColor,frameColor);
    
    while (!gameOver) {
        Input();
        Logic();
        drawSnFr();
        gotoXY(150, 50);
        cout<< "Score: " << snakeLength - 3;
        if (snakeLength >= 5 && !isGate)
        {
			gateSnake();
            isGate = true;
		}
        
        Sleep(100);
    }
    system("cls");
    menu();
    
}
void SetUpLvl() {
    gameOver = false;
    isStart = false;
    isGate = false;
    isSnakeGoToGate = false;

    snakeLength = 3;

    xBase = 10, yBase = 5;
    widthBase = 40, heightBase = 32;

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

void Draw(int mainColor,int frameColor) {
    drawBox(xBase - 1, yBase - 1, widthBase + 1, heightBase + 1,mainColor,frameColor);
    drawSnFr();
}



void Logic() {
  
    preSnake = snake[snakeLength - 1];

    if (snake[0].x == Gate.x && snake[0].y == Gate.y)
		isSnakeGoToGate = true;

    for (int i = snakeLength - 1; i >= 1; i--)
            snake[i] = snake[i - 1];



    highLight(snake[snakeLength - 1].x, snake[snakeLength - 1].y, 6);


    

    switch (dir) {
    case UP:
        if(!isSnakeGoToGate)
        snake[0].y--;
        break;
    case RIGHT:
        if(!isSnakeGoToGate)
        snake[0].x++;
        break;
    case LEFT:
        if(!isSnakeGoToGate)
        snake[0].x--;
        break;
    case DOWN:
        if(!isSnakeGoToGate)
        snake[0].y++;
        break;
    default:
        break;
    }
    if (isStart) {
        for (int i = 1; i < snakeLength; i++) {
            if (snake[0].x == snake[i].x && snake[0].y == snake[i].y && !isSnakeGoToGate)
                gameOver = true;
        }
    }
    if (snake[0].x == fruit.x && snake[0].y == fruit.y) {
        fruit.x = rand() % (widthBase)+xBase;
        fruit.y = rand() % (heightBase)+yBase;
        snakeLength++;

        
    }
    if (snake[0].x < xBase || snake[0].x >= xBase + widthBase || snake[0].y < yBase || snake[0].y >= yBase + heightBase) {
        gameOver = true;
    }
}

//draw snake and fruit
void drawSnFr() {
        for (int i = 0; i < snakeLength; i++) {
            if (snake[i].x != 0) {
                if(snake[i].x==Gate.x && snake[i].y==Gate.y)
                    highLight(snake[i].x, snake[i].y, 3);
                else {
                    highLight(snake[i].x, snake[i].y, i);
                    gotoXY(snake[i].x, snake[i].y);
                    studentID(i);
				}
                highLight(preSnake.x, preSnake.y, mainColor);

                //highLight(snake[snakeLength - 1].x, snake[snakeLength - 1].y, 5);

            }
            
    }

    highLight(fruit.x, fruit.y, 7);
}


void gateSnake() {
	Gate.x = rand() % (widthBase - 1)+(xBase + 1);
	Gate.y = rand() % (heightBase - 1)+(yBase + 1);
	highLight(Gate.x, Gate.y, 3);
}




void drawBox(int x, int y, int width, int height, int mainColor, int frameColor) {
	for (int i = x; i <= x + width; i++) {
		for (int j = y; j <= y + height; j++) {
            if (i == x || i == x + width||j==y||j==y+height) {
                highLight(i, j, frameColor);
            }
			else
				highLight(i,j,mainColor);
		}
        cout << endl;
	}
}
