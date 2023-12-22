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
    float root_beer = 1.99;
    //root_beer = 1.99; //Uncomment this variable if you'd like to test the debugging window
    double cheese_burger{5.99}; //Braced Initialization
    bool should_have_lunch = true;
    //bool should_have_lunch{}; //Default Value of False using Braced Initialization
    //should_have_lunch = true;
    //---------------------------------------------------------------------------------------------//
    //More Variables to check with the debugger
    bool equal{4 == 9}; //False
    bool not_equal{4 != 9}; //True
    bool less{4 < 9}; //True
    bool greater{4 > 9}; //False
    bool less_equal{4 <= 9}; //True
    bool greater_equal{4 >= 9}; //False

    //InitWindow takes three parameters - InitWindow(int width, int height, string title)
    InitWindow(width, length, "Jordan's Window"); //This function will create a window with the dimensions 1280px x 720px

    //Reaching the end of main function
    return 0;
}

/*Debugging: The process of finding and removing errors
    In Visual Studio Code we have debugging tools at our disposal.
    If we hover over the left side of our code, we can see a red dot.
    That red dot is a breakpoint.

Comparison Operators:
    == is the equal to comparison operator. This operator compares the two operands to see if they are equal to eachother.
        If they are equal to each other, the operator returns true. Else, the operator returns false.
        Example: 4 == 9 returns a boolean value of false
        We can store this value like this: bool four_is_nine = (4 == 9)
    
    <= less than or equal to
    < less than
    != not equal to
*/