#include "Setting.h"

void setVolume(int volume) {
    if (volume < 0) {
        volume = 0;
    }
    else if (volume > 100) {
        volume = 100;
    }

    DWORD newVolume = ((DWORD)volume * 0xFFFF / 100) & 0xFFFF;
    newVolume = (newVolume << 16) | newVolume;

    waveOutSetVolume(NULL, newVolume);
}
void SettingsMode(int &Music, int &CurrentMusic, bool &SFXTurnOn, int &MusicVolume, int &SFXVolume,bool&start ) {
    int DiemX = 15;
    int DiemY = 20;
    int i = 1;
    bool SMode = true;
    WordInSet(DiemX, DiemY,Music,CurrentMusic,SFXTurnOn,MusicVolume,SFXVolume);
    while (SMode != false) {
        if (_kbhit()) {
            char key_press = _getch();
            switch (key_press) {
            case 's':
                backColor(15);
                if (i != 5) {
                    i++;
                    if (i == 2) {
                        gotoXY(DiemX + 21, DiemY + 3);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 14, DiemY + 1);
                        cout << "  ";
                    }
                    else if (i == 3) {
                        gotoXY(DiemX + 11, DiemY + 5);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 21, DiemY + 3);
                        cout << "  ";
                    }
                    else if (i == 4) {
                        gotoXY(DiemX + 20, DiemY + 7);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 11, DiemY + 5);
                        cout << "  ";
                    }
                    else if (i == 5) {
                        gotoXY(DiemX + 22, DiemY + 9);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 20, DiemY + 7);
                        cout << "  ";
                    }
                }
                break;
            case 'w':
                backColor(15);
                if (i != 1) {
                    i--;
                    if (i == 1) {
                        gotoXY(DiemX + 14, DiemY + 1);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 21, DiemY + 3);
                        cout << "  ";
                    }
                    else if (i == 2) {
                        gotoXY(DiemX + 21, DiemY + 3);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 11, DiemY + 5);
                        cout << "  ";
                    }
                    else if (i == 3) {
                        gotoXY(DiemX + 11, DiemY + 5);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 20, DiemY + 7);
                        cout << "  ";
                    }
                    else if (i == 4) {
                        gotoXY(DiemX + 20, DiemY + 7);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 22, DiemY + 9);
                        cout << "  ";
                    }
                    else if (i == 5) {
                        gotoXY(DiemX + 22, DiemY + 9);
                        cout << (char)17 << (char)17;
                        gotoXY(DiemX + 18, DiemY + 11);
                        cout << "  ";
                    }
                }
                break;
            case 'a':
                if (i == 1) {
                    backColor(15);
                    Music = -3;
                    toggleSound(Music);
                    gotoXY(DiemX + 9, DiemY + 1);
                    cout << "OFF";
                    backColor(8);
                    gotoXY(DiemX + 2, DiemY + 3);
                    cout << "MUSIC VOLUME: ";
                    cout << MusicVolume<<"% ";
                }
                else if (i == 2) {
                    if (Music != -3) {
                        if (MusicVolume != 0) {
                            MusicVolume -= 10;
                            setVolume(MusicVolume);
                            gotoXY(DiemX + 16, DiemY + 3);
                            cout << MusicVolume << "%";
                            cout << " ";
                        }
                    }
                }
                else if (i == 3) {
                    backColor(15);
                    SFXTurnOn = false;
                    gotoXY(DiemX + 7, DiemY + 5);
                    cout << "OFF";
                    backColor(8);
                    gotoXY(DiemX + 2, DiemY + 7);
                    cout << "SFX VOLUME: ";
                    gotoXY(DiemX + 14, DiemY + 7);
                    cout << SFXVolume << "% ";
                }
                else if (i == 4) {
                    if (SFXTurnOn == true) {
                        if (SFXVolume != 0) {
                            SFXVolume -= 10;
                            gotoXY(DiemX + 14, DiemY + 7);
                            cout << SFXVolume << "%";
                            cout << " ";
                        }
                    }
                }
                else if (i == 5) {
                    if (CurrentMusic != 1) {
                        gotoXY(DiemX + 15, DiemY + 9);
                        CurrentMusic--;
                        cout << CurrentMusic;
                        if(Music !=-3)
                        toggleSound(CurrentMusic);
                    }
                }
                break;
            case 'd':
                if (i == 1) {
                    backColor(15);
                    Music = CurrentMusic;
                    toggleSound(Music);
                    gotoXY(DiemX + 9, DiemY + 1);
                    cout << "ON ";

                    gotoXY(DiemX + 2, DiemY + 3);
                    cout << "MUSIC VOLUME: ";
                    cout << MusicVolume << "% ";
                }
                else if (i == 2) {
                    if (MusicVolume != 100) {
                        MusicVolume += 10;
                        setVolume(MusicVolume);
                        gotoXY(DiemX + 16, DiemY + 3);
                        cout << MusicVolume << "%";
                    }
                }
                else if (i == 3) {
                    backColor(15);
                    SFXTurnOn = true;
                    gotoXY(DiemX + 7, DiemY + 5);
                    cout << "ON ";
                    gotoXY(DiemX + 2, DiemY + 7);
                    cout << "SFX VOLUME: ";
                    gotoXY(DiemX + 14, DiemY + 7);
                    cout << SFXVolume << "% ";
                }
                else if (i == 4) {
                    if (SFXVolume != 100) {
                        SFXVolume += 10;
                        gotoXY(DiemX + 14, DiemY + 7);
                        cout << SFXVolume << "%";
                    }
                }
                else if (i == 5) {
                    if (CurrentMusic != 3) {
                        gotoXY(DiemX + 15, DiemY + 9);
                        CurrentMusic++;
                        cout << CurrentMusic;
                        if(Music!=-3)
                        toggleSound(CurrentMusic);
                    }
                }
                break;
            case 27:
                start = true;
                Menu();
                break;
            default:
                break;
            }
        }
        Sleep(3);
    }
}

