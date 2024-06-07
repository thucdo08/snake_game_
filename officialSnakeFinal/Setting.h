#pragma once
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <mmsystem.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#include <thread>
#pragma comment(lib, "winmm.lib")
#include "Header.h"
#include "SetUp.h"
#include "Menu.h"
using namespace std;
void toggleSound(int music);
void SettingsMode(int& Music, int& CurrentMusic, bool &SFXTurnOn, int& MusicVolume, int &SFXVolume,bool&start);
void setVolume(int volume);
void WordInSet(int DiemX, int DiemY, int& Music, int& CurrentMusic, bool& SFXTurnOn, int& MusicVolume, int& SFXVolume);
