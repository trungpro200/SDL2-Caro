#include <Button.h>

//Scene Constructers
Scene::Scene(SDL_Window *win) {
    renderer = SDL_CreateRenderer(win, -1, 0);
    changeColor(renderer, BACKGROUND0);
    SDL_RenderClear(renderer);
}

sceneMenu::sceneMenu(SDL_Window *win) : Scene(win){

}

sceneGame::sceneGame(SDL_Window *win) : Scene(win){

}

sceneSetting::sceneSetting(SDL_Window *win) : Scene(win){

}

//Button
Button::Button(Rect pos){
    buttonPos = pos;
}