#ifndef BUTTON_H
#define BUTTON_H

#include <DataStructs.h>
#include <vector>
#include <cstring>

/* code */

//Game's object
class Button{
public:
    SDL_Rect *buttonPos;
    SDL_Renderer *Buthl;
    SDL_Renderer *But;

    Button(SDL_Rect *Pos, const char* label);
    
    void draw(bool hl = false);
    bool onHover(Pos2D pos);
};

class Scene{
public:
    Scene(SDL_Window *win);

    std::vector<Button*> buttonPtrs; //For interaction

    SDL_Renderer *renderer;
    

    //User's input handler
    virtual void onHover(Pos2D pos);
    virtual void onClick(Pos2D pos);
    virtual void onKeyPress(SDL_Keycode keycode);

    //Rendering
    virtual void init();
    void renderButtons();
};

//Scenes

class sceneMenu : public Scene {
public:
    sceneMenu(SDL_Window *win);
};

class sceneSetting : public Scene {
public:
    sceneSetting(SDL_Window *win);
};

class sceneGame : public Scene {
public:
    sceneGame(SDL_Window *win);
};

#endif //BUTTON_H
