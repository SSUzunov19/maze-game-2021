//Include libraries
#pragma once
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <vector>

//Defines
#define ESCAPE_BUTTON 27
#define ARROW_LEFT 75
#define ARROW_RIGHT 77
#define ARROW_UP 72
#define ARROW_DOWN 80
#define COLOR_MAIN 15
#define KEY_ENTER 13

typedef void (*Operation)(int option, bool option2);

//Structures
struct MenuOptions;


//Functions

//Handle and console releated functions
void goToXY(short x, short y);
bool checkForInvalidHandle();
HANDLE getOutputHandle();
void setConsoleColorTo(int color);

//Menu releated functions
void printOptions(std::vector<MenuOptions> menuOptions, int selectedOption, Operation opt);
void printMainLogo();
void printMainMenu(int selectedOption, bool printLogo);
void printSettingsLogo();
void printSettings(int selectedOption, bool printLogo);
void printHowToPlayLogo();
void printHowToPlay(int selectedOption, bool printLogo);
