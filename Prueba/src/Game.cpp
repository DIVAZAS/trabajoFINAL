#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

using namespace sf;
using namespace std;

Game::Game(int resolution_x, int resolution_y, string title)
{
    window= new RenderWindow(VideoMode(resolution_x,resolution_y),title);
    gameLoop();
}

void Game::openPa()
{
    sf::Event event;
    sf::SoundBuffer buffer;

    if(!buffer.loadFromFile("musicTF.wav"))
    {
        cout << "ERROR" << endl;
    }

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    while(window->isOpen())
    {
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed)
                window->close();
                break;
        }

    window->clear(Color::Yellow);
    window->display();
    }
}

void Game::gameLoop()
{
    while(window->isOpen()){
        openPa();
    }
}

