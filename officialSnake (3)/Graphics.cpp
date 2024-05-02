#include "Graphics.h"

void backgroundmenu() {
    //ve khung menu
    backColor(2);
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 0);
        cout << " ";
    }
    for (int y = 0; y < 50; y++) {
        gotoXY(0, y);
        cout << " ";
    }
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 50);
        cout << " ";
    }
    for (int y = 0; y < 51; y++) {
        gotoXY(120, y);
        cout << " ";
    }
    backColor(14);
    for (int x = 1; x < 120; x++) {
        for (int y = 1; y < 50; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    int DiemX = 33;
    int DiemY = 3;
    //Ve chu S
    gotoXY(DiemX, DiemY);
    backColor(0);
    cout << " ";
    for (int x = DiemX; x < DiemX + 7; x++) {
        gotoXY(x, DiemY - 1);
        cout << " ";
    }
    gotoXY(DiemX - 1, DiemY);
    cout << " ";
    for (int y = DiemY; y < DiemY + 3; y++) {
        gotoXY(DiemX - 2, y);
        cout << " ";
    }
    for (int x = DiemX - 2; x < DiemX + 1; x++) {
        gotoXY(x, DiemY + 3);
        cout << " ";
    }
    for (int y = DiemY + 4; y < DiemY + 5; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    for (int x = DiemX + 1; x < DiemX + 5; x++) {
        gotoXY(x, DiemY + 4);
        cout << " ";
    }
    for (int y = DiemY + 5; y < DiemY + 7; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    for (int x = DiemX + 1; x < DiemX + 6; x++) {
        gotoXY(x, DiemY + 6);
        cout << " ";
    }
    for (int x = DiemX + 1; x < DiemX + 8; x++) {
        gotoXY(x, DiemY + 7);
        cout << " ";
    }
    for (int x = DiemX + 6; x < DiemX + 8; x++) {
        for (int y = DiemY; y < DiemY + 3; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX + 7; x < DiemX + 9; x++) {
        for (int y = DiemY + 3; y < DiemY + 5; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX + 6; x < DiemX + 9; x++) {
        for (int y = DiemY + 5; y < DiemY + 7; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX + 3; x < DiemX + 6; x++) {
        gotoXY(x, DiemY + 1);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY - 1; y < DiemY + 7; y++) {
        gotoXY(DiemX + 11, y);
        cout << " ";
    }
    for (int x = DiemX + 12; x < DiemX + 16; x++) {
        gotoXY(x, DiemY - 1);
        cout << " ";
    }
    for (int x = DiemX + 12; x < DiemX + 15; x++) {
        gotoXY(x, DiemY + 6);
        cout << " ";
    }
    for (int x = DiemX + 15; x < DiemX + 17; x++) {
        gotoXY(x, DiemY);
        cout << " ";
    }
    for (int x = DiemX + 16; x < DiemX + 18; x++) {
        gotoXY(x, DiemY + 1);
        cout << " ";
    }
    for (int y = DiemY - 1; y < DiemY + 3; y++) {
        gotoXY(DiemX + 17, y);
        cout << " ";
    }
    for (int x = DiemX + 18; x < DiemX + 20; x++) {
        gotoXY(x, DiemY - 1);
        cout << " ";
    }
    for (int y = DiemY; y < DiemY + 8; y++) {
        gotoXY(DiemX + 19, y);
        cout << " ";
    }
    for (int y = DiemY + 3; y < DiemY + 6; y++) {
        gotoXY(DiemX + 13, y);
        cout << " ";
    }
    for (int y = DiemY + 4; y < DiemY + 6; y++) {
        gotoXY(DiemX + 14, y);
        cout << " ";
    }
    for (int y = DiemY + 5; y < DiemY + 7; y++) {
        gotoXY(DiemX + 15, y);
        cout << " ";
    }
    gotoXY(DiemX + 16, DiemY + 7);
    cout << "    ";
    gotoXY(DiemX + 12, DiemY + 7);
    cout << "   ";
    gotoXY(DiemX + 16, DiemY + 6);
    cout << "   ";


    //Ve Chu A
    for (int x = DiemX + 23; x < DiemX + 29; x++) {
        gotoXY(x, DiemY - 1);
        cout << " ";
    }
    for (int x = DiemX + 22; x < DiemX + 24; x++) {
        gotoXY(x, DiemY);
        cout << " ";
    }
    for (int y = DiemY + 1; y < DiemY + 7; y++) {
        gotoXY(DiemX + 22, y);
        cout << " ";
    }
    for (int x = DiemX + 28; x < DiemX + 30; x++) {
        gotoXY(x, DiemY);
        cout << " ";
    }
    for (int x = DiemX + 29; x < DiemX + 31; x++) {
        for (int y = DiemY + 1; y < DiemY + 7; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX + 22; x < DiemX + 29; x++) {
        gotoXY(x, DiemY + 6);
        cout << " ";
    }
    for (int x = DiemX + 23; x < DiemX + 31; x++) {
        gotoXY(x, DiemY + 7);
        cout << " ";
    }
    for (int x = DiemX + 25; x < DiemX + 27; x++) {
        for (int y = DiemY + 1; y < DiemY + 3; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX + 25; x < DiemX + 27; x++) {
        for (int y = DiemY + 4; y < DiemY + 7; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    //Ve chu K
    for (int y = DiemY - 1; y < DiemY + 7; y++) {
        gotoXY(DiemX + 33, y);
        cout << " ";
    }
    gotoXY(DiemX + 34, DiemY - 1);
    cout << "   ";
    for (int y = DiemY - 1; y < DiemY + 3; y++) {
        gotoXY(DiemX + 36, y);
        cout << "  ";
    }
    gotoXY(DiemX + 37, DiemY - 1);
    cout << "    ";
    for (int y = DiemY; y < DiemY + 7; y++) {
        gotoXY(DiemX + 40, y);
        cout << " ";
    }
    gotoXY(DiemX + 34, DiemY + 6);
    cout << "      ";
    gotoXY(DiemX + 34, DiemY + 7);
    cout << "        ";
    for (int y = DiemY; y < DiemY + 7; y++) {
        gotoXY(DiemX + 41, y);
        cout << " ";
    }
    for (int y = DiemY + 4; y < DiemY + 7; y++) {
        gotoXY(DiemX + 36, y);
        cout << "  ";
    }
    gotoXY(DiemX + 39, DiemY + 3);
    cout << " ";
    //Ve chu E
    for (int y = DiemY - 1; y < DiemY + 7; y++) {
        gotoXY(DiemX + 44, y);
        cout << " ";
    }
    gotoXY(DiemX + 45, DiemY - 1);
    cout << "       ";
    gotoXY(DiemX + 45, DiemY + 7);
    cout << "        ";
    gotoXY(DiemX + 51, DiemY);
    cout << "  ";
    gotoXY(DiemX + 48, DiemY + 1);
    cout << "     ";
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 50, y);
        cout << "  ";
    }
    gotoXY(DiemX + 44, DiemY + 6);
    cout << "         ";
    gotoXY(DiemX + 47, DiemY + 4);
    cout << "     ";
    gotoXY(DiemX + 51, DiemY + 5);
    cout << "  ";
    int DiemX1 = 32;
    int DiemY1 = 14;
    backColor(6);
    gotoXY(DiemX1, DiemY1 + 1);
    cout << "                ";
    //ve Chu Menu
    backColor(2);
    //ve chu M
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 18, y);
        cout << " ";
    }
    gotoXY(DiemX1 + 19, DiemY1);
    cout << " ";
    gotoXY(DiemX1 + 20, DiemY1 + 1);
    cout << " ";
    gotoXY(DiemX1 + 21, DiemY1);
    cout << " ";
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 22, y);
        cout << " ";
    }
    //ve chu E
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 24, y);
        cout << " ";
    }
    gotoXY(DiemX1 + 25, DiemY1 - 1);
    cout << "   ";
    gotoXY(DiemX1 + 25, DiemY1 + 1);
    cout << "  ";
    gotoXY(DiemX1 + 25, DiemY1 + 3);
    cout << "   ";
    //Ve chu N
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 29, y);
        cout << " ";
    }
    gotoXY(DiemX1 + 30, DiemY1);
    cout << " ";
    gotoXY(DiemX1 + 31, DiemY1 + 1);
    cout << " ";
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 32, y);
        cout << " ";
    }
    //Ve chu U
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 34, y);
        cout << " ";
    }
    gotoXY(DiemX1 + 35, DiemY1 + 3);
    cout << "  ";
    for (int y = DiemY1 - 1; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 37, y);
        cout << " ";
    }
    backColor(6);
    gotoXY(DiemX1 + 39, DiemY1 + 1);
    cout << "               ";
    //Diem2 la diem de dieu chinh khoang cach mui ten ben trai
    int DiemX2 = 32;
    int DiemY2 = 25;
    backColor(2);
    gotoXY(DiemX2-3, DiemY2);
    cout << "    ";
    gotoXY(DiemX2 - 4, DiemY2 + 1);
    cout << "    ";
    gotoXY(DiemX2 - 5, DiemY2 + 2);
    cout << "    ";
    textColor(14);
    gotoXY(DiemX2 - 6, DiemY2 + 3);
    cout << "  "<<(char)219<<" ";
    gotoXY(DiemX2 - 5, DiemY2 + 4);
    cout << "  "<<(char)219<<" ";
    gotoXY(DiemX2 - 4, DiemY2 + 5);
    cout << "  " << (char)219 << " ";
    gotoXY(DiemX2 - 3, DiemY2 + 6);
    cout << "    ";
    //Diem3 la diem dieu khien khoang cach mui ten ben phai
    int DiemX3 = 88;
    int DiemY3 = 25;
    gotoXY(DiemX3, DiemY3);
    cout << "    ";
    gotoXY(DiemX3 + 1, DiemY3 + 1);
    cout << "    ";
    gotoXY(DiemX3 + 2, DiemY3 + 2);
    cout << "    ";
    gotoXY(DiemX3 + 3, DiemY3 + 3);
    cout << " " << (char)219 << "  ";
    gotoXY(DiemX3+2, DiemY3 + 4);
    cout << " " << (char)219 << "  ";
    gotoXY(DiemX3 + 1, DiemY3 + 5);
    cout << " " << (char)219 << "  ";
    gotoXY(DiemX3, DiemY3 + 6);
    cout << "    ";
    //DiemX4 chinh khoang cach ran
    int DiemX4 = 8;
    int DiemY4 = 16;
    backColor(0);
    gotoXY(DiemX4, DiemY4);
    cout << " ";
    for (int y = DiemY4 + 1; y < DiemY4 + 5; y++) {
        gotoXY(DiemX4 - 1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 5; y < DiemY4 + 7; y++) {
        gotoXY(DiemX4 - 2, y);
        cout << " ";
    }
    for (int y = DiemY4 + 1; y < DiemY4 + 3; y++) {
        gotoXY(DiemX4 + 1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 3; y < DiemY4 + 6; y++) {
        gotoXY(DiemX4 + 2, y);
        cout << " ";
    }
    gotoXY(DiemX4, DiemY4 + 5);
    cout << " ";
    gotoXY(DiemX4 + 1, DiemY4 + 6);
    cout << " ";
    gotoXY(DiemX4-1, DiemY4 + 7);
    cout << "  ";
    for (int y = DiemY4 + 8; y < DiemY4 + 11; y++) {
        gotoXY(DiemX4-1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 10; y < DiemY4 + 12; y++) {
        gotoXY(DiemX4, y);
        cout << " ";
    }
    for (int y = DiemY4 + 8; y < DiemY4 + 10; y++) {
        gotoXY(DiemX4 + 1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 9; y < DiemY4 + 11; y++) {
        gotoXY(DiemX4 + 2, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 1, DiemY4 + 12);
    cout << "  ";
    gotoXY(DiemX4 + 1, DiemY4 + 13);
    cout << " ";
    for (int y = DiemY4 + 14; y < DiemY4 + 18; y++) {
        gotoXY(DiemX4, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 1, DiemY4 + 18);
    cout << "  ";
    gotoXY(DiemX4 + 3, DiemY4 + 19);
    cout << "    ";
    gotoXY(DiemX4 + 7, DiemY4 + 18);
    cout << "  ";
    gotoXY(DiemX4 + 9, DiemY4 + 17);
    cout << "  ";
    gotoXY(DiemX4 + 11, DiemY4 + 16);
    cout << " ";
    for (int y = DiemY4 + 14; y < DiemY4 + 16; y++) {
        gotoXY(DiemX4 + 12, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 13, DiemY4 + 13);
    cout << " ";
    gotoXY(DiemX4 + 11, DiemY4 + 12);
    cout << "  ";
    gotoXY(DiemX4 + 8, DiemY4 + 13);
    cout << "   ";
    gotoXY(DiemX4 + 7, DiemY4 + 12);
    cout << "  ";
    gotoXY(DiemX4 + 3, DiemY4 + 13);
    cout << "    ";
    for (int y = DiemY4 + 10; y < DiemY4 + 12; y++) {
        gotoXY(DiemX4 + 9, y);
        cout << " ";
    }
    for (int y = DiemY4 + 7; y < DiemY4 + 11; y++) {
        gotoXY(DiemX4 + 10, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 9, DiemY4 + 7);
    cout << " ";
    for (int y = DiemY4 + 8; y < DiemY4 + 10; y++) {
        gotoXY(DiemX4 + 8, y);
        cout << " ";
    }
    for (int y = DiemY4 + 9; y < DiemY4 + 11; y++) {
        gotoXY(DiemX4 + 7, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 8, DiemY4 + 6);
    cout << " ";
    for (int y = DiemY4 + 3; y < DiemY4 + 6; y++) {
        gotoXY(DiemX4 + 7, y);
        cout << " ";
    }
    for (int y = DiemY4 + 1; y < DiemY4 + 3; y++) {
        gotoXY(DiemX4 + 8, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 9, DiemY4);
    cout << " ";
    for (int y = DiemY4 + 1; y < DiemY4 + 5; y++) {
        gotoXY(DiemX4 + 10, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 9, DiemY4 + 5);
    cout << " ";
    for (int y = DiemY4 + 5; y < DiemY4 + 7; y++) {
        gotoXY(DiemX4 + 11, y);
        cout << " ";
    }
    gotoXY(DiemX4 + 3, DiemY4 + 2);
    cout << "    ";
    backColor(9);
    for (int y = DiemY4 + 3; y < DiemY4 + 7; y++) {
        gotoXY(DiemX4 + 3, y);
        cout << "    ";
    }
    gotoXY(DiemX4 + 2, DiemY4 + 6);
    cout << " ";
    gotoXY(DiemX4 + 7, DiemY4 + 6);
    cout << " ";
    gotoXY(DiemX4 + 1, DiemY4 + 7);
    textColor(15);
    cout << "   " << (char)219 << (char)219 << "   ";
    gotoXY(DiemX4 + 2, DiemY4 + 8);
    cout << (char)219;
    cout << "    " << (char)219;
    gotoXY(DiemX4 + 3, DiemY4 + 9);
    cout << "    ";
    for (int y = DiemY4 + 10; y < DiemY4 + 13; y++) {
        gotoXY(DiemX4 + 3, y);
        cout << (char)219 << (char)219 << (char)219<<(char)219;
    }
    gotoXY(DiemX4 + 2, DiemY4 + 11);
    cout << (char)219;
    gotoXY(DiemX4 + 7, DiemY4 + 11);
    cout << (char)219;
    for (int y = DiemY4 + 14; y < DiemY4 + 19; y++) {
        for (int x = DiemX4 + 3; x < DiemX4 + 6; x++) {
            gotoXY(x, y);
            cout << (char)219;
        }
    }
    for (int y = DiemY4 + 15; y < DiemY4 + 18; y++) {
        gotoXY(DiemX4 + 2, y);
        cout << (char)219;
    }
    for (int y = DiemY4 + 15; y < DiemY4 + 19; y++) {
        gotoXY(DiemX4 + 6, y);
        cout << (char)219;
    }
    gotoXY(DiemX4 + 7, DiemY4 + 17);
    cout << (char)219 << (char)219;
    gotoXY(DiemX4 + 9, DiemY4 + 16);
    cout << (char)219;
    for (int y = DiemY4 + 1; y < DiemY4 + 5; y++) {
        gotoXY(DiemX4, y);
        cout << (char)219;
    }
    for (int y = DiemY4 + 3; y < DiemY4 + 6; y++) {
        gotoXY(DiemX4 + 1, y);
        cout << (char)219;
    }
    for (int y = DiemY4 + 5; y < DiemY4 + 7; y++) {
        gotoXY(DiemX4 - 1, y);
        cout << (char)219;
    }
    gotoXY(DiemX4, DiemY4 + 6);
    cout << (char)219;
    for (int y = DiemY4 + 1; y < DiemY4 + 5; y++) {
        gotoXY(DiemX4 + 9, y);
        cout << (char)219;
    }
    for (int y = DiemY4 + 3; y < DiemY4 + 6; y++) {
        gotoXY(DiemX4 + 8, y);
        cout << (char)219;
    }
    for (int y = DiemY4 + 5; y < DiemY4 + 7; y++) {
        gotoXY(DiemX4 + 10, y);
        cout << (char)219;
    }
    gotoXY(DiemX4 + 9, DiemY4 + 6);
    cout << (char)219;
    for (int y = DiemY4 + 8; y < DiemY4 + 10; y++) {
        gotoXY(DiemX4, y);
        cout << " ";
    }
    for (int y = DiemY4 + 10; y < DiemY4 + 12; y++) {
        gotoXY(DiemX4 + 1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 13; y < DiemY4 + 15; y++) {
        gotoXY(DiemX4 + 2, y);
        cout << " ";
    }
    for (int y = DiemY4 + 14; y < DiemY4 + 18; y++) {
        gotoXY(DiemX4 + 1, y);
        cout << " ";
    }
    for (int y = DiemY4 + 8; y < DiemY4 + 10; y++) {
        gotoXY(DiemX4 + 9, y);
        cout << " ";
    }
    for (int y = DiemY4 + 10; y < DiemY4 + 12; y++) {
        gotoXY(DiemX4 + 8, y);
        cout << " ";
    }
    for (int y = DiemY4 + 14; y < DiemY4 + 16; y++) {
        gotoXY(DiemX4 + 7, y);
        cout << "     ";
    }
    gotoXY(DiemX4 + 7, DiemY4 + 13);
    cout << " ";
    gotoXY(DiemX4 + 7, DiemY4 + 16);
    cout << "  " << (char)219 << " ";
    gotoXY(DiemX4 + 11, DiemY4 + 13);
    cout << "  ";
    gotoXY(DiemX4 + 6, DiemY4 + 14);
    cout << " ";
    //Dieu chinh khoang cach ran tim
    int DiemX5 = 96;
    int DiemY5 = 22;
    backColor(0);
    gotoXY(DiemX5, DiemY5);
    cout << " ";
    gotoXY(DiemX5, DiemY5 + 1);
    cout << " ";
    for (int y = DiemY5 - 3; y < DiemY5; y++) {
        gotoXY(DiemX5 + 1, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 2, DiemY5 - 4);
    cout << " ";
    gotoXY(DiemX5 + 3, DiemY5 - 5);
    cout << "  ";
    gotoXY(DiemX5 + 5, DiemY5 - 6);
    cout << "    ";
    gotoXY(DiemX5 + 9, DiemY5 - 5);
    cout << "  ";
    gotoXY(DiemX5 + 11, DiemY5 - 4);
    cout << " ";
    gotoXY(DiemX5 + 12, DiemY5 - 3);
    cout << " ";
    gotoXY(DiemX5 + 13, DiemY5 - 2);
    cout << " ";
    for (int y = DiemY5 - 1; y < DiemY5 + 1; y++) {
        gotoXY(DiemX5 + 14, y);
        cout << " ";
    }
    for (int y = DiemY5+1; y < DiemY5 + 5; y++) {
        gotoXY(DiemX5 + 15, y);
        cout << " ";
    }
    for (int y = DiemY5 + 5; y < DiemY5 + 7; y++) {
        gotoXY(DiemX5 + 14, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 13, DiemY5 + 7);
    cout << "   ";
    gotoXY(DiemX5 + 16, DiemY5 + 8);
    cout << " ";
    for (int y = DiemY5 + 9; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 17, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 16, DiemY5 + 13);
    cout << " ";
    gotoXY(DiemX5 + 13, DiemY5 + 14);
    cout << "   ";
    gotoXY(DiemX5 + 14, DiemY5 + 13);
    cout << " ";
    for (int y = DiemY5 + 10; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 15, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 11, DiemY5 + 9);
    cout << "    ";
    for (int y = DiemY5 + 8; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 12, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 13, DiemY5 + 10);
    cout << " ";
    gotoXY(DiemX5 + 11, DiemY5 + 13);
    cout << " ";
    gotoXY(DiemX5 + 10, DiemY5 + 10);
    cout << " ";
    gotoXY(DiemX5 + 7, DiemY5 + 11);
    cout << "   ";
    gotoXY(DiemX5 + 7, DiemY5 + 14);
    cout << "    ";
    gotoXY(DiemX5 + 9, DiemY5 + 15);
    cout << "     ";
    gotoXY(DiemX5 + 6, DiemY5 + 13);
    cout << " ";
    for (int y = DiemY5 + 10; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 5, y);
        cout << " ";
    }
    for (int y = DiemY5 + 8; y < DiemY5 + 11; y++) {
        gotoXY(DiemX5 + 6, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 5, DiemY5 + 8);
    cout << " ";
    gotoXY(DiemX5 + 3, DiemY5 + 9);
    cout << "  ";
    gotoXY(DiemX5 + 2, DiemY5 + 10);
    cout << " ";
    gotoXY(DiemX5 + 3, DiemY5 + 11);
    cout << "  ";
    for (int y = DiemY5 + 6; y < DiemY5 + 8; y++) {
        gotoXY(DiemX5 + 7, y);
        cout << "   ";
    }
    gotoXY(DiemX5 + 10, DiemY5 + 6);
    cout << " ";
    gotoXY(DiemX5 + 11, DiemY5 + 5);
    cout << " ";
    gotoXY(DiemX5 + 8, DiemY5 + 5);
    cout << " ";
    gotoXY(DiemX5 + 6, DiemY5 + 5);
    cout << " ";
    gotoXY(DiemX5 + 5, DiemY5 + 4);
    cout << " ";
    gotoXY(DiemX5 + 2, DiemY5 + 3);
    cout << "   ";
    gotoXY(DiemX5 + 1, DiemY5 + 2);
    cout << "  ";
    gotoXY(DiemX5 + 5, DiemY5 + 2);
    cout << "  ";
    gotoXY(DiemX5 + 7, DiemY5 + 1);
    cout << "   ";
    for (int y = DiemY5; y < DiemY5 + 3; y++) {
        gotoXY(DiemX5 + 8, y);
        cout << " ";
    }
    for (int y = DiemY5 -1; y < DiemY5+1 ; y++) {
        gotoXY(DiemX5 +9, y);
        cout << "   ";
    }
    for (int y = DiemY5; y < DiemY5 + 3; y++) {
        gotoXY(DiemX5 + 12, y);
        cout << " ";
    }
    for (int y = DiemY5 + 2; y < DiemY5 + 4; y++) {
        gotoXY(DiemX5 + 13, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 4, DiemY5);
    cout << " ";
    backColor(13);
    gotoXY(DiemX5 + 5, DiemY5 - 5);
    cout << "    ";
    gotoXY(DiemX5 + 3, DiemY5 - 4);
    cout << "        ";
    gotoXY(DiemX5 + 2, DiemY5 - 3);
    cout << "          ";
    gotoXY(DiemX5 + 2, DiemY5 - 2);
    cout << "           ";
    gotoXY(DiemX5 + 2, DiemY5 - 1);
    textColor(15);
    cout << "   " << (char)219 << "  ";
    gotoXY(DiemX5 + 12, DiemY5-1);
    cout << " ";
    gotoXY(DiemX5+1, DiemY5);
    cout << "   ";
    gotoXY(DiemX5 + 13, DiemY5);
    cout << " ";
    gotoXY(DiemX5 + 5, DiemY5);
    cout << (char)219;
    gotoXY(DiemX5 + 1, DiemY5 + 1);
    cout << "  ";
    gotoXY(DiemX5 + 13, DiemY5 + 1);
    cout << " ";
    backColor(5);
    gotoXY(DiemX5 + 3, DiemY5 + 1);
    cout << "    ";
    gotoXY(DiemX5 + 6, DiemY5);
    cout << "  ";
    gotoXY(DiemX5 + 8, DiemY5 - 1);
    cout << " ";
    gotoXY(DiemX5 + 13, DiemY5 - 1);
    cout << " ";
    gotoXY(DiemX5 + 3, DiemY5 + 2);
    cout << "  ";
    gotoXY(DiemX5 + 7, DiemY5 + 2);
    cout << " ";
    gotoXY(DiemX5 + 9, DiemY5 + 2);
    cout << " ";
    gotoXY(DiemX5 + 10, DiemY5 + 1);
    cout << "  ";
    backColor(4);
    textColor(6);
    gotoXY(DiemX5 + 5, DiemY5 + 3);
    cout << " " << (char)219 << " ";
    gotoXY(DiemX5 + 6, DiemY5 + 4);
    cout << "  ";
    gotoXY(DiemX5 + 7, DiemY5 + 5);
    cout << " ";
    gotoXY(DiemX5 + 9, DiemY5 + 3);
    cout << " " << (char)219 << " ";
    gotoXY(DiemX5 + 10, DiemY5 + 2);
    cout << "  ";
    gotoXY(DiemX5 + 9, DiemY5 + 4);
    cout << " " << (char)219;
    gotoXY(DiemX5 + 10, DiemY5 + 5);
    cout << " ";
    backColor(5);
    for (int y = DiemY5 + 3; y < DiemY5 + 5; y++) {
        gotoXY(DiemX5 + 8, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 9, DiemY5 + 5);
    cout << " ";
    gotoXY(DiemX5 + 14, DiemY5 + 1);
    cout << " ";
    gotoXY(DiemX5 + 11, DiemY5 + 4);
    cout << "    ";
    gotoXY(DiemX5 + 12, DiemY5 + 3);
    cout << " ";
    for (int y = DiemY5 + 5; y < DiemY5 + 7; y++) {
        gotoXY(DiemX5 + 12, y);
        cout << "  ";
    }
    gotoXY(DiemX5 + 11, DiemY5 + 6);
    cout << " ";
    gotoXY(DiemX5 + 10, DiemY5 + 7);
    cout << "   ";
    gotoXY(DiemX5 + 13, DiemY5 + 8);
    cout << "   ";
    gotoXY(DiemX5 + 15, DiemY5 + 9);
    cout << "  ";
    for (int y = DiemY5 + 10; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 16, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 15, DiemY5 + 13);
    cout << " ";
    for (int y = DiemY5 + 10; y < DiemY5 + 13;y++) {
        gotoXY(DiemX5 + 14, y);
        cout << " ";
    }
    for (int y = DiemY5 + 11; y < DiemY5 + 14;y++) {
        gotoXY(DiemX5 + 13, y);
        cout << " ";
    }
    for (int y = DiemY5 + 13; y < DiemY5 + 15; y++) {
        gotoXY(DiemX5 + 12, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 11, DiemY5 + 14);
    cout << " ";
    gotoXY(DiemX5 + 5, DiemY5 + 9);
    cout << " ";
    gotoXY(DiemX5 + 6, DiemY5 + 12);
    cout << " ";
    gotoXY(DiemX5 + 7, DiemY4 + 15);
    cout << "    ";
    gotoXY(DiemX5 + 10, DiemY5 + 12);
    cout << " ";
    for (int y = DiemY5 + 10; y < DiemY5 + 13; y++) {
        gotoXY(DiemX5 + 11, y);
        cout << " ";
    }
    backColor(13);
    gotoXY(DiemX5 + 3, DiemY5 + 10);
    cout << "  ";
    gotoXY(DiemX5 + 6, DiemY5 + 11);
    cout << " ";
    gotoXY(DiemX5 + 7, DiemY5 + 12);
    cout << "   ";
    gotoXY(DiemX5 + 10, DiemY5 + 11);
    cout << " ";
    for (int y = DiemY5 + 2; y < DiemY5 + 4; y++) {
        gotoXY(DiemX5 + 14, y);
        cout << " ";
    }
    gotoXY(DiemX5 + 7, DiemY5 + 8);
    cout << "     ";
    gotoXY(DiemX5 + 7, DiemY5 + 9);
    cout << "    ";
    gotoXY(DiemX5 + 7, DiemY5 + 10);
    cout << "   ";
    backColor(5);
    gotoXY(DiemX5 + 7, DiemY5 + 13);
    cout << "    ";
}

void Introduction() {
	system("cls");
	MoveCenter();
	FixConsoleWindow();
	SetConsoleWindow(1200, 700);
	setCellSize(12, 16);
	for (int i = 0; i < 121; i++) {
		for (int j = 0; j < 51; j++) {
			gotoXY(i, j);
			backColor(14);
			cout << " ";
		}
	}
	int x1 = 14;
	int y1 = 12;
	amongus(x1, y1, 3, 11);
	amongus(x1 + 20, y1, 1, 9);
	amongus(x1 + 60, y1, 2, 10);
	amongus(x1 + 80, y1, 8, 7);
	amongus(x1 + 40, y1, 4, 12);
	int x2 = 1;
	int y2 = 1;
	charI(x2 + 0, y2, 0, 15);
	charN(x2 + 10, y2, 0, 15);
	charT(x2 + 20, y2, 0, 15);
	charR(x2 + 30, y2, 0, 15);
	charO(x2 + 40, y2, 0, 15);
	charD(x2 + 50, y2, 0, 15);
	charU(x2 + 60, y2, 0, 15);
	charC(x2 + 70, y2, 0, 15);
	charT(x2 + 80, y2, 0, 15);
	charI(x2 + 90, y2, 0, 15);
	charO(x2 + 100, y2, 0, 15);
	charN(x2 + 110, y2, 0, 15);
	nameMem(11, 25);
	howToPlay(11, 36);
	instruction(63, 32);
	gotoXY(0, 50);
	backColor(14);
	cout << " ";
}


void NewGameWord() {
    int DiemX2 = 43;
    int DiemY2 = 27;
    //ve khung
    backColor(14);
    for (int y = DiemY2; y < DiemY2 + 7; y++) {
        gotoXY(DiemX2, y);
        cout << "                                   ";
    }
    backColor(0);
    //Ve chu New Game
    //ve chu N
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 1, DiemY2 + 1);
    cout << " ";
    gotoXY(DiemX2 + 2, DiemY2 + 2);
    cout << " ";
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 3, y);
        cout << " ";
    }
    //Ve chu E
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 5, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 6, DiemY2);
    cout << "  ";
    gotoXY(DiemX2 + 6, DiemY2 + 2);
    cout << " ";
    gotoXY(DiemX2 + 6, DiemY2 + 3);
    cout << "  ";
    //Ve chu W
    for (int y = DiemY2; y < DiemY2 + 3; y++) {
        gotoXY(DiemX2 + 9, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 10, DiemY2 + 3);
    cout << " ";
    for (int y = DiemY2; y < DiemY2 + 3; y++) {
        gotoXY(DiemX2 + 11, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 12, DiemY2 + 3);
    cout << " ";
    for (int y = DiemY2; y < DiemY2 + 3; y++) {
        gotoXY(DiemX2 + 13, y);
        cout << " ";
    }
    //Ve chu Game
    //Ve chu G
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 16, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 17, DiemY2);
    cout << "   ";
    gotoXY(DiemX2 + 17, DiemY2 + 3);
    cout << "   ";
    gotoXY(DiemX2 + 19, DiemY2 + 2);
    cout << " ";
    //Ve chu A
    for (int y = DiemY2 + 1; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 21, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 22, DiemY2);
    cout << " ";
    gotoXY(DiemX2 + 22, DiemY2 + 2);
    cout << " ";
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 23, y);
        cout << " ";
    }
    //Ve chu M
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 25, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 26, DiemY2);
    cout << " ";
    gotoXY(DiemX2 + 27, DiemY2 + 1);
    cout << " ";
    gotoXY(DiemX2 + 28, DiemY2);
    cout << " ";
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 29, y);
        cout << " ";
    }
    //Chu E
    for (int y = DiemY2; y < DiemY2 + 4; y++) {
        gotoXY(DiemX2 + 31, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 32, DiemY2);
    cout << "  ";
    gotoXY(DiemX2 + 32, DiemY2 + 2);
    cout << " ";
    gotoXY(DiemX2 + 32, DiemY2 + 3);
    cout << "  ";
    //ve khung
    backColor(3);
    gotoXY(DiemX2 - 1, DiemY2 - 3);
    cout << "                                    ";
    gotoXY(DiemX2 + 35, DiemY2 - 2);
    cout << " ";
    for (int y = DiemY2 - 1; y < DiemY2 + 5; y++) {
        gotoXY(DiemX2 + 36, y);
        cout << " ";
    }
    gotoXY(DiemX2 + 35, DiemY2 + 5);
    cout << " ";
    gotoXY(DiemX2 - 1, DiemY2 + 6);
    cout << "                                    ";
    gotoXY(DiemX2 - 2, DiemY2 + 5);
    cout << " ";
    gotoXY(DiemX2 - 2, DiemY2 - 2);
    cout << " ";
    for (int y = DiemY2 - 1; y < DiemY2 + 5; y++) {
        gotoXY(DiemX2 - 3, y);
        cout << " ";
    }
}

void ContinueWord() {
    int DiemX = 43;
    int DiemY = 27;
    //Khung vang 
    backColor(14);
    for (int y = DiemY - 3; y < DiemY + 7; y++) {
        gotoXY(DiemX, y);
        cout << "                                         ";
    }
    backColor(0);
    //Ve chu C
    gotoXY(DiemX, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    gotoXY(DiemX, DiemY + 3);
    cout << "   ";
    //Ve chu O
    gotoXY(DiemX + 4, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 4, y);
        cout << " ";
    }
    gotoXY(DiemX + 4, DiemY + 3);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 7, y);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 9, y);
        cout << " ";
    }
    gotoXY(DiemX + 10, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 11, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 12, y);
        cout << " ";
    }
    //Ve chu T
    gotoXY(DiemX + 14, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 15, y);
        cout << " ";
    }
    //Ve chu I
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 18, y);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 20, y);
        cout << " ";
    }
    gotoXY(DiemX + 21, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 22, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 23, y);
        cout << " ";
    }
    //Ve chu U
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 25, y);
        cout << " ";
    }
    gotoXY(DiemX + 25, DiemY + 3);
    cout << "    ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 28, y);
        cout << " ";
    }
    //Ve chu E
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 30, y);
        cout << " ";
    }
    gotoXY(DiemX + 31, DiemY);
    cout << "  ";
    gotoXY(DiemX + 31, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 31, DiemY + 3);
    cout << "  ";
    //Ve khung
    backColor(3);
    gotoXY(DiemX - 1, DiemY - 3);
    cout << "                                    ";
    gotoXY(DiemX + 35, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 36, y);
        cout << " ";
    }
    gotoXY(DiemX + 35, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 1, DiemY + 6);
    cout << "                                    ";
    gotoXY(DiemX - 2, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 2, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX - 3, y);
        cout << " ";
    }
}

