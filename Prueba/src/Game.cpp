#include "Game.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Game::Game(int resolution_x, int resolution_y, string title)
{
    window= new RenderWindow(VideoMode(resolution_x,resolution_y),title);
    gameLoop();
}

void Game::openPa()
{
    Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed)
                window->close();
        }
    window->clear(Color::Yellow);
    window->display();
}

void Game::gameLoop()
{
    while(window->isOpen()){
        openPa();
    }
}

