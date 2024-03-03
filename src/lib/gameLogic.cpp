#include <gameLogic.h>

//Functions
void changeColor(SDL_Renderer *renderer, SDL_Color color){
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}



//Main
Game::Game(SDL_Window *win){
    scenes.push_back(new sceneMenu(win));
    scenes.push_back(new sceneSetting(win));
    scenes.push_back(new sceneGame(win));

    switchScene(MENU);
}

void Game::switchScene(SCENES scene){
    CurrentScene = scenes[scene];
    SDL_RenderPresent(CurrentScene->renderer);
}






