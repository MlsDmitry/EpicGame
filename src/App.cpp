//
//  App.cpp
//  epic_game
//
//  Created by Dmitry Molokovich on 30/03/2021.
//

#include <iostream>

#include <SDL.h>

#include "App.hpp"


bool
App::init()
{

    SDL_Log("Initializing sdl game");
    
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        SDL_Log("SDL_Init failed. Message: %s", SDL_GetError());
        return false;
    }
    
    window = SDL_CreateWindow("Epic Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, 0);
    if (window == NULL) {
        SDL_Log("SDL_CreateWindow failed. Message: %s", SDL_GetError());
        return false;
    }
    
    return true;
}

void
App::start()
{
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            on_event(&event);
        }
        game_loop();
        
    }
    quit();
}

void
App::on_event(SDL_Event * event)
{
    switch (event->type)
    {
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
    }
}

void
App::game_loop()
{
    std::cout << "Hello from game loop" << std::endl;
}

void
App::quit()
{
    SDL_Quit();
}


