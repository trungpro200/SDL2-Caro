#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <SDL2/SDL.h>
#include <vector>
#include <cstring>
#include <DataStructs.h>
#include <Button.h>




//Game class
class Game {
public:
    Game(SDL_Window *win);
    Scene* CurrentScene;
    SDL_Window *window;
    std::vector<Scene*> scenes;

    //Scenes


    void switchScene(SCENES scene);
};

#endif // GAMELOGIC_H