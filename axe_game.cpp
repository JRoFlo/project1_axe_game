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
    //Window Dimensions - (x, y) coordinate (0, 0) is located in the top left corner
    int width{1280};
    int height{720};
 
    //Circle Coordinates
    int circle_x{640};
    int circle_y{600};
    int circle_rad{25};

    //Axe Coordinates
    int axe_x{440}; //Starts a little bit left of the middle
    int axe_y{0}; //Starts at the Top 
    int axe_width{50};
    int axe_height{50};
    int axe_direction{7};

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
        DrawCircle(circle_x, circle_y, circle_rad, GREEN);
        DrawRectangle(axe_x, axe_y, axe_width, axe_height, RED);

        //Drop the Axe
        axe_y += axe_direction; //Drop the Axe at 5pixels per frame
        if(axe_y > height - axe_height || axe_y < 0)
        {
            axe_direction = -axe_direction;
        }
        //Right Movement
        if(IsKeyDown(KEY_D) && (circle_x + circle_rad < width)) //If the D Key is being pressed && as big as the window's width
            circle_x += 7; //Change the x coordinate by 2 pixels each frame
        //Left Movement
        if(IsKeyDown(KEY_A) && (circle_x - circle_rad > 0))
            circle_x -= 7;
        //Up Movement - The top most edge is the y coordinate 0
        if(IsKeyDown(KEY_W) && (circle_y - circle_rad > 0))
            circle_y -= 3;
        //Down Movement - The bottom most edge is the y coordinate height
        if(IsKeyDown(KEY_S) && (circle_y + circle_rad < height))
            circle_y += 3;
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
        DrawRectangle(posX, posY, width, height, color);
        DrawCircle();
*/