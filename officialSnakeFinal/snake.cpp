#include "Header.h"
#include "Level.h"
#include "Menu.h"
#include "Header.h"
#include "SetUp.h"
#include "HighScore.h"
#include <thread>

int main() {
	std::thread inputThread(Input);
	FixConsoleWindow();
	setCellSize(18, 18);
	SetConsoleWindow(1180, 700);
	DisableScrollBars();
	MoveCenter();
	//HideCursor();
	Menu();
	////std::thread inputThread(Input);
	////level1();
	inputThread.join();

	return 0;
}