// src/main.c
#include <stdio.h>
#include <SDL2/SDL.h>

int main(void) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }
    printf("SDL Initialized successfully.\n");
    SDL_Quit();
    return 0;
}
