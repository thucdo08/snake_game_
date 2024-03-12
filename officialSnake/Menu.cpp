#include "Menu.h"
#include "Header.h"


void menu() {
    //ve khung menu
    backColor(2);
    for (int x = 2; x < 130; x++) {
        gotoXY(x, 1);
        cout << " ";
    }
    for (int y = 2; y < 55; y++) {
        gotoXY(2, y);
        cout << " ";

    }
    for (int x = 2; x < 130; x++) {
        gotoXY(x, 54);
        cout << " ";
    }
    for (int y = 2; y < 55; y++) {
        gotoXY(129, y);
        cout << " ";

    }
    cout << endl;
    //to mau nen menu
    for (int y = 2; y < 54; y++) {
        for (int x = 3; x < 129; x++) {
            gotoXY(x, y);
            textColor(14);
            cout << (char)219;
        }
    }
    cout << endl;
    //ve chu game 
    //ve chu G
    for (int x = 34; x <= 36; x++) {
        gotoXY(x, 3);
        backColor(13);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(33, y);
        cout << " ";
    }
    for (int x = 34; x <= 36; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(37, 4);
    cout << " ";
    for (int y = 6; y <= 7; y++) {
        gotoXY(37, y);
        cout << " ";
    }
    gotoXY(36, 6);
    cout << " ";
    //ve chu A
    for (int x = 39; x <= 41; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(40, y);
        cout << " ";
    }
    for (int x = 41; x <= 44; x++) {
        gotoXY(x, 6);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(45, y);
        cout << " ";
    }
    for (int x = 44; x <= 46; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(41, 4);
    cout << " ";
    gotoXY(44, 4);
    cout << " ";
    for (int x = 42; x <= 43; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    //Ve chu M
    for (int x = 48; x <= 50; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(49, y);
        cout << " ";
    }
    for (int x = 48; x <= 50; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    gotoXY(50, 5);
    cout << " ";
    gotoXY(51, 6);
    cout << " ";
    gotoXY(52, 7);
    cout << " ";
    gotoXY(54, 5);
    cout << " ";
    gotoXY(53, 6);
    cout << " ";
    for (int x = 54; x <= 56; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(55, y);
        cout << " ";
    }
    for (int x = 54; x <= 56; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    //ve chu E
    for (int x = 58; x <= 63; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(59, y);
        cout << " ";
    }
    for (int x = 58; x <= 63; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int x = 60; x <= 61; x++) {
        gotoXY(x, 5);
        cout << " ";
    }
    gotoXY(63, 4);
    cout << " ";
    gotoXY(63, 7);
    cout << " ";
    //ve chu SNAKE
    //ve chu S
    for (int x = 68; x <= 71; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    gotoXY(72, 4);
    cout << " ";
    gotoXY(67, 4);
    cout << " ";
    for (int x = 68; x <= 69; x++) {
        gotoXY(x, 5);
        cout << " ";
    }
    for (int x = 70; x <= 71; x++) {
        gotoXY(x, 6);
        cout << " ";
    }
    gotoXY(72, 7);
    cout << " ";
    for (int x = 68; x <= 71; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(67, 7);
    cout << " ";
    //Ve chu N
    for (int x = 74; x <= 76; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(75, y);
        cout << " ";
    }
    for (int x = 74; x <= 76; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(76, 5);
    cout << " ";
    for (int x = 77; x <= 78; x++) {
        gotoXY(x, 6);
        cout << " ";
    }
    for (int x = 78; x <= 80; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(79, y);
        cout << " ";
    }
    for (int x = 78; x <= 80; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    //ve chu A
    for (int x = 82; x <= 84; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(83, y);
        cout << " ";
    }
    for (int x = 84; x <= 87; x++) {
        gotoXY(x, 6);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(88, y);
        cout << " ";
    }
    for (int x = 87; x <= 89; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(84, 4);
    cout << " ";
    gotoXY(87, 4);
    cout << " ";
    for (int x = 85; x <= 86; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    //ve chu K
    for (int x = 91; x <= 93; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(92, y);
        cout << " ";
    }
    for (int x = 91; x <= 93; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    gotoXY(93, 5);
    cout << " ";
    gotoXY(94, 4);
    cout << " ";
    for (int x = 95; x <= 96; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    gotoXY(94, 6);
    cout << " ";
    gotoXY(95, 7);
    cout << " ";
    for (int x = 95; x <= 96; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    //ve chu E
    for (int x = 98; x <= 103; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
    for (int y = 4; y <= 7; y++) {
        gotoXY(99, y);
        cout << " ";
    }
    for (int x = 98; x <= 103; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int x = 99; x <= 101; x++) {
        gotoXY(x, 5);
        cout << " ";
    }
    gotoXY(103, 4);
    cout << " ";
    gotoXY(103, 7);
    cout << " ";
    gotoXY(59, 11);
    for (int x = 82; x <= 84; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(83, y);
        cout << " ";
    }
    for (int x = 84; x <= 87; x++) {
        gotoXY(x, 6);
        cout << " ";
    }
    for (int y = 5; y <= 7; y++) {
        gotoXY(88, y);
        cout << " ";
    }
    for (int x = 87; x <= 89; x++) {
        gotoXY(x, 8);
        cout << " ";
    }
    gotoXY(84, 4);
    cout << " ";
    gotoXY(87, 4);
    cout << " ";
    for (int x = 85; x <= 86; x++) {
        gotoXY(x, 3);
        cout << " ";
    }
}