void LoadGameWord() {
    int DiemX = 43;
    int DiemY = 27;
    //Khung vang 
    backColor(14);
    for (int y = DiemY - 2; y < DiemY + 7; y++) {
        gotoXY(DiemX, y);
        cout << "                                      ";
    }
    backColor(0);
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    gotoXY(DiemX, DiemY + 3);
    cout << "   ";
    //Ve chu O
    gotoXY(DiemX + 4, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 4, y);
        cout << " ";
    }
    gotoXY(DiemX + 4, DiemY + 3);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 7, y);
        cout << " ";
    }
    //Ve chu A
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 9, y);
        cout << " ";
    }
    gotoXY(DiemX + 10, DiemY);
    cout << " ";
    gotoXY(DiemX + 10, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 11, y);
        cout << " ";
    }
    //Ve chu D
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 13, y);
        cout << " ";
    }
    gotoXY(DiemX + 13, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 3; y++) {
        gotoXY(DiemX + 16, y);
        cout << " ";
    }
    gotoXY(DiemX + 13, DiemY + 3);
    cout << "   ";
    //Ve chu Game
     //Ve chu G
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 19, y);
        cout << " ";
    }
    gotoXY(DiemX + 20, DiemY);
    cout << "   ";
    gotoXY(DiemX + 20, DiemY + 3);
    cout << "   ";
    gotoXY(DiemX + 22, DiemY + 2);
    cout << " ";
    //Ve chu A
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 24, y);
        cout << " ";
    }
    gotoXY(DiemX + 25, DiemY);
    cout << " ";
    gotoXY(DiemX + 25, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 26, y);
        cout << " ";
    }
    //Ve chu M
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 28, y);
        cout << " ";
    }
    gotoXY(DiemX + 29, DiemY);
    cout << " ";
    gotoXY(DiemX + 30, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 31, DiemY);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 32, y);
        cout << " ";
    }
    //Chu E
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 34, y);
        cout << " ";
    }
    gotoXY(DiemX + 35, DiemY);
    cout << "  ";
    gotoXY(DiemX + 35, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 35, DiemY + 3);
    cout << "  ";
    //Ve Khung
    backColor(3);
    gotoXY(DiemX - 1, DiemY - 3);
    cout << "                                      ";
    gotoXY(DiemX + 37, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 38, y);
        cout << " ";
    }
    gotoXY(DiemX + 37, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 1, DiemY + 6);
    cout << "                                      ";
    gotoXY(DiemX - 2, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 2, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX - 3, y);
        cout << " ";
    }
}
void HighScoreWord() {
    int DiemX = 43;
    int DiemY = 27;
    //Ve khung vang
    backColor(14);
    for (int y = DiemY - 3; y < DiemY + 7; y++) {
        gotoXY(DiemX-10, y);
        cout << "                                                      ";
    }
    //Ve chu H
    backColor(0);
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    gotoXY(DiemX, DiemY + 2);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX+3, y);
        cout << " ";
    }
    //ve chu I
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 5, y);
        cout << " ";
    }
    //Ve chu G
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 7, y);
        cout << " ";
    }
    gotoXY(DiemX + 8, DiemY);
    cout << "   ";
    gotoXY(DiemX + 8, DiemY + 3);
    cout << "   ";
    gotoXY(DiemX + 10, DiemY + 2);
    cout << " ";
    //Ve chu H
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX+12, y);
        cout << " ";
    }
    gotoXY(DiemX+12, DiemY + 2);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 15, y);
        cout << " ";
    }
    //Ve chu S
    for (int y = DiemY; y < DiemY + 2; y++) {
        gotoXY(DiemX + 18, y);
        cout << " ";
    }
    gotoXY(DiemX + 18, DiemY);
    cout << "  ";
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 19, y);
        cout << " ";
    }
    gotoXY(DiemX + 18, DiemY+3);
    cout << " ";
    //ve chu C
    gotoXY(DiemX+21, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX+21, y);
        cout << " ";
    }
    gotoXY(DiemX+21, DiemY + 3);
    cout << "   ";
    //Ve chu O
    gotoXY(DiemX + 25, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 25, y);
        cout << " ";
    }
    gotoXY(DiemX + 25, DiemY + 3);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 28, y);
        cout << " ";
    }
    //Ve chu R
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 30, y);
        cout << " ";
    }
    gotoXY(DiemX + 31, DiemY);
    cout << "  ";
    gotoXY(DiemX + 32, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 31, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 32, DiemY + 3);
    cout << " ";
    //Ve chu E
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 34, y);
        cout << " ";
    }
    gotoXY(DiemX + 35, DiemY);
    cout << "  ";
    gotoXY(DiemX + 35, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 35, DiemY + 3);
    cout << "  ";
    //Ve khung
    backColor(3);
    gotoXY(DiemX - 1, DiemY - 3);
    cout << "                                      ";
    gotoXY(DiemX + 37, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 38, y);
        cout << " ";
    }
    gotoXY(DiemX + 37, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 1, DiemY + 6);
    cout << "                                      ";
    gotoXY(DiemX - 2, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 2, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX - 3, y);
        cout << " ";
    }
}

