#ifndef DATASTRUCTS_H
#define DATASTRUCTS_H

#include <SDL2/SDL.h>

// Header file contents go here




//Color
#define BACKGROUND0 {27, 40, 55, 255}
#define BACKGROUND1 {16, 27, 39, 255}
#define BOARD {12, 20, 29, 255}
#define LINE {44, 62, 80, 255}
#define CELL_SIZE 20

//Data types
typedef struct {
    int x;
    int y;
} Pos2D;

typedef enum {
    MENU,
    SETTING,
    GAME
} SCENES;

//Functions
void changeColor(SDL_Renderer *renderer, SDL_Color color); //Change renderer's color

#endif // DATASTRUCTS_H
