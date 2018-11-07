#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

class Game
{
    public:
        Game(int resolution_x, int resolution_y, string title);
        void openPa();
        void gameLoop();

    protected:

    private:
        RenderWindow *window;
};

#endif // GAME_H
