#include<SDL2/SDL.h>
#include<user/structs.h>
#include<user/defines.h>
App Init(App app) {
    app.window = SDL_CreateWindow("game v0.1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_FOREIGN);
    app.renderer = SDL_CreateRenderer(app.window, 1, SDL_RENDERER_ACCELERATED);
    if (SDL_INIT_VIDEO < 0)
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR, "Video initialization error ", SDL_GetError());
    return app;
}