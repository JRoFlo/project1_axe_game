//axe_game.cpp
/*
* This file is the implementation of the first game... The Axe Game
* Here we will learn about the Raylib Library Functions:
*   InitWindow(): Creates a Window
*   ...
*/
//Including an External Library - Raylib
#include "raylib.h"
#include <iostream>
#include <string>

int main()
{
    //Variables
    int width = 1280;
    int length = 720;

        //InitWindow takes three parameters - InitWindow(int width, int height, string title)
        InitWindow(width, length, "Jordan's Window"); //This function will create a window with the dimensions 1280px x 720px

    //Reaching the end of main function
    return 0;
}