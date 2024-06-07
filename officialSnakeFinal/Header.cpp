#include "Header.h"


//Fix the console window so that the user cannot resize it
void FixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

//Set the console window size
void SetConsoleWindow(int width, int height) {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

//Move the console window to the specified position
void MoveWindow(int posx, int posy) 
{
    RECT rectClient, rectWindow;
    HWND hWnd = GetConsoleWindow();
    GetClientRect(hWnd, &rectClient);
    GetWindowRect(hWnd, &rectWindow);
    MoveWindow(hWnd, posx, posy, rectClient.right - rectClient.left, rectClient.bottom - rectClient.top, TRUE);
}

//Move the console window to the center of the screen
void MoveCenter()
{
    RECT rectClient, rectWindow;
    HWND hWnd = GetConsoleWindow();
    GetClientRect(hWnd, &rectClient);
    GetWindowRect(hWnd, &rectWindow);
    int posx, posy;
    posx = GetSystemMetrics(SM_CXSCREEN) / 2 - (rectWindow.right - rectWindow.left) / 2,
    posy = GetSystemMetrics(SM_CYSCREEN) / 2 - (rectWindow.bottom - rectWindow.top) / 2,

    MoveWindow(hWnd, posx, posy, rectClient.right - rectClient.left, rectClient.bottom - rectClient.top, TRUE);
}

//Hide the cursor

void HideCursor() {
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

//Close console window
void CloseConsole() {
    HWND hWndConsole = GetConsoleWindow(); // Get the handle to the console window
    if (hWndConsole != NULL) {
        SendMessage(hWndConsole, WM_CLOSE, 0, 0); // Close the console window
    }
}

//Set the font size and font type of the console
void setCellSize(int x, int y) {
    CONSOLE_FONT_INFOEX cf = { 0 };
    cf.cbSize = sizeof cf;
    cf.dwFontSize.X = x;
    cf.dwFontSize.Y = y;
    wcscpy_s(cf.FaceName, L"Terminal");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), 0, &cf);
}

//Cannot scroll up or down
void DisableScrollBars()
{
	HWND consoleWindow = GetConsoleWindow();
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	COORD new_size;
	new_size.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	new_size.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), new_size);
	ShowScrollBar(consoleWindow, SB_HORZ, FALSE);
	ShowScrollBar(consoleWindow, SB_VERT, FALSE);
}

// Hàm thay đổi màu kí tu của console
void textColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    WORD wAttributes = (csbi.wAttributes & 0xFFF0) | (color & 0x000F);
    SetConsoleTextAttribute(hConsole, wAttributes);
}

// Hàm thay đổi màu nen của console
void backColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    WORD wAttributes = (csbi.wAttributes & 0xFF0F) | ((color << 4) & 0x00F0);
    SetConsoleTextAttribute(hConsole, wAttributes);
}
void gotoXY(int x, int y) {
    COORD coord = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void highLight(int x,int y,int color) {
    gotoXY(x, y);
    backColor(color);
    cout << " ";
}

void outTextXY(int x, int y, const char* str, int Color1) {
    gotoXY(x, y);
    textColor(Color1); // Thiết lập màu chữ
    backColor(14); // Thiết lập màu nền
    printf("%s", str);
}

void outTextXY(int x, int y, string str, int Color1) {
    gotoXY(x, y);
    textColor(Color1); // Thiết lập màu chữ
    backColor(14); // Thiết lập màu nền
    cout << str;
}

void outTextXY(int x, int y, string str, int tColor,int bColor) {
    gotoXY(x, y);
    textColor(tColor); // Thiết lập màu chữ
    backColor(bColor); // Thiết lập màu nền
    cout << str;
}

void outTextXY1(int x, int y, const char* str, int size) {
    gotoXY(x, y);
    setCellSize(size, size + 2); // Thiết lập kích thước font chữ
    printf("%s", str);
}

void outNumXY(int x, int y, int num, int Color1) {
    gotoXY(x, y);
    textColor(Color1); // Thiết lập màu chữ
    backColor(14); // Thiết lập màu nền
    printf("%d",num);
}