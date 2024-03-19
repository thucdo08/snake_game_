#include "Header.h"
#include "Level.h"
#include "Menu.h"
#include "Header.h"
#include <thread>

int main() {
	std::thread inputThread(Input);
	FixConsoleWindow();
	SetConsoleWindow(1280, 720);
	MoveCenter();
	HideCursor();
	menu();
	inputThread.join();
	return 0;
}
