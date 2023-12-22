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
    //Window Dimensions
    int width{1280};
    int height{720};
 
    //Circle Coordinates
    int circle_x{640};
    int circle_y{360};
    int circle_rad{25};

    //InitWindow takes three parameters - InitWindow(int width, int height, string title)
    InitWindow(width, height, "Jordan's Window"); //This function will create a window with the dimensions 1280px x 720px


    //Set a Target Value for FPS so the computer doesnt update so many times
    SetTargetFPS(60);
    //Infinite While Loop to keep the canvas on screen and drawing properly.
    while(WindowShouldClose() != true) //or while(WindowShouldClose() == false)
    {
        BeginDrawing(); //Set up the canvas
        ClearBackground(PURPLE); //Clear the background with a color to prevent flickering

        //Game Logic Begins
        DrawCircle(circle_x, circle_y, circle_rad, RED);
        if(IsKeyDown(KEY_D))
            circle_x = circle_x + 2;
        if(IsKeyDown(KEY_A))
            circle_x = circle_x - 2;
        if(IsKeyDown(KEY_W))
            circle_y = circle_y - 2;
        if(IsKeyDown(KEY_S))
            circle_y = circle_y + 2;
        //Game Logic Ends
        EndDrawing();
    }

    //Reaching the end of main function
    return 0;
}

/*
    RayLib Functions:
        BeginDrawing(); - Setup
        EndDrawing(); - Teardown
        ClearBackground(COLOR PARAMETER); - Clears the Canvas
        WindowShouldClose() - This function returns a false bool, UNLESS we hit the escape key or the X (exit button)
        IsKeyDown(KEY_D) - Checks to see if the key D is being pressed
*/