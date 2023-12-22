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
    int width{1280};
    int length{720};

    //Loop Variables
    int miles_to_disney{100};

    //While Loop to check if we are getting closer to Disney Land
    while(miles_to_disney > 0)
    {
        std::cout << "Are we there yet?" << std::endl;
        miles_to_disney = miles_to_disney - 1;
    }
    if(miles_to_disney == 0) 
        std::cout << "Arrived at destination." << std::endl;

    //InitWindow takes three parameters - InitWindow(int width, int height, string title)
    InitWindow(width, length, "Jordan's Window"); //This function will create a window with the dimensions 1280px x 720px

    //Reaching the end of main function
    return 0;
}

/*
    Loops: 
*/