void toggleSound(int music) {
    if (music == 1) {

        PlaySound(TEXT("game music.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    }
    else if (music == 2) {
        PlaySound(TEXT("game music1.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    }
    else if (music == 3) {
        PlaySound(TEXT("game music2.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    }
    else if (music == 4) {
        PlaySound(TEXT("eatingSound.wav"), NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (music == 5) {
        PlaySound(TEXT("lose-game.wav"), NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (music == 6) {
        PlaySound(TEXT("Win game maze mode.wav"), NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (music == 7) {
        PlaySound(TEXT("win-game-pvp.wav"), NULL, SND_ASYNC | SND_FILENAME);
    }
    else {
        PlaySound(NULL, NULL, SND_PURGE);
    }
}

void WordInSet(int DiemX, int DiemY, int& Music, int& CurrentMusic, bool& SFXTurnOn, int& MusicVolume, int& SFXVolume) {
    backColor(14);
    for (int x = 0; x < 121; x++) {
        for (int y = 0; y < 51; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX; x < DiemX + 25; x++) {
        for (int y = DiemY - 2; y < DiemY + 17; y++) {
            backColor(15);
            gotoXY(x, y);
            cout << " ";
        }
    }
    //ve vien menu
    textColor(10);
    for (int x = DiemX; x < DiemX + 25; x++) {
        gotoXY(x, DiemY - 3);
        cout << (char)205;
    }
    for (int y = DiemY - 2; y < DiemY + 18; y++) {
        gotoXY(DiemX, y);
        cout << (char)186;
    }
    for (int x = DiemX; x < DiemX + 25; x++) {
        gotoXY(x, DiemY + 17);
        cout << (char)205;
    }
    for (int y = DiemY - 3; y < DiemY + 18; y++) {
        gotoXY(DiemX + 24, y);
        cout << (char)186;
    }
    gotoXY(DiemX, DiemY - 3);
    cout << (char)201;
    gotoXY(DiemX + 24, DiemY - 3);
    cout << (char)187;
    gotoXY(DiemX, DiemY + 17);
    cout << (char)200;
    gotoXY(DiemX + 24, DiemY + 17);
    cout << (char)188;

    textColor(0);
    gotoXY(DiemX + 2, DiemY + 1);
    cout << "MUSIC: ";
    if (Music == 1 || Music == 2 || Music == 3) {
        gotoXY(DiemX + 9, DiemY + 1);
        cout << "ON ";
    }
    else {
        gotoXY(DiemX + 9, DiemY + 1);
        cout << "OFF";
    }
    gotoXY(DiemX + 14, DiemY + 1);
    cout << (char)17 << (char)17;
    if (Music != -3) {
        gotoXY(DiemX + 2, DiemY + 3);
        cout << "MUSIC VOLUME: ";
        gotoXY(DiemX + 16, DiemY + 3);
        cout << MusicVolume << "% ";
    }
    else {
        backColor(8);
        gotoXY(DiemX + 2, DiemY + 3);
        cout << "MUSIC VOLUME: ";
        gotoXY(DiemX + 16, DiemY + 3);
        cout << MusicVolume << "% ";
        backColor(15);
    }
    gotoXY(DiemX + 2, DiemY + 5);
    cout << "SFX: ";
    if (SFXTurnOn == true) {
        gotoXY(DiemX + 7, DiemY + 5);
        cout << "ON ";
    }
    else
    {
        gotoXY(DiemX + 7, DiemY + 5);
        cout << "OFF";
    }
    if (SFXTurnOn == true) {
        gotoXY(DiemX + 2, DiemY + 7);
        cout << "SFX VOLUME: ";
        gotoXY(DiemX + 14, DiemY + 7);
        cout << SFXVolume << "% ";
    }
    else {
        backColor(8);
        gotoXY(DiemX + 2, DiemY + 7);
        cout << "SFX VOLUME: ";
        gotoXY(DiemX + 14, DiemY + 7);
        cout << SFXVolume << "% ";
        backColor(15);
    }
    gotoXY(DiemX + 2, DiemY + 9);
    cout << "MUSIC: SOUND ";
    if (CurrentMusic == 1) {
        gotoXY(DiemX + 15, DiemY + 9);
        cout << "1";
    }
    else if (CurrentMusic == 2) {
        gotoXY(DiemX + 15, DiemY + 9);
        cout << "2";
    }
    else if (CurrentMusic == 3) {
        gotoXY(DiemX + 15, DiemY + 9);
        cout << "3";
    }
    gotoXY(DiemX + 2, DiemY + 13);
    cout << " PRESS ESC TO BACK";
    int DiemX1 = 30;
    int DiemY1 = 3;
    gotoXY(DiemX1, DiemY1);
    backColor(0);
    cout << " ";
    for (int x = DiemX1; x < DiemX1 + 7; x++) {
        gotoXY(x, DiemY1 - 1);
        cout << " ";
    }
    gotoXY(DiemX1 - 1, DiemY1);
    cout << " ";
    for (int y = DiemY1; y < DiemY1 + 3; y++) {
        gotoXY(DiemX1 - 2, y);
        cout << " ";
    }
    for (int x = DiemX1 - 2; x < DiemX1 + 1; x++) {
        gotoXY(x, DiemY1 + 3);
        cout << " ";
    }
    for (int y = DiemY1 + 4; y < DiemY1 + 5; y++) {
        gotoXY(DiemX1, y);
        cout << " ";
    }
    for (int x = DiemX1 + 1; x < DiemX1 + 5; x++) {
        gotoXY(x, DiemY1 + 4);
        cout << " ";
    }
    for (int y = DiemY1 + 5; y < DiemY1 + 7; y++) {
        gotoXY(DiemX1, y);
        cout << " ";
    }
    for (int x = DiemX1 + 1; x < DiemX1 + 6; x++) {
        gotoXY(x, DiemY1 + 6);
        cout << " ";
    }
    for (int x = DiemX1 + 1; x < DiemX1 + 8; x++) {
        gotoXY(x, DiemY1 + 7);
        cout << " ";
    }
    for (int x = DiemX1 + 6; x < DiemX1 + 8; x++) {
        for (int y = DiemY1; y < DiemY1 + 3; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX1 + 7; x < DiemX1 + 9; x++) {
        for (int y = DiemY1 + 3; y < DiemY1 + 5; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX1 + 6; x < DiemX1 + 9; x++) {
        for (int y = DiemY1 + 5; y < DiemY1 + 7; y++) {
            gotoXY(x, y);
            cout << " ";
        }
    }
    for (int x = DiemX1 + 3; x < DiemX1 + 6; x++) {
        gotoXY(x, DiemY1 + 1);
        cout << " ";
    }
    backColor(2);
    gotoXY(DiemX1 + 1, DiemY1);
    cout << "     ";
    gotoXY(DiemX1 - 1, DiemY1 + 1);
    cout << "    ";
    gotoXY(DiemX1 - 1, DiemY1 + 2);
    cout << "       ";
    gotoXY(DiemX1 + 1, DiemY1 + 3);
    cout << "      ";
    gotoXY(DiemX1 + 5, DiemY1 + 4);
    cout << "  ";
    gotoXY(DiemX1 + 1, DiemY1 + 5);
    cout << "     ";
    //Ve chu E
    backColor(0);
    for (int y = DiemY1 - 1; y < DiemY1 + 7; y++) {
        gotoXY(DiemX1 + 10, y);
        cout << " ";
    }
    gotoXY(DiemX1 + 11, DiemY1 - 1);
    cout << "       ";
    gotoXY(DiemX1 + 11, DiemY1 + 7);
    cout << "        ";
    gotoXY(DiemX1 + 17, DiemY1);
    cout << "  ";
    gotoXY(DiemX1 + 14, DiemY1 + 1);
    cout << "     ";
    for (int y = DiemY1 + 2; y < DiemY1 + 4; y++) {
        gotoXY(DiemX1 + 16, y);
        cout << "  ";
    }
    gotoXY(DiemX1 + 10, DiemY1 + 6);
    cout << "         ";
    gotoXY(DiemX1 + 13, DiemY1 + 4);
    cout << "     ";
    gotoXY(DiemX1 + 17, DiemY1 + 5);
    cout << "  ";
    backColor(2);
    gotoXY(DiemX1 + 11, DiemY1);
    cout << "      ";
    gotoXY(DiemX1 + 11, DiemY1 + 1);
    cout << "   ";
    gotoXY(DiemX1 + 11, DiemY1 + 2);
    cout << "     ";
    gotoXY(DiemX1 + 11, DiemY1 + 3);
    cout << "     ";
    gotoXY(DiemX1 + 11, DiemY1 + 4);
    cout << "  ";
    gotoXY(DiemX1 + 11, DiemY1 + 5);
    cout << "      ";
    //Ve chu T
    for (int i = 0; i < 6; i++) {
        gotoXY(DiemX1 + 21 + i, DiemY1);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 21 + i, DiemY1 - 1);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 5; i++) {
        gotoXY(DiemX1 + 23, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 24, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 22, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 25, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 26, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 22 + i, DiemY1 + 6);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 4; i++) {
        gotoXY(DiemX1 + 27, DiemY1 - 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 23 + i, DiemY1 + 7);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 3; i++) {
        gotoXY(DiemX1 + 20, DiemY1 + i - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 28, DiemY1 + i);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 2; i++) {
        gotoXY(DiemX1 + 21, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
    }
    //ve chu T
    for (int i = 0; i < 6; i++) {
        gotoXY(DiemX1 + 31 + i, DiemY1);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 31 + i, DiemY1 - 1);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 5; i++) {
        gotoXY(DiemX1 + 33, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 34, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 32, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 35, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 36, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 32 + i, DiemY1 + 6);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 4; i++) {
        gotoXY(DiemX1 + 37, DiemY1 - 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 33 + i, DiemY1 + 7);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 3; i++) {
        gotoXY(DiemX1 + 30, DiemY1 + i - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 38, DiemY1 + i);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 2; i++) {
        gotoXY(DiemX1 + 31, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
    }
    //ve chu I
    for (int i = 0; i < 8; i++) {
        gotoXY(DiemX1 + 40 + i, DiemY1 - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 40 + i, DiemY1 + 6);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 41 + i, DiemY1 + 7);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 6; i++) {
        gotoXY(DiemX1 + 41 + i, DiemY1);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 41 + i, DiemY1 + 5);
        backColor(2);
        cout << " ";
    }
    for (int i = 0; i < 4; i++) {
        gotoXY(DiemX1 + 43, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 44, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 42, DiemY1 + 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 45 + i, DiemY1 + 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 45 + i, DiemY1 + 2);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 2; i++) {
        gotoXY(DiemX1 + 40, DiemY1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 47 + i, DiemY1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + i + 40, DiemY1 + 4);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 45, DiemY1 + 3 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 46 + i, DiemY1 + 4);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 47 + i, DiemY1 + 5);
        backColor(0);
        cout << " ";
    }
    gotoXY(DiemX1 + 41, DiemY1 + 1);
    backColor(0);
    cout << " ";
    gotoXY(DiemX1 + 40, DiemY1 + 5);
    backColor(0);
    cout << " ";
    gotoXY(DiemX1 + 48, DiemY1 + 6);
    backColor(0);
    cout << " ";
    //ve chu N
    for (int i = 0; i < 6; i++) {
        gotoXY(DiemX1 + 51, DiemY1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 56, DiemY1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 50, DiemY1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 57, DiemY1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 58, DiemY1 + i);
        backColor(0);
        cout << " ";
    }
    for (int i = 0; i < 4; i++) {
        gotoXY(DiemX1 + 52 + i, DiemY1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 52 + i, DiemY1 + 1 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 52 + i, DiemY1 + 2 + i);
        backColor(2);
        cout << " ";
        gotoXY(DiemX1 + 52 + i, DiemY1 + i - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 52 + i, DiemY1 + 3 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 52 + i, DiemY1 + 4 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + i + 50, DiemY1 - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + i + 50, DiemY1 + 6);
        backColor(0);
        cout << " ";

    }
    for (int i = 0; i < 3; i++) {
        gotoXY(DiemX1 + 53 + i, DiemY1 - 1 + i);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 55 + i, DiemY1 - 1);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 51 + i, DiemY1 + 7);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 56 + i, DiemY1 + 6);
        backColor(0);
        cout << " ";
        gotoXY(DiemX1 + 56 + i, DiemY1 + 7);
        backColor(0);
        cout << " ";
    }
    gotoXY(DiemX1 + 55, DiemY1);
    backColor(0);
    cout << " ";
    gotoXY(DiemX1 + 52, DiemY1 + 5);
    backColor(0);
    cout << " ";
    //ve chu G
    for (int y = 3; y <= 8; y++) {
        gotoXY(80 + 10, y); // Tăng 25 đơn vị từ 37 thành 62, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 4; y <= 7; y++) {
        gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(2); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 2; y <= 3; y++) {
        gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 8; y <= 9; y++) {
        gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int y = 3; y <= 8; y++) {
        gotoXY(82 + 10, y); // Tăng 25 đơn vị từ 39 thành 64, giữ nguyên y
        backColor(2); // Dat mau nen la mau do
        cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
    }

    for (int x = 82 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 2);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 83 + 10; x <= 85 + 10; x++) { // Tăng 25 đơn vị từ 40 thành 65
        gotoXY(x, 3);
        backColor(2); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 85 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 42 thành 67
        gotoXY(x, 4);
        backColor(2); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 86 + 10; x <= 87 + 10; x++) { // Tăng 25 đơn vị từ 43 thành 68
        gotoXY(x, 3);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 87 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 44 thành 69
        gotoXY(x, 4);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 83 + 10; x <= 84 + 10; x++) { // Tăng 25 đơn vị từ 40 thành 65
        gotoXY(x, 8);
        backColor(2); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 84 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 41 thành 66
        gotoXY(x, 6);
        backColor(2); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 85 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 42 thành 67
        gotoXY(x, 7);
        backColor(2); // Dat mau nen la mau do
        cout << " ";
    }

    gotoXY(86 + 10, 8); // Tăng 25 đơn vị từ 43 thành 68
    backColor(2); // Dat mau nen la mau do
    cout << " ";

    for (int x = 81 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 9);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int x = 82 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
        gotoXY(x, 10);
        backColor(16); // Dat mau nen la mau do
        cout << " ";
    }

    for (int y = 5; y <= 8; y++) {//ve chu G
        for (int y = 3; y <= 8; y++) {
            gotoXY(80 + 10, y); // Tăng 25 đơn vị từ 37 thành 62, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 4; y <= 7; y++) {
            gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
            backColor(2); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 2; y <= 3; y++) {
            gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 8; y <= 9; y++) {
            gotoXY(81 + 10, y); // Tăng 25 đơn vị từ 38 thành 63, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 3; y <= 8; y++) {
            gotoXY(82 + 10, y); // Tăng 25 đơn vị từ 39 thành 64, giữ nguyên y
            backColor(2); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int x = 82 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
            gotoXY(x, 2);
            backColor(16); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 83 + 10; x <= 85 + 10; x++) { // Tăng 25 đơn vị từ 40 thành 65
            gotoXY(x, 3);
            backColor(2); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 85 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 42 thành 67
            gotoXY(x, 4);
            backColor(2); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 86 + 10; x <= 87 + 10; x++) { // Tăng 25 đơn vị từ 43 thành 68
            gotoXY(x, 3);
            backColor(16); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 87 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 44 thành 69
            gotoXY(x, 4);
            backColor(16); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 83 + 10; x <= 84 + 10; x++) { // Tăng 25 đơn vị từ 40 thành 65
            gotoXY(x, 8);
            backColor(2); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 84 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 41 thành 66
            gotoXY(x, 6);
            backColor(2); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 85 + 10; x <= 86 + 10; x++) { // Tăng 25 đơn vị từ 42 thành 67
            gotoXY(x, 7);
            backColor(2); // Dat mau nen la mau do
            cout << " ";
        }

        gotoXY(86 + 10, 8); // Tăng 25 đơn vị từ 43 thành 68
        backColor(2); // Dat mau nen la mau do
        cout << " ";

        for (int x = 81 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
            gotoXY(x, 9);
            backColor(16); // Dat mau nen la mau do
            cout << " ";
        }

        for (int x = 82 + 10; x <= 88 + 10; x++) { // Tăng 25 đơn vị từ 39 thành 64
            gotoXY(x, 10);
            backColor(16); // Dat mau nen la mau do
            cout << " ";
        }

        for (int y = 5; y <= 8; y++) {
            gotoXY(87 + 10, y); // Tăng 25 đơn vị từ 44 thành 69, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 5; y <= 8; y++) {
            gotoXY(88 + 10, y); // Tăng 25 đơn vị từ 45 thành 70, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 4; y <= 7; y++) {
            gotoXY(83 + 10, y); // Tăng 25 đơn vị từ 40 thành 65, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        for (int y = 4; y <= 5; y++) {
            gotoXY(84 + 10, y); // Tăng 25 đơn vị từ 41 thành 66, giữ nguyên y
            backColor(16); // Dat mau nen la mau do
            cout << " ";   // In ra mot khoang trang o vi tri con tro hien tai
        }

        gotoXY(84 + 10, 7); // Tăng 25 đơn vị từ 41 thành 66, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";

        gotoXY(85 + 10, 5); // Tăng 25 đơn vị từ 42 thành 67, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";

        gotoXY(86 + 10, 5); // Tăng 25 đơn vị từ 43 thành 68, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";

        gotoXY(85 + 10, 8); // Tăng 25 đơn vị từ 42 thành 67, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";

        gotoXY(86 + 10, 10); // Tăng 25 đơn vị từ 43 thành 68, giữ nguyên y
        backColor(16); // Dat mau nen la mau do
        cout << " ";
        //ve ran
        backColor(0);
        int DiemX2 = 70;
        int DiemY2 = 20;
        gotoXY(DiemX2, DiemY2);
        cout << "         ";
        for (int y = DiemY2 + 1; y < DiemY2 + 3; y++) {
            gotoXY(DiemX2 - 1, y);
            cout << " ";
        }
        for (int y = DiemY2 + 3; y < DiemY2 + 6; y++) {
            gotoXY(DiemX2 - 2, y);
            cout << " ";
        }
        gotoXY(DiemX2 - 1, DiemY2 + 6);
        cout << " ";
        gotoXY(DiemX2, DiemY2 + 7);
        cout << "          ";
        gotoXY(DiemX2 + 9, DiemY2 + 1);
        cout << " ";
        for (int y = DiemY2 + 2; y < DiemY2 + 4; y++) {
            gotoXY(DiemX2 + 10, y);
            cout << " ";
        }
        for (int y = DiemY2 + 4; y < DiemY2 + 6; y++) {
            gotoXY(DiemX2 + 11, y);
            cout << " ";
        }
        for (int y = DiemY2 + 6; y < DiemY2 + 10; y++) {
            gotoXY(DiemX2 + 10, y);
            cout << " ";
        }
        gotoXY(DiemX2 + 11, DiemY2 + 8);
        cout << " ";
        gotoXY(DiemX2 + 12, DiemY2 + 9);
        cout << " ";
        gotoXY(DiemX2 + 13, DiemY2 + 10);
        cout << " ";
        for (int y = DiemY2 + 11; y < DiemY2 + 15; y++) {
            gotoXY(DiemX2 + 12, y);
            cout << " ";
        }
        for (int y = DiemY2 + 11; y < DiemY2 + 15; y++) {
            gotoXY(DiemX2 + 14, y);
            cout << " ";
        }
        gotoXY(DiemX2 + 11, DiemY2 + 14);
        cout << " ";
        gotoXY(DiemX2 + 13, DiemY2 + 15);
        cout << " ";
        gotoXY(DiemX2 - 2, DiemY2 + 15);
        cout << "             ";
        gotoXY(DiemX2 - 3, DiemY2 + 14);
        cout << " ";
        for (int y = DiemY2 + 10; y < DiemY2 + 14; y++) {
            gotoXY(DiemX2 - 4, y);
            cout << " ";
        }
        gotoXY(DiemX2 - 3, DiemY2 + 9);
        cout << " ";
        gotoXY(DiemX2 - 2, DiemY2 + 8);
        cout << "  ";
        gotoXY(DiemX2 + 4, DiemY2 + 8);
        cout << " ";
        gotoXY(DiemX2 + 3, DiemY2 + 9);
        cout << " ";
        gotoXY(DiemX2 - 1, DiemY2 + 10);
        cout << " ";
        gotoXY(DiemX2, DiemY2 + 11);
        cout << "         ";
        gotoXY(DiemX2 + 9, DiemY2 + 10);
        cout << " ";
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 + 2, y);
            cout << " ";
        }
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 + 7, y);
            cout << " ";
        }
        backColor(12);
        gotoXY(DiemX2, DiemY2 + 5);
        cout << "  ";
        gotoXY(DiemX2 + 8, DiemY2 + 5);
        cout << "  ";
        backColor(10);
        for (int y = DiemY2 + 1; y < DiemY2 + 3; y++) {
            gotoXY(DiemX2, y);
            cout << "         ";
        }
        gotoXY(DiemX2 + 9, DiemY2 + 2);
        cout << " ";
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 - 1, y);
            cout << "   ";
        }
        gotoXY(DiemX2 - 1, DiemY2 + 5);
        cout << " ";
        gotoXY(DiemX2 + 2, DiemY2 + 5);
        cout << "      ";
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 + 8, y);
            cout << "  ";
        }
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 + 3, y);
            cout << "    ";
        }
        gotoXY(DiemX2, DiemY2 + 8);
        cout << "    ";
        gotoXY(DiemX2 - 2, DiemY2 + 9);
        cout << "     ";
        gotoXY(DiemX2 - 3, DiemY2 + 10);
        cout << "  ";
        gotoXY(DiemX2 - 2, DiemY2 + 11);
        cout << "  ";
        for (int y = DiemY2 + 12; y < DiemY2 + 14; y++) {
            gotoXY(DiemX2 - 2, y);
            cout << "             ";
        }
        for (int y = DiemY2 + 8; y < DiemY2 + 10; y++) {
            gotoXY(DiemX2 + 5, y);
            cout << "    ";
        }
        gotoXY(DiemX2 + 4, DiemY2 + 9);
        cout << " ";
        for (int y = DiemY2 + 10; y < DiemY2 + 12; y++) {
            gotoXY(DiemX2 + 10, y);
            cout << " ";
        }
        gotoXY(DiemX2 + 9, DiemY2 + 11);
        cout << " ";
        backColor(2);
        gotoXY(DiemX2, DiemY2 + 6);
        cout << "          ";
        for (int y = DiemY2 + 4; y < DiemY2 + 6; y++) {
            gotoXY(DiemX2 + 10, y);
            cout << " ";
        }
        gotoXY(DiemX2, DiemY2 + 10);
        cout << "         ";
        for (int y = DiemY2 + 8; y < DiemY + 10; y++) {
            gotoXY(DiemX2 + 9, y);
            cout << " ";
        }
        for (int y = DiemY2 + 11; y < DiemY2 + 14; y++) {
            gotoXY(DiemX2 - 3, y);
            cout << " ";
        }
        gotoXY(DiemX2 - 2, DiemY2 + 14);
        cout << "             ";
        for (int y = DiemY2 + 9; y < DiemY2 + 14; y++) {
            gotoXY(DiemX2 + 11, y);
            cout << " ";
        }
        for (int y = DiemY2 + 11; y < DiemY2 + 15; y++) {
            gotoXY(DiemX2 + 13, y);
            cout << " ";
        }
        gotoXY(DiemX2 + 12, DiemY2 + 10);
        cout << " ";
        backColor(8);
        gotoXY(DiemX2 - 13, DiemY2 + 15);
        cout << "           ";
        gotoXY(DiemX2 - 12, DiemY2 + 16);
        cout << "                                       ";
        gotoXY(DiemX2 + 11, DiemY2 + 15);
        cout << "  ";
        gotoXY(DiemX2 + 14, DiemY2 + 15);
        cout << "              ";
        backColor(2);
        for (int y = DiemY2 + 10; y < DiemY2 + 15; y++) {
            gotoXY(DiemX2 + 20, y);
            cout << " ";
        }
        for (int y = DiemY2 + 7; y < DiemY2 + 10; y++) {
            gotoXY(DiemX2 + 19, y);
            cout << " ";
        }
        for (int y = DiemY2 + 6; y < DiemY2 + 10; y++) {
            gotoXY(DiemX2 + 21, y);
            cout << " ";
        }
        for (int y = DiemY2 + 5; y < DiemY2 + 7; y++) {
            gotoXY(DiemX2 + 18, y);
            cout << " ";
        }
        for (int y = DiemY2 + 3; y < DiemY2 + 5; y++) {
            gotoXY(DiemX2 + 17, y);
            cout << " ";
        }
        for (int y = DiemY2 + 4; y < DiemY2 + 6; y++) {
            gotoXY(DiemX2 + 22, y);
            cout << " ";
        }
        for (int y = DiemY2 + 9; y < DiemY2 + 15; y++) {
            gotoXY(DiemX2 - 7, y);
            cout << " ";
        }
        gotoXY(DiemX2 - 6, DiemY2 + 8);
        cout << " ";
        gotoXY(DiemX2 - 8, DiemY2 + 12);
        cout << " ";
        for (int y = DiemY2 + 10; y < DiemY2 + 12; y++) {
            gotoXY(DiemX2 - 9, y);
            cout << " ";
        }
    }
}