#include <SDL2/SDL.h>
#include <gameLogic.h>

int SDL_main(int argc, char *args[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Caro",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          0, 0,
                                          SDL_WINDOW_FULLSCREEN_DESKTOP);

    Game game(window);

    bool running = true;
    SDL_Event event;

    while (running)
    {
        while (SDL_PollEvent(&event) != 0)
        {
            // User requests quit
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
            if (event.type == SDL_KEYDOWN)
            {
                SDL_Keycode kc = event.key.keysym.sym;
                switch (kc)
                {
                case SDLK_q:
                    running = false;
                    break;

                default:
                    break;
                }
            }
        }
    }

    // Cleanup
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}