void IntroductionWord() {
    int DiemX = 31;
    int DiemY = 27;
    //Ve khung vang
    backColor(14);
    for (int y = DiemY - 2; y < DiemY + 7; y++) {
        gotoXY(DiemX+3, y);
        cout << "                                                   ";
    }
    //Ve chu I
    backColor(0);
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 5, y);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 7, y);
        cout << " ";
    }
    gotoXY(DiemX + 8, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 9, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 10, y);
        cout << " ";
    }
    //Ve chu T
    gotoXY(DiemX + 12, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 13, y);
        cout << " ";
    }
    //Ve chu R
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 16, y);
        cout << " ";
    }
    gotoXY(DiemX + 17, DiemY);
    cout << "  ";
    gotoXY(DiemX + 18, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 17, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 18, DiemY + 3);
    cout << " ";
    //Ve chu O
    gotoXY(DiemX + 20, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 20, y);
        cout << " ";
    }
    gotoXY(DiemX + 20, DiemY + 3);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 23, y);
        cout << " ";
    }
    //Ve chu D
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 25, y);
        cout << " ";
    }
    gotoXY(DiemX + 25, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 3; y++) {
        gotoXY(DiemX + 28, y);
        cout << " ";
    }
    gotoXY(DiemX + 25, DiemY + 3);
    cout << "   ";
    //Ve chu U
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 30, y);
        cout << " ";
    }
    gotoXY(DiemX + 30, DiemY + 3);
    cout << "    ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 33, y);
        cout << " ";
    }
    //Ve chu C
    gotoXY(DiemX + 35, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 35, y);
        cout << " ";
    }
    gotoXY(DiemX + 35, DiemY + 3);
    cout << "   ";
    //ve chu T
    gotoXY(DiemX + 39, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 40, y);
        cout << " ";
    }
    //Ve chu I
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 43, y);
        cout << " ";
    }
    //Ve chu O
    gotoXY(DiemX + 45, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 45, y);
        cout << " ";
    }
    gotoXY(DiemX + 45, DiemY + 3);
    cout << "   ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 48, y);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 50, y);
        cout << " ";
    }
    gotoXY(DiemX + 51, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 52, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 53, y);
        cout << " ";
    }
    //Ve Khung
    backColor(3);
    gotoXY(DiemX +5, DiemY - 3);
    cout << "                                                 ";
    gotoXY(DiemX + 54, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 55, y);
        cout << " ";
    }
    gotoXY(DiemX + 54, DiemY + 5);
    cout << " ";
    gotoXY(DiemX +5, DiemY + 6);
    cout << "                                                 ";
    gotoXY(DiemX +4, DiemY + 5);
    cout << " ";
    gotoXY(DiemX +4, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX +3, y);
        cout << " ";
    }
}

