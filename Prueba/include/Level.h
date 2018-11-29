#ifndef LEVEL_H
#define LEVEL_H

#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

class Level : public Game
{
    public:
        Level(int a, int b, string c);
        virtual void time(void)=0;
        void puntTime();

    protected:
        Clock *reloj;
        Time *tiempo;


    private:
        int a;
        int b;
        string c;
        LevelOne();
};

#endif // LEVEL_H
