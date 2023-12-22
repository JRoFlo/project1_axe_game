//axe_game_fork1.cpp
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

//User Input for window_title
void read_user_title(std::string & title)
{
    //Prompt the User 
    std::cout << "Enter the title of the window: ";
    //std::cin >> title;
    std::getline(std::cin, title); //Reads the full line, including whitespace using getline()
    std::cout << "\nThank you";
}

/*
int main()
{
    //Variables
    int width = 1280;
    int length = 720;
    std::string window_title;

    //Reads user input - takes in the window_title string
    read_user_title(window_title);

    //InitWindow takes three parameters - InitWindow(int width, int height, string title)
    InitWindow(width, length, window_title.c_str()); //This function will create a window with the dimensions 1280px x 720px

    //Reaching the end of main function
    return 0;

}
*/