void SettingsWord() {
    int DiemX = 46;
    int DiemY = 27;
    //Ve khung vang
    backColor(14);
    for (int y = DiemY - 3; y < DiemY + 7; y++) {
        gotoXY(DiemX-12, y);
        cout << "                                                     ";
    }
    //Ve chu S
    backColor(0);
    for (int y = DiemY; y < DiemY + 2; y++) {
        gotoXY(DiemX, y);
        cout << " ";
    }
    gotoXY(DiemX, DiemY);
    cout << "  ";
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 1, y);
        cout << " ";
    }
    gotoXY(DiemX, DiemY + 3);
    cout << " ";
    //Ve chu E
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 3, y);
        cout << " ";
    }
    gotoXY(DiemX + 4, DiemY);
    cout << "  ";
    gotoXY(DiemX + 4, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 4, DiemY + 3);
    cout << "  ";
    // Ve chu T
    gotoXY(DiemX + 7, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 8, y);
        cout << " ";
    }
    //Ve chu T
    gotoXY(DiemX + 11, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX +12, y);
        cout << " ";
    }
    //Ve chu I
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 15, y);
        cout << " ";
    }
    //Ve chu N
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 17, y);
        cout << " ";
    }
    gotoXY(DiemX + 18, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 19, DiemY + 2);
    cout << " ";
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 20, y);
        cout << " ";
    }
    //Ve chu G
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 22, y);
        cout << " ";
    }
    gotoXY(DiemX + 23, DiemY);
    cout << "   ";
    gotoXY(DiemX + 23, DiemY + 3);
    cout << "   ";
    gotoXY(DiemX + 25, DiemY + 2);
    cout << " ";
    //Ve chu S
    for (int y = DiemY; y < DiemY + 2; y++) {
        gotoXY(DiemX+27, y);
        cout << " ";
    }
    gotoXY(DiemX+27, DiemY);
    cout << "  ";
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 28, y);
        cout << " ";
    }
    gotoXY(DiemX+27, DiemY + 3);
    cout << " ";
    //Ve Khung
    backColor(3);
    gotoXY(DiemX - 4, DiemY - 3);
    cout << "                                     ";
    gotoXY(DiemX + 33, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 34, y);
        cout << " ";
    }
    gotoXY(DiemX + 33, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 4, DiemY + 6);
    cout << "                                     ";
    gotoXY(DiemX - 5, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 5, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX - 6, y);
        cout << " ";
    }
}
void ExitWord() {
    int DiemX = 52;
    int DiemY = 27;
    //Ve khung vang
    backColor(14);
    for (int y = DiemY - 3; y < DiemY + 7; y++) {
        gotoXY(DiemX - 14, y);
        cout << "                                             ";
    }
    //ve chu E
    backColor(0);
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 3, y);
        cout << " ";
    }
    gotoXY(DiemX + 4, DiemY);
    cout << "  ";
    gotoXY(DiemX + 4, DiemY + 2);
    cout << " ";
    gotoXY(DiemX + 4, DiemY + 3);
    cout << "  ";
    //Ve chu X
    gotoXY(DiemX + 7, DiemY);
    cout << " ";
    gotoXY(DiemX + 8, DiemY + 1);
    cout << " ";
    gotoXY(DiemX + 9, DiemY);
    cout << " ";
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 7, y);
        cout << " ";
    }
    for (int y = DiemY + 2; y < DiemY + 4; y++) {
        gotoXY(DiemX + 9, y);
        cout << " ";
    }
    //Ve chu I
    for (int y = DiemY; y < DiemY + 4; y++) {
        gotoXY(DiemX + 11, y);
        cout << " ";
    }
    //Ve chu T
    gotoXY(DiemX + 13, DiemY);
    cout << "   ";
    for (int y = DiemY + 1; y < DiemY + 4; y++) {
        gotoXY(DiemX + 14, y);
        cout << " ";
    }
    //Ve Khung
    backColor(3);
    gotoXY(DiemX - 4, DiemY - 3);
    cout << "                           ";
    gotoXY(DiemX + 23, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX + 24, y);
        cout << " ";
    }
    gotoXY(DiemX + 23, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 4, DiemY + 6);
    cout << "                           ";
    gotoXY(DiemX - 5, DiemY + 5);
    cout << " ";
    gotoXY(DiemX - 5, DiemY - 2);
    cout << " ";
    for (int y = DiemY - 1; y < DiemY + 5; y++) {
        gotoXY(DiemX - 6, y);
        cout << " ";
    }
}

#include "Header.h"

