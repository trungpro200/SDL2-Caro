#include <Button.h>

//Scene Constructers
Scene::Scene(SDL_Window *win) {
    renderer = SDL_CreateRenderer(win, -1, 0);
    changeColor(renderer, BACKGROUND0);
    SDL_RenderClear(renderer);

    renderButtons();
}

void Scene::renderButtons(){
    for (int i = 0; i<buttonPtrs.size(); i++){
        buttonPtrs[i]->draw();
    }
}

sceneMenu::sceneMenu(SDL_Window *win) : Scene(win){
    // buttonPtrs.push_back(new Button({}));
}

sceneGame::sceneGame(SDL_Window *win) : Scene(win){

}

sceneSetting::sceneSetting(SDL_Window *win) : Scene(win){

}

//Button
Button::Button(SDL_Rect *pos, const char *label){
    buttonPos = pos;

    changeColor(But, BACKGROUND1);
    changeColor(Buthl, BOARD);
    SDL_RenderDrawRect(But, pos);
    SDL_RenderDrawRect(Buthl, pos);
}

void Button::draw(bool hl){
    if (hl){
        SDL_RenderPresent(Buthl);
        return;
    }
    SDL_RenderPresent(But);
}

//Base class functions
void Scene::onClick(Pos2D pos) {
    // Implement onClick function here
}

void Scene::onHover(Pos2D pos) {
    // Implement onHover function here
}

void Scene::init() {
    // Implement initialization logic here
}

void Scene::onKeyPress(SDL_Keycode keycode) {
    // Implement onKeyPress function here
}