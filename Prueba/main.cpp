#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Game.h"
#include <Windows.h>
#include <MMSystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
using namespace sf;

int main()
{
    //PlaySound(TEXT("musicTF.wav"),NULL,SND_ASYNC);


    Game *verdadoreto;
    verdadoreto= new Game(800,600,"Truth or Dare");

}