void drawLoadGame() {
    //ve khung menu
    backColor(2);
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 0);
        cout << " ";
    }
    for (int y = 0; y < 50; y++) {
        gotoXY(0, y);
        cout << " ";

    }
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 50);
        cout << " ";
    }
    for (int y = 0; y < 51; y++) {
        gotoXY(120, y);
        cout << " ";

    }
    cout << endl;
    //to mau nen menu

    for (int y = 1; y < 50; y++) {
        for (int x = 1; x < 120; x++) {
            gotoXY(x, y);
            //textColor(14);
            backColor(14);
            cout << " ";
        }
    }
    cout << endl;

    //vẽ chữ L
    for (int y = 2; y <= 9; y++) {
        for (int x = 19; x <= 22; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 6; y <= 9; y++) {
        for (int x = 19; x <= 26; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 7; y <= 10; y++) {
        for (int x = 20; x <= 27; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 3; y <= 8; y++) {
        for (int x = 20; x <= 21; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int x = 20; x <= 25; x++) {
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }
    for (int x = 24; x <= 25; x++) {
        gotoXY(x, 7);
        backColor(13);
        cout << " ";
    }

    //vẽ chữ O
    for (int y = 3; y <= 8; y++) {
        gotoXY(29, y); // Giảm 53 đơn vị từ 82 thành 29, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(30, y); // Giảm 53 đơn vị từ 83 thành 30, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(30, y); // Giảm 53 đơn vị từ 83 thành 30, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(30, y); // Giảm 53 đơn vị từ 83 thành 30, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(31, y); // Giảm 53 đơn vị từ 84 thành 31, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int x = 32; x <= 33; x++) { // Giảm 53 đơn vị từ 85 và 86 thành 32 và 33
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 32; x <= 33; x++) { // Giảm 53 đơn vị từ 85 và 86 thành 32 và 33
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(35, y); // Giảm 53 đơn vị từ 88 thành 35, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(34, y); // Giảm 53 đơn vị từ 87 thành 34, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int x = 31; x <= 34; x++) { // Giảm 53 đơn vị từ 84 và 87 thành 31 và 34
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 31; x <= 34; x++) { // Giảm 53 đơn vị từ 84 và 87 thành 31 và 34
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(35, y); // Giảm 53 đơn vị từ 88 thành 35, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(35, y); // Giảm 53 đơn vị từ 88 thành 35, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 9; y++) {
        gotoXY(36, y); // Giảm 53 đơn vị từ 89 thành 36, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 9; y++) {
        gotoXY(37, y); // Giảm 53 đơn vị từ 90 thành 37, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(33, y); // Giảm 53 đơn vị từ 86 thành 33, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(32, y); // Giảm 53 đơn vị từ 85 thành 32, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int x = 31; x <= 36; x++) { // Giảm 53 đơn vị từ 84 và 89 thành 31 và 36
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }

    //vẽ chữ A
    for (int y = 3; y <= 9; y++) {
        for (int x = 39; x <= 46; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 2; y <= 10; y++) {
        for (int x = 40; x <= 45; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 4; y <= 10; y++) {
        for (int x = 42; x <= 47; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 4; y <= 8; y++) {
        for (int x = 40; x <= 41; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int y = 4; y <= 8; y++) {
        for (int x = 44; x <= 45; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int x = 41; x <= 44; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }
    for (int x = 41; x <= 44; x++) {
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }

    //vẽ chữ D
    for (int y = 2; y <= 9; y++) {
        for (int x = 49; x <= 55; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 3; y <= 10; y++) {
        for (int x = 50; x <= 56; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 4; y <= 9; y++) {
        for (int x = 52; x <= 57; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 4; y <= 9; y++) {
        for (int x = 52; x <= 57; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 3; y <= 8; y++) {
        for (int x = 50; x <= 51; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int y = 4; y <= 7; y++) {
        for (int x = 54; x <= 55; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int x = 52; x <= 54; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }
    for (int x = 52; x <= 54; x++) {
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    // vẽ chữ G
    for (int y = 3; y <= 8; y++) {
        gotoXY(62, y); // Tăng 25 đơn vị từ 37 thành 62, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(63, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(13); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(63, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(63, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(64, y); // Tăng 25 đơn vị từ 39 thành 64, giữ nguyên y
        backColor(13); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int x = 64; x <= 68; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 2);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 65; x <= 67; x++) { // Tăng 25 đơn vị từ 40 thành 65
        gotoXY(x, 3);
        backColor(13); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 67; x <= 68; x++) { // Tăng 25 đơn vị từ 42 thành 67
        gotoXY(x, 4);
        backColor(13); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 68; x <= 69; x++) { // Tăng 25 đơn vị từ 43 thành 68
        gotoXY(x, 3);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 69; x <= 70; x++) { // Tăng 25 đơn vị từ 44 thành 69
        gotoXY(x, 4);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 65; x <= 66; x++) { // Tăng 25 đơn vị từ 40 thành 65
        gotoXY(x, 8);
        backColor(13); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 66; x <= 68; x++) { // Tăng 25 đơn vị từ 41 thành 66
        gotoXY(x, 6);
        backColor(13); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 67; x <= 68; x++) { // Tăng 25 đơn vị từ 42 thành 67
        gotoXY(x, 7);
        backColor(13); // Dat mau nen la mau do
        cout << " ";
    }

    gotoXY(68, 8); // Tăng 25 đơn vị từ 43 thành 68
    backColor(13); // Dat mau nen la mau do
    cout << " ";

    for (int x = 64; x <= 70; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 9);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 64; x <= 70; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 10);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int y = 5; y <= 8; y++) {
        gotoXY(69, y); // Tăng 25 đơn vị từ 44 thành 69, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 5; y <= 8; y++) {
        gotoXY(70, y); // Tăng 25 đơn vị từ 45 thành 70, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(65, y); // Tăng 25 đơn vị từ 40 thành 65, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 4; y <= 5; y++) {
        gotoXY(66, y); // Tăng 25 đơn vị từ 41 thành 66, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    gotoXY(66, 7); // Tăng 25 đơn vị từ 41 thành 66, giữ nguyên y
    backColor(16); // Dat mau nen la mau do
    cout << " ";

    gotoXY(67, 5); // Tăng 25 đơn vị từ 42 thành 67, giữ nguyên y
    backColor(16); // Dat mau nen la mau do
    cout << " ";

    gotoXY(68, 5); // Tăng 25 đơn vị từ 43 thành 68, giữ nguyên y
    backColor(16); // Dat mau nen la mau do
    cout << " ";

    gotoXY(67, 8); // Tăng 25 đơn vị từ 42 thành 67, giữ nguyên y
    backColor(16); // Dat mau nen la mau do
    cout << " ";

    gotoXY(68, 10); // Tăng 25 đơn vị từ 43 thành 68, giữ nguyên y
    backColor(16); // Dat mau nen la mau do
    cout << " ";

    //vẽ chữ A
    for (int y = 3; y <= 9; y++) {
        for (int x = 72; x <= 79; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 2; y <= 10; y++) {
        for (int x = 73; x <= 78; x++) { // Thêm 33 đơn vị từ 40 thành 73
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 4; y <= 10; y++) {
        for (int x = 75; x <= 80; x++) { // Thêm 33 đơn vị từ 42 thành 75
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 4; y <= 8; y++) {
        for (int x = 73; x <= 74; x++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int y = 4; y <= 8; y++) {
        for (int x = 77; x <= 78; x++) { // Thêm 33 đơn vị từ 44 thành 77
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int x = 74; x <= 77; x++) { // Thêm 33 đơn vị từ 41 thành 74
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 74; x <= 77; x++) { // Thêm 33 đơn vị từ 41 thành 74
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }

    //ve chữ M
    for (int y = 2; y <= 9; y++) {
        for (int x = 82; x <= 89; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 4; y <= 10; y++) {
        for (int x = 83; x <= 85; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 3; y <= 10; y++) {
        for (int x = 88; x <= 90; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }
    for (int y = 3; y <= 5; y++) {
        for (int x = 83; x <= 84; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int y = 3; y <= 5; y++) {
        for (int x = 87; x <= 88; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int y = 5; y <= 6; y++) {
        for (int x = 85; x <= 86; x++) { // Thêm 33 đơn vị từ 39 thành 72
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }
    for (int y = 6; y <= 8; y++) {
            gotoXY(83, y);
            backColor(13);
            cout << " ";
    }
    for (int y = 6; y <= 8; y++) {
        gotoXY(88, y);
        backColor(13);
        cout << " ";
    }

    //vẽ chữ E
    for (int y = 2; y <= 9; y++) {
        gotoXY(92, y); // Giảm 10 đơn vị từ 102 thành 92, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        for (int x = 93; x <= 94; x++) { // Giảm 10 đơn vị từ 103 và 104 thành 93 và 94
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int y = 5; y <= 6; y++) {
        for (int x = 95; x <= 97; x++) { // Giảm 10 đơn vị từ 105 đến 107 thành 95 đến 97
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int x = 95; x <= 98; x++) { // Giảm 10 đơn vị từ 105 đến 108 thành 95 đến 98
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 95; x <= 98; x++) { // Giảm 10 đơn vị từ 105 đến 108 thành 95 đến 98
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    for (int y = 9; y <= 10; y++) {
        for (int x = 93; x <= 100; x++) { // Giảm 10 đơn vị từ 103 và 110 thành 93 và 100
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int x = 93; x <= 99; x++) { // Giảm 10 đơn vị từ 103 đến 109 thành 93 đến 99
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 99; x <= 100; x++) { // Giảm 10 đơn vị từ 109 đến 110 thành 99 đến 100
        gotoXY(x, 3);
        backColor(16);
        cout << " ";
    }

    for (int x = 95; x <= 100; x++) { // Giảm 10 đơn vị từ 105 đến 110 thành 95 đến 100
        gotoXY(x, 4);
        backColor(16);
        cout << " ";
    }

    for (int y = 5; y <= 7; y++) {
        for (int x = 98; x <= 99; x++) { // Giảm 10 đơn vị từ 108 đến 109 thành 98 đến 99
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int x = 99; x <= 100; x++) { // Giảm 10 đơn vị từ 109 đến 110 thành 99 đến 100
        gotoXY(x, 8);
        backColor(16);
        cout << " ";
    }

    for (int x = 95; x <= 97; x++) { // Giảm 10 đơn vị từ 105 đến 107 thành 95 đến 97
        gotoXY(x, 7);
        backColor(16);
        cout << " ";
    }

    gotoXY(100, 5);
    backColor(16);
    cout << " ";


    // vẽ khung
    for (int y = 15; y <= 45; y++) {
        gotoXY(5, y);
        backColor(13);
        cout << " ";
    }
    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 15);
        backColor(13);
        cout << " ";
    }
    for (int y = 15; y <= 45; y++) {
        gotoXY(115, y);
        cout << " ";
    }
    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 20);
        backColor(13);
        cout << " ";
    }

    setCellSize(30, 35);

    outTextXY(47, 12, "PRES ESC TO RETURN NENU", 10);

    setCellSize(12, 14);
    outTextXY(16, 18, "NAME", 10);
    outTextXY(34, 18, "LEVEL", 10);
    outTextXY(58, 18, "SCORE", 10);
    outTextXY(92, 18, "DATE", 10);

    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 45); // Di chuyen con tro den cot tu 71 den 73 va hang 3
        backColor(13); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }


}


void drawHighScore() {
    //ve khung menu
    backColor(2);
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 0);
        cout << " ";
    }
    for (int y = 0; y < 50; y++) {
        gotoXY(0, y);
        cout << " ";

    }
    for (int x = 0; x < 120; x++) {
        gotoXY(x, 50);
        cout << " ";
    }
    for (int y = 0; y < 51; y++) {
        gotoXY(120, y);
        cout << " ";

    }
    cout << endl;
    //to mau nen menu

    for (int y = 1; y < 50; y++) {
        for (int x = 1; x < 120; x++) {
            gotoXY(x, y);
            //textColor(14);
            backColor(14);
            cout << " ";
        }
    }
    cout << endl;


    // Ve chu H
    for (int y = 2; y <= 9; y++) {
        gotoXY(15, y); // Giảm 4 đơn vị từ 19 thành 15, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(16, y); // Giảm 4 đơn vị từ 20 thành 16, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(17, y); // Giảm 4 đơn vị từ 21 thành 17, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int x = 16; x <= 22; x++) { // Giảm 4 đơn vị từ 20 thành 16
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 16; x <= 22; x++) { // Giảm 4 đơn vị từ 20 thành 16
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(22, y); // Giảm 4 đơn vị từ 26 thành 22, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 10; y++) {
        gotoXY(23, y); // Giảm 4 đơn vị từ 27 thành 23, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int x = 18; x <= 19; x++) { // Giảm 4 đơn vị từ 22 thành 18
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }

    for (int y = 3; y <= 10; y++) {
        gotoXY(23, y); // Giảm 4 đơn vị từ 27 thành 23, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 5; y++) {
        gotoXY(18, y); // Giảm 4 đơn vị từ 22 thành 18, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 5; y++) {
        gotoXY(19, y); // Giảm 4 đơn vị từ 23 thành 19, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(20, y); // Giảm 4 đơn vị từ 24 thành 20, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int y = 7; y <= 8; y++) {
        gotoXY(18, y); // Giảm 4 đơn vị từ 22 thành 18, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 7; y <= 8; y++) {
        gotoXY(19, y); // Giảm 4 đơn vị từ 23 thành 19, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(21, y); // Giảm 4 đơn vị từ 25 thành 21, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int x = 17; x <= 23; x++) { // Giảm 4 đơn vị từ 21 thành 17
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }




    // Ve chu I
    for (int y = 4; y <= 7; y++) {
        gotoXY(27, y); // Giảm 4 đơn vị từ 31 thành 27, giữ nguyên y
        backColor(13);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(28, y); // Giảm 4 đơn vị từ 32 thành 28, giữ nguyên y
        backColor(13);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(26, y); // Giảm 4 đơn vị từ 30 thành 26, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(29, y); // Giảm 4 đơn vị từ 33 thành 29, giữ nguyên y
        backColor(16);
        cout << " ";
    }

    for (int x = 26; x <= 29; x++) {
        gotoXY(x, 3); // Giảm 4 đơn vị từ 30 thành 26
        backColor(13);
        cout << " ";
    }
    for (int x = 26; x <= 29; x++) {
        gotoXY(x, 2); // Giảm 4 đơn vị từ 30 thành 26
        backColor(16);
        cout << " ";
    }

    for (int x = 26; x <= 29; x++) {
        gotoXY(x, 8); // Giảm 4 đơn vị từ 30 thành 26
        backColor(13);
        cout << " ";
    }
    for (int x = 26; x <= 29; x++) {
        gotoXY(x, 9); // Giảm 4 đơn vị từ 30 thành 26
        backColor(16);
        cout << " ";
    }
    for (int y = 2; y <= 4; y++) {
        gotoXY(25, y); // Giảm 4 đơn vị từ 29 thành 25, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    for (int y = 2; y <= 4; y++) {
        gotoXY(30, y); // Giảm 4 đơn vị từ 34 thành 30, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    for (int y = 7; y <= 9; y++) {
        gotoXY(25, y); // Giảm 4 đơn vị từ 29 thành 25, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    for (int y = 7; y <= 9; y++) {
        gotoXY(30, y); // Giảm 4 đơn vị từ 34 thành 30, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    for (int x = 26; x <= 30; x++) {
        gotoXY(x, 10); // Giảm 4 đơn vị từ 30 thành 26
        backColor(16);
        cout << " ";
    }
    for (int y = 8; y <= 10; y++) {
        gotoXY(31, y); // Giảm 4 đơn vị từ 35 thành 31, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 5; y++) {
        gotoXY(31, y); // Giảm 4 đơn vị từ 35 thành 31, giữ nguyên y
        backColor(16);
        cout << " ";
    }
    gotoXY(30, 5); // Giảm 4 đơn vị từ 34 thành 30, giữ nguyên y
    backColor(16);
    cout << " ";

    // Ve chu G

    for (int y = 3; y <= 8; y++) {
        gotoXY(33, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(34, y);
        backColor(13);
        cout << " ";
    }
    for (int y = 2; y <= 3; y++) {
        gotoXY(34, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 8; y <= 9; y++) {
        gotoXY(34, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(35, y);
        backColor(13);
        cout << " ";
    }
    for (int x = 35; x <= 39; x++) {
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }
    for (int x = 36; x <= 38; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }
    for (int x = 38; x <= 39; x++) {
        gotoXY(x, 4);
        backColor(13);
        cout << " ";
    }
    for (int x = 39; x <= 40; x++) {
        gotoXY(x, 3);
        backColor(16);
        cout << " ";
    }
    for (int x = 40; x <= 41; x++) {
        gotoXY(x, 4);
        backColor(16);
        cout << " ";
    }
    for (int x = 36; x <= 37; x++) {
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }
    for (int x = 37; x <= 39; x++) {
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }
    for (int x = 38; x <= 39; x++) {
        gotoXY(x, 7);
        backColor(13);
        cout << " ";
    }
    gotoXY(39, 8);
    backColor(13);
    cout << " ";
    for (int x = 35; x <= 41; x++) {
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }
    for (int x = 35; x <= 41; x++) {
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }
    for (int y = 5; y <= 8; y++) {
        gotoXY(40, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 5; y <= 8; y++) {
        gotoXY(41, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(36, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 4; y <= 5; y++) {
        gotoXY(37, y);
        backColor(16);
        cout << " ";
    }
    gotoXY(37, 7);
    backColor(16);
    cout << " ";
    gotoXY(38, 5);
    backColor(16);
    cout << " ";
    gotoXY(39, 5);
    backColor(16);
    cout << " ";
    gotoXY(38, 8);
    backColor(16);
    cout << " ";



    //vẽ chữ H
    for (int y = 2; y <= 9; y++) {
        gotoXY(43, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(44, y);
        backColor(13);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(45, y);
        backColor(13);
        cout << " ";
    }
    for (int x = 44; x <= 50; x++) {
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }
    for (int x = 44; x <= 50; x++) {
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(50, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 10; y++) {
        gotoXY(51, y);
        backColor(16);
        cout << " ";
    }
    for (int x = 46; x <= 47; x++) {
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }
    for (int y = 3; y <= 10; y++) {
        gotoXY(51, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 5; y++) {
        gotoXY(46, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 5; y++) {
        gotoXY(47, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(48, y);
        backColor(13);
        cout << " ";
    }
    for (int y = 7; y <= 8; y++) {
        gotoXY(46, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 7; y <= 8; y++) {
        gotoXY(47, y);
        backColor(16);
        cout << " ";
    }
    for (int y = 3; y <= 8; y++) {
        gotoXY(49, y);
        backColor(13);
        cout << " ";
    }
    for (int x = 45; x <= 51; x++) {
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }

    // Ve chu S
    for (int y = 3; y <= 6; y++) {
        gotoXY(57, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 5; y++) {
        gotoXY(58, y);
        backColor(13);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(58, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 6; y <= 9; y++) {
        gotoXY(58, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 6; y++) {
        gotoXY(59, y);
        backColor(13);
        cout << " ";
    }

    for (int x = 59; x <= 63; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 59; x <= 63; x++) {
        gotoXY(x, 5);
        backColor(13);
        cout << " ";
    }

    for (int x = 59; x <= 63; x++) {
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }

    for (int x = 63; x <= 64; x++) {
        gotoXY(x, 7);
        backColor(13);
        cout << " ";
    }

    gotoXY(64, 6);
    backColor(13);
    cout << " ";

    for (int x = 59; x <= 64; x++) {
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 59; x <= 66; x++) {
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }

    for (int x = 59; x <= 65; x++) {
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }

    for (int x = 59; x <= 62; x++) {
        gotoXY(x, 7);
        backColor(16);
        cout << " ";
    }

    for (int x = 60; x <= 63; x++) {
        gotoXY(x, 4);
        backColor(16);
        cout << " ";
    }

    for (int x = 63; x <= 65; x++) {
        gotoXY(x, 8);
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 5; y++) {
        gotoXY(64, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 7; y++) {
        gotoXY(65, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 6; y <= 9; y++) {
        gotoXY(66, y);
        backColor(16);
        cout << " ";
    }

    for (int x = 59; x <= 63; x++) {
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }


    // Ve chu C
    for (int y = 3; y <= 8; y++) {
        gotoXY(68, y); // Giảm 4 đơn vị từ 72 thành 68
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 7; y++) {
        gotoXY(69, y); // Giảm 4 đơn vị từ 73 thành 69
        backColor(13);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(69, y); // Giảm 4 đơn vị từ 73 thành 69
        backColor(16);
        cout << " ";
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(69, y); // Giảm 4 đơn vị từ 73 thành 69
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(70, y); // Giảm 4 đơn vị từ 74 thành 70
        backColor(13);
        cout << " ";
    }

    for (int x = 71; x <= 73; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 71; x <= 73; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    for (int x = 73; x <= 74; x++) { // Giảm 4 đơn vị từ 77 thành 73
        gotoXY(x, 4);
        backColor(13);
        cout << " ";
    }

    for (int x = 73; x <= 74; x++) { // Giảm 4 đơn vị từ 77 thành 73
        gotoXY(x, 7);
        backColor(13);
        cout << " ";
    }

    for (int x = 70; x <= 74; x++) { // Giảm 4 đơn vị từ 74 thành 70
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 70; x <= 75; x++) { // Giảm 4 đơn vị từ 74 thành 70
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }

    for (int x = 70; x <= 75; x++) { // Giảm 4 đơn vị từ 74 thành 70
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }

    for (int x = 71; x <= 72; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 4);
        backColor(16);
        cout << " ";
    }

    for (int x = 71; x <= 74; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 5);
        backColor(16);
        cout << " ";
    }

    for (int x = 71; x <= 74; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 6);
        backColor(16);
        cout << " ";
    }

    for (int x = 71; x <= 72; x++) { // Giảm 4 đơn vị từ 75 thành 71
        gotoXY(x, 7);
        backColor(16);
        cout << " ";
    }

    for (int x = 74; x <= 75; x++) { // Giảm 4 đơn vị từ 78 thành 74
        gotoXY(x, 3);
        backColor(16);
        cout << " ";
    }

    for (int x = 74; x <= 75; x++) { // Giảm 4 đơn vị từ 78 thành 74
        gotoXY(x, 8);
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(75, y); // Giảm 4 đơn vị từ 79 thành 75
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 9; y++) {
        gotoXY(76, y); // Giảm 4 đơn vị từ 80 thành 76
        backColor(16);
        cout << " ";
    }

    //vẽ chữ o
    for (int y = 3; y <= 8; y++) {
        gotoXY(78, y); // Giảm 4 đơn vị từ 82 thành 78
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(79, y); // Giảm 4 đơn vị từ 83 thành 79
        backColor(13);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(79, y); // Giảm 4 đơn vị từ 83 thành 79
        backColor(16);
        cout << " ";
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(79, y); // Giảm 4 đơn vị từ 83 thành 79
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(80, y); // Giảm 4 đơn vị từ 84 thành 80
        backColor(13);
        cout << " ";
    }

    for (int x = 81; x <= 82; x++) { // Giảm 4 đơn vị từ 85 thành 81
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 81; x <= 82; x++) { // Giảm 4 đơn vị từ 85 thành 81
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(84, y); // Giảm 4 đơn vị từ 88 thành 84
        backColor(13);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(83, y); // Giảm 4 đơn vị từ 87 thành 83
        backColor(13);
        cout << " ";
    }

    for (int x = 80; x <= 83; x++) { // Giảm 4 đơn vị từ 84 thành 80
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 80; x <= 83; x++) { // Giảm 4 đơn vị từ 84 thành 80
        gotoXY(x, 9);
        backColor(16);
        cout << " ";
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(84, y); // Giảm 4 đơn vị từ 88 thành 84
        backColor(16);
        cout << " ";
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(84, y); // Giảm 4 đơn vị từ 88 thành 84
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 9; y++) {
        gotoXY(85, y); // Giảm 4 đơn vị từ 89 thành 85
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 9; y++) {
        gotoXY(86, y); // Giảm 4 đơn vị từ 90 thành 86
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(82, y); // Giảm 4 đơn vị từ 86 thành 82
        backColor(16);
        cout << " ";
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(81, y); // Giảm 4 đơn vị từ 85 thành 81
        backColor(16);
        cout << " ";
    }

    for (int x = 80; x <= 85; x++) { // Giảm 4 đơn vị từ 84 thành 80 và 4 đơn vị từ 89 thành 85
        gotoXY(x, 10);
        backColor(16);
        cout << " ";
    }

    //vẽ chữ R
    for (int y = 2; y <= 9; y++) {
        gotoXY(88, y);
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(89, y);
        backColor(13);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(90, y);
        backColor(13);
        cout << " ";
    }

    for (int x = 89; x <= 94; x++) {
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 91; x <= 93; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 94; x <= 95; x++) {
        gotoXY(x, 3);
        backColor(16);
        cout << " ";
    }

    for (int x = 93; x <= 94; x++) {
        for (int y = 4; y <= 5; y++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int x = 91; x <= 93; x++) {
        gotoXY(x, 6);
        backColor(13);
        cout << " ";
    }

    for (int x = 93; x <= 94; x++) {
        for (int y = 7; y <= 8; y++) {
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int y = 4; y <= 5; y++) {
        for (int x = 91; x <= 92; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 7; y <= 8; y++) {
        for (int x = 91; x <= 92; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 4; y <= 10; y++) {
        for (int x = 95; x <= 96; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int y = 9; y <= 10; y++) {
        for (int x = 89; x <= 94; x++) {
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    gotoXY(94, 6);
    backColor(16);
    cout << " ";
    //ve chu E
    for (int y = 2; y <= 9; y++) {
        gotoXY(98, y); // Giảm 4 đơn vị từ 102 thành 98
        backColor(16);
        cout << " ";
    }

    for (int y = 3; y <= 8; y++) {
        for (int x = 99; x <= 100; x++) { // Giảm 4 đơn vị từ 103, 104 thành 99, 100
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int y = 5; y <= 6; y++) {
        for (int x = 101; x <= 103; x++) { // Giảm 4 đơn vị từ 105, 107 thành 101, 103
            gotoXY(x, y);
            backColor(13);
            cout << " ";
        }
    }

    for (int x = 101; x <= 104; x++) { // Giảm 4 đơn vị từ 105, 108 thành 101, 104
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }

    for (int x = 101; x <= 104; x++) { // Giảm 4 đơn vị từ 105, 108 thành 101, 104
        gotoXY(x, 8);
        backColor(13);
        cout << " ";
    }

    for (int y = 9; y <= 10; y++) {
        for (int x = 99; x <= 106; x++) { // Giảm 4 đơn vị từ 103, 110 thành 99, 106
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int x = 99; x <= 105; x++) { // Giảm 4 đơn vị từ 103, 109 thành 99, 105
        gotoXY(x, 2);
        backColor(16);
        cout << " ";
    }

    for (int x = 105; x <= 106; x++) { // Giảm 4 đơn vị từ 109, 110 thành 105, 106
        gotoXY(x, 3);
        backColor(16);
        cout << " ";
    }

    for (int x = 101; x <= 106; x++) { // Giảm 4 đơn vị từ 105, 110 thành 101, 106
        gotoXY(x, 4);
        backColor(16);
        cout << " ";
    }

    for (int y = 5; y <= 7; y++) {
        for (int x = 104; x <= 105; x++) { // Giảm 4 đơn vị từ 108, 109 thành 104, 105
            gotoXY(x, y);
            backColor(16);
            cout << " ";
        }
    }

    for (int x = 105; x <= 106; x++) { // Giảm 4 đơn vị từ 109, 110 thành 105, 106
        gotoXY(x, 8);
        backColor(16);
        cout << " ";
    }

    for (int x = 101; x <= 103; x++) { // Giảm 4 đơn vị từ 105, 107 thành 101, 103
        gotoXY(x, 7);
        backColor(16);
        cout << " ";
    }

    gotoXY(106, 5); // Giảm 4 đơn vị từ 110 thành 106
    backColor(16);
    cout << " ";

    // vẽ khung
    for (int y = 15; y <= 45; y++) {
        gotoXY(5, y); 
        backColor(13); 
        cout << " ";   
    }
    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 15); 
        backColor(13); 
        cout << " ";   
    }
    for (int y = 15; y <= 45; y++) {
        gotoXY(115, y); 
        cout << " ";  
    }
    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 20);
        backColor(13); 
        cout << " ";   
    }

    setCellSize(30, 35);

    outTextXY(47, 12, "PRES ESC TO RETURN NENU",10);

    

    setCellSize(12, 14);

    outTextXY(16, 18, "NAME", 10);
    outTextXY(34, 18, "LEVEL", 10);
    outTextXY(58, 18, "SCORE", 10);
    outTextXY(92, 18, "DATE", 10);

    for (int x = 5; x <= 115; x++) {
        gotoXY(x, 45); // Di chuyen con tro den cot tu 71 den 73 va hang 3
        backColor(13); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

}


void amongus(int x, int y, int c1, int c2){
		for(int i = 0; i < 6; i++) {
			gotoXY(x + 5 + i, y + 4);
			backColor(15);
			cout << " ";
			gotoXY(x + 5 + i, y + 5);
			backColor(7);
			cout << " ";
			gotoXY(x + 5 + i, y + 3);
			backColor(0);
			cout << " ";
			gotoXY(x + 5 + i, y + 6);
			backColor(0);
			cout << " ";
		}
		for (int i = 0; i < 5; i++) {
			gotoXY(x + i, y + 4 - i);
			backColor(0);
			cout << " ";
			gotoXY(x + 4 + i, y);
			backColor(0);
			cout << " ";
			gotoXY(x + 4 + i, y + 2);
			backColor(c2);
			cout << " ";
		}
		for (int i = 0; i < 7; i++) {
			gotoXY(x + 2, y + 2 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 3 + i, y + 7);
			backColor(c2);
			cout << " ";
			gotoXY(x - 3 + i, y + 11);
			backColor(7);
			cout << " ";
		}
		for (int i = 0; i < 8;i++) {
			gotoXY(x + 9 + i, y + 11);
			backColor(7);
			cout << " ";
		}
		for (int i = 0; i < 4; i++) {
			gotoXY(x, y + 4 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 1, y + 4 + i);
			backColor(c1);
			cout << " ";
		}
		for (int i = 0; i < 3; i++) {
			gotoXY(x + 5 + i, y + 1);
			backColor(c2);
			cout << " ";
			gotoXY(x + 4 + i, y + 8);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + i, y + 8 + i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 5 + i, y + 10 - i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 7 + i, y + 10 - i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 8 + i, y + i);
			backColor(0);
			cout << " ";
		}
		for (int i = 0; i < 2; i++) {
			gotoXY(x + 3 + i, y + 2 - i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 3 + i, y + 4 - i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 8 + i, y + 1 + i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 3 + i, y + 5 + i);
			backColor(c1);
			cout << " ";
			gotoXY(x + 4, y + 4 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 11, y + 4 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 3, y + 9 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 9, y + 9 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 10, y + 7 + i);
			backColor(0);
			cout << " ";
			gotoXY(x + 7 + i, y + 9 - i);
			backColor(c2);
			cout << " ";
		}
		gotoXY(x + 1, y + 8);
		backColor(0);
		cout << " ";
		gotoXY(x + 3, y + 3);
		backColor(c2);
		cout << " ";
		gotoXY(x + 3, y + 6);
		backColor(c2);
		cout << " ";
		gotoXY(x + 5, y + 9);
		backColor(c2);
		cout << " ";
		gotoXY(x + 4, y + 10);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6, y + 10);
		backColor(0);
		cout << " ";
		gotoXY(x + 8, y + 10);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6, y + 11);
		backColor(7);
		cout << " ";
};

void charI(int x, int y, int c1, int c2) {
	for (int i = 0;i < 8;i++) {
		gotoXY(x + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x + i, y + 7);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1 + i, y + 8);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 1 + i, y + 6);
		backColor(c2);
		cout << " ";
	}
	for (int i = 0;i < 4;i++) {
		gotoXY(x + 3, y + 2 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 4, y + 2 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2, y + 2 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y + 2);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y + 3);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x , y + 1 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 7 + i, y + 1);
		backColor(c1);
		cout << " ";
		gotoXY(x + i, y + 5);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5, y + 4 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6 + i, y + 5);
		backColor(c1);
		cout << " ";
		gotoXY(x + 7 + i, y + 6);
		backColor(c1);
		cout << " ";
	}
	gotoXY(x + 1, y + 2);
	backColor(c1);
	cout << " ";
	gotoXY(x , y + 6);
	backColor(c1);
	cout << " ";
	gotoXY(x + 8, y + 7);
	backColor(c1);
	cout << " ";
};

void charN(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1, y + 1 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 6, y + 1 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x , y + 1 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 7, y + 1 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 8, y + 1 + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 4;i++) {
		gotoXY(x + 2 + i, y + 1 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + 2 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + 3 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 2 + i, y + 4 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 2 + i, y + 5 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x + i, y + 7);
		backColor(c1);
		cout << " ";

	}
	for (int i = 0;i < 3;i++) {
		gotoXY(x + 3 + i, y + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1 + i, y + 8);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6 +i, y + 7);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6 + i, y + 8);
		backColor(c1);
		cout << " ";
	}
	gotoXY(x + 5, y + 1);
	backColor(c1);
	cout << " ";
	gotoXY(x + 2, y + 6);
	backColor(c1);
	cout << " ";
}

void charT(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 1 + i, y);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 5;i++) {
		gotoXY(x + 3, y + 2 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 4, y + 2 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2, y + 2 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5, y + 2 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6, y + 2 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 2 + i, y + 7);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 4;i++) {
		gotoXY(x + 7, y + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 3 + i, y + 8);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 3;i++) {
		gotoXY(x, y + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 8, y + 1 + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 1, y + 2 + i);
		backColor(c1);
		cout << " ";
	}
}

void charR(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1, y + 1 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2, y + 1 + i);
		backColor(c2);
		cout << " ";
		gotoXY(x + 1 + i, y + 7);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1 + i, y + 8);
		backColor(c1);
		cout << " ";
		gotoXY(x + 7, y + 3 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 8, y + 3 + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 5;i++) {
		gotoXY(x + i, y);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 7;i++) {
		gotoXY(x , y + 1 + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 3;i++) {
		gotoXY(x + 3 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 3 + i, y + 4);
		backColor(c2);
		cout << " ";
		gotoXY(x + 5 + i, y + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 6 + i, y + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 2;i++) {
		for (int j = 0; j < 2;j++) {
			gotoXY(x + 3 + i, y + 2 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 5 + i, y + 2 + j);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + i, y + 5 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 5 + i, y + 5 + j);
			backColor(c2);
			cout << " ";
		}
	}
	gotoXY(x + 6, y + 4);
	backColor(c1);
	cout << " ";
}

void charO(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1 + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x , y + 1 + i);
		backColor(c1);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 2 + i, y + 7 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 7 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0; i < 4;i++) {
		gotoXY(x + 2 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + 6);
		backColor(c2);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 1 + j, y + 2 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 5 + j, y + 2 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 6 + i, y + 1);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1, y + 6 + i);
		backColor(c1);
		cout << " ";
	}
	gotoXY(x + 1, y + 1);
	backColor(c1);
	cout << " ";
	gotoXY(x + 6, y + 6);
	backColor(c1);
	cout << " ";
}

void charD(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 2 + i, y + 7 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 7 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0; i < 4;i++) {
		gotoXY(x + 2 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + 6);
		backColor(c2);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 1 + j, y + 2 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 5 + j, y + 2 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 6 + i, y + 1);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1, y + 7 + i);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 7;i++) {
		gotoXY(x + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x, y + 1 + i);
		backColor(c1);
		cout << " ";
	}
	gotoXY(x + 1, y + 1);
	backColor(c2);
	cout << " ";
	gotoXY(x + 1, y + 6);
	backColor(c2);
	cout << " ";
	gotoXY(x + 6, y + 6);
	backColor(c1);
	cout << " ";
}

void charU(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 2 + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x, y + 1 + i);
		backColor(c1);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 2 + i, y + 7 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 7 + j, y + 1 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0; i < 5;i++) {
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 1 + j, y + 1 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 5 + j, y + 1 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + j, y + 1 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 1, y + 6 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + i, y);
		backColor(c1);
		cout << " ";
	}
	for (int i = 0;i < 4;i++) {
		gotoXY(x + 2 + i, y + 6);
		backColor(c2);
		cout << " ";
	}
	gotoXY(x + 6, y + 6);
	backColor(c1);
	cout << " ";
	gotoXY(x + 8, y + 7);
	backColor(c1);
	cout << " ";
}

void charC(int x, int y, int c1, int c2) {
	for (int i = 0;i < 6;i++) {
		gotoXY(x + 1 + i, y);
		backColor(c1);
		cout << " ";
		gotoXY(x, y + 1 + i);
		backColor(c1);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 2 + i, y + 7 + j);
			backColor(c1);
			cout << " ";
			gotoXY(x + 7 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0; i < 4;i++) {
		gotoXY(x + 2 + i, y + 1);
		backColor(c2);
		cout << " ";
		gotoXY(x + 2 + i, y + 6);
		backColor(c2);
		cout << " ";
		for (int j = 0;j < 2;j++) {
			gotoXY(x + 1 + j, y + 2 + i);
			backColor(c2);
			cout << " ";
			gotoXY(x + 3 + j, y + 2 + i);
			backColor(c1);
			cout << " ";
		}
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 6 + i, y + 1);
		backColor(c1);
		cout << " ";
		gotoXY(x + 1, y + 6 + i);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y + 2);
		backColor(c2);
		cout << " ";
		gotoXY(x + 5 + i, y + 3);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y + 4);
		backColor(c1);
		cout << " ";
		gotoXY(x + 5 + i, y + 5);
		backColor(c2);
		cout << " ";
	}
	gotoXY(x + 1, y + 1);
	backColor(c1);
	cout << " ";
	gotoXY(x + 6, y + 6);
	backColor(c1);
	cout << " ";
}

void nameMem(int x, int y) {
	gotoXY(x, y);
	backColor(14);
	textColor(3);
	cout << "Nguyen Le Huu Dien";
	gotoXY(x + 5, y + 2);
	cout << "23120233";
	gotoXY(x + 22, y);
	textColor(1);
	cout << "Le Lam Tri Duc";
	gotoXY(x + 25, y + 2);
	cout << "23120237";
	gotoXY(x + 43, y);
	textColor(4);
	cout << "Le Thuong De";
	gotoXY(x + 45, y + 2);
	cout << "23120232";
	gotoXY(x + 63, y);
	textColor(2);
	cout << "Le Thanh Cong";
	gotoXY(x + 65, y + 2);
	cout << "23120222";
	gotoXY(x + 83, y);
	textColor(0);
	cout << "Do Huu Thuc";
	gotoXY(x + 85, y + 2);
	cout << "22120362";
}

void howToPlay(int x, int y) {
	for (int i = 0;i < 4;i++) {
		gotoXY(x, y + i);
		backColor(0);
		cout << " ";
		gotoXY(x + 2, y + i);
		cout << " ";
		gotoXY(x + 4, y + i);
		cout << " ";
		gotoXY(x + 6, y + i);
		cout << " ";
		gotoXY(x + 19, y + i);
		cout << " ";
		gotoXY(x + 21, y + i);
		cout << " ";
		gotoXY(x + 24, y + i);
		cout << " ";
		gotoXY(x + 28, y + i);
		cout << " ";
		gotoXY(x + 34, y + i);
		cout << " ";
	}
	for (int i = 0;i < 3;i++) {
		gotoXY(x + 8, y + i);
		cout << " ";
		gotoXY(x + 10, y + i);
		cout << " ";
		gotoXY(x + 12, y + i);
		cout << " ";
		gotoXY(x + 15 + i, y);
		cout << " ";
		gotoXY(x + 16, y + 1 + i);
		cout << " ";
		gotoXY(x + 26, y + i);
		cout << " ";
		gotoXY(x + 28, y + i);
		cout << " ";
		gotoXY(x + 28 + i, y + 3);
		cout << " ";
		gotoXY(x + 32, y + 1 + i);
		cout << " ";
		gotoXY(x + 37, y + 1 + i);
		cout << " ";
	}
	for (int i = 0;i < 2;i++) {
		gotoXY(x + 5, y + 3 * i);
		cout << " ";
		gotoXY(x + 9 + 2 * i, y + 3);
		cout << " ";
		gotoXY(x + 20, y + 3 * i);
		cout << " ";
		gotoXY(x + 25, y + 2 * i);
		cout << " ";
		gotoXY(x + 33, y + 2 * i);
		cout << " ";
		gotoXY(x + 36, y + i);
		cout << " ";
		gotoXY(x + 38, y + i);
		cout << " ";
	}
	gotoXY(x + 1, y + 2);
	cout << " ";
}

void instruction(int x, int y) {
	for (int i = 0; i < 46; i++) {
		for (int j = 0; j < 20; j++) {
			gotoXY(x - 3 + i,y -2 + j);
			backColor(15);
			cout << " ";
		}
	}
	char c1 = 205;
	char c2 = 186;
	char c3 = 201;
	char c4 = 200;
	char c5 = 187;
	char c6 = 188;

	for (int i = 0;i < 44;i++) {
		gotoXY(x - 2 + i, y - 2);
		cout << c1;
		gotoXY(x - 2 + i, y +18);
		cout << c1;
	}
	for (int i = 0;i < 19;i++) {
		gotoXY(x - 3, y - 1 + i);
		cout << c2;
		gotoXY(x + 42, y - 1 + i);
		cout << c2;
	}
	gotoXY(x - 3, y - 2);
	cout << c3;
	gotoXY(x - 3, y + 18);
	cout << c4;
	gotoXY(x + 42, y - 2);
	cout << c5;
	gotoXY(x + 42, y +18);
	cout << c6;
	gotoXY(x + 26, y - 1);
	cout << "W";
	gotoXY(x + 26, y + 1);
	cout << "S";
	gotoXY(x, y);
	cout << "Control your snake with A   D";
	gotoXY(x, y + 2);
	cout << "Avoid hitting walls";
	gotoXY(x, y + 5);
	cout << "Avoid hitting yourself";
	gotoXY(x, y + 7);
	cout << "Try to eat enough food to pass each level";
	gotoXY(x, y + 9);
	cout << "Press Space to pause the game";
	gotoXY(x, y + 13);
	cout << "PRESS ENTER TO RETURN TO MENU";
	gotoXY(x - 1, y + 16);
	textColor(3);
	cout << "GROUP 9(A.K.A GROUP 9.9) - 23CTT3 - HCMUS";
}


void Art(short sz, short color, short x, short y)
{

	for (short j = x; j <= y; j++)
	{
		backColor(color);
		for (short l = 1; l <= sz; l++)
		{
			for (short i = 1; i <= sz; i++)
			{
				cout << " ";
			}
			if (sz > 1)
			{
				cout << endl;
			}
		}
		
	}

	

}
void GameOverAnnounce(short sz1, short sz2, short x, short y, short color1, short color2)
{
	
	short temp = x;
	setCellSize(sz1, sz2);
	SetConsoleWindow(1200, 700);


	// chu G
	gotoXY(x + 1, y);
	Art(1, color1, x + 1, x + 6);
	
	gotoXY(x, y + 1);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 5);
	Art(1, color1, x + 6, x + 7);
	 
	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);
	
	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color1, x + 5, x + 6);
	Art(1, color1, x + 7, x + 7);
	Art(1, color1, x + 8, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 3);
	Art(1, color2, x + 4, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);
	
	gotoXY(x, y + 6);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 4);
	Art(1, color1, x + 5, x + 5);
	Art(1, color2, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x + 1, y + 7);
	Art(1, color1, x + 1, x + 8);
	gotoXY(x + 2, y + 8);
	Art(1, color1, x + 2, x + 8);

	

	// chu A
	x += 13;
	gotoXY(x + 1, y);
	Art(1, color1, x + 1, x + 6);

	gotoXY(x, y + 1);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 5);
	Art(1, color1, x + 6, x + 7);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 7);
	Art(1, color1, x + 8, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 6);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 7);
	Art(1, color1, x , x + 8);
	gotoXY(x + 1, y + 8);
	Art(1, color1, x + 1, x + 8);

	
	//chu M
	x += 13;
	gotoXY(x, y);
	Art(1, color1, x, x + 7);

	gotoXY(x, y + 1);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 1);
	Art(1, color1, x + 2, x + 2);
	Art(1, color2, x + 3, x + 4);
	Art(1, color1, x + 5, x + 5);
	Art(1, color2, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);


	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 1);
	Art(1, color1, x + 2, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color1, x + 5, x + 5);
	Art(1, color2, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 6);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 1);
	Art(1, color1, x + 2, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color1, x + 5, x + 5);
	Art(1, color2, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);


	gotoXY(x, y + 7);
	Art(1, color1, x, x + 3);
	Art(1, color1, x + 5, x + 8);
	

	gotoXY(x + 1, y + 8);
	Art(1, color1, x + 1, x + 3);
	Art(1, color1, x + 6, x + 8);



	//chu E
	x += 13;
	gotoXY(x, y);
	Art(1, color1, x, x + 7);

	gotoXY(x, y + 1);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 5);
	Art(1, color1, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 5);
	Art(1, color1, x + 6, x + 6);
	Art(1, color1, x + 7, x + 7);


	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 7);

	gotoXY(x, y + 6);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 6);
	Art(1, color1, x + 7, x + 8);


	gotoXY(x, y + 7);
	Art(1, color1, x, x + 8);
	gotoXY(x + 1, y + 8);
	Art(1, color1, x + 1, x + 8);





	// Chu O
	x = temp;
	y += 13;
	gotoXY(x + 1, y);
	Art(1, color1, x + 1, x + 6);

	gotoXY(x, y + 1);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 5);
	Art(1, color1, x + 6, x + 7);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 7);
	Art(1, color1, x + 8, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 6);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 2);
	Art(1, color2, x + 3, x + 4);
	Art(1, color2, x + 5, x + 5);
	Art(1, color1, x + 6, x + 8);

	gotoXY(x + 1, y + 7);
	Art(1, color1, x + 1, x + 8);
	gotoXY(x + 2, y + 8);
	Art(1, color1, x + 2, x + 7);


	//chu V
	x += 13;
	gotoXY(x, y);
	Art(1, color1, x, x + 7);

	gotoXY(x, y + 1);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 5);
	Art(1, color1, x, x + 1);
	Art(1, color2, x + 2, x + 2);
	Art(1, color2, x + 3, x + 4);
	Art(1, color2, x + 5, x + 5);
	Art(1, color1, x + 6, x + 8);

	gotoXY(x + 1, y + 6);
	Art(1, color1, x + 1, x + 2);
	Art(1, color2, x + 3, x + 4);
	Art(1, color1, x + 5, x + 8);

	gotoXY(x + 2, y + 7);
	Art(1, color1, x + 2, x + 7);
	gotoXY(x + 3, y + 8);
	Art(1, color1, x + 3, x + 6);


	//chu E
	x += 13;
	gotoXY(x, y);
	Art(1, color1, x, x + 7);

	gotoXY(x, y + 1);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 5);
	Art(1, color1, x + 6, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 5);
	Art(1, color1, x + 6, x + 6);
	Art(1, color1, x + 7, x + 7);


	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 7);

	gotoXY(x, y + 6);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 6);
	Art(1, color1, x + 7, x + 8);


	gotoXY(x, y + 7);
	Art(1, color1, x, x + 8);
	gotoXY(x + 1, y + 8);
	Art(1, color1, x + 1, x + 8);


	// Chu R
	x += 13;
	gotoXY(x, y);
	Art(1, color1, x, x + 6);

	gotoXY(x, y + 1);
	Art(1, color1, x, x );
	Art(1, color2, x + 1, x + 5);
	Art(1, color1, x + 6, x + 7);

	gotoXY(x, y + 2);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 3);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 7);
	Art(1, color1, x + 8, x + 8);

	gotoXY(x, y + 4);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color2, x + 3, x + 5);
	Art(1, color1, x + 6, x + 8);

	gotoXY(x, y + 5);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 6);
	Art(1, color1, x, x);
	Art(1, color2, x + 1, x + 2);
	Art(1, color1, x + 3, x + 4);
	Art(1, color2, x + 5, x + 6);
	Art(1, color1, x + 7, x + 8);

	gotoXY(x, y + 7);
	Art(1, color1, x, x + 8);
	gotoXY(x + 1, y + 8);
	Art(1, color1, x + 1, x + 8);
}
