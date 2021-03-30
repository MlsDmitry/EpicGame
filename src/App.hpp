//
//  App.hpp
//  epic_game
//
//  Created by Dmitry Molokovich on 30/03/2021.
//

#ifndef App_hpp
#define App_hpp

#include <SDL.h>

class App
{
private:
    SDL_Window * window;
    bool running = true;
    
public:
    bool init();
    void on_event(SDL_Event * event);
    void start();
    void quit();
private:
    void game_loop();
};

#endif /* App_hpp */
