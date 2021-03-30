#include <iostream>

#include <SDL.h>

#include "game.hpp"
#include "App.hpp"

int
main ()
{
    App *app;
    
    bool b = app->init();
    if (!b) {
        std::cout << "Failed to initialize. Stopping." << std::endl;
        return 1;
    }
    
    app->start();
    
    return 0;
}
