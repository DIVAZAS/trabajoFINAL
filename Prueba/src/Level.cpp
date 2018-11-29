#include "Level.h"
#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

using namespace sf;
using namespace std;

Level:: Level(int a, int b, string c) : Game(a, b, c){}

//    reloj = new Clock();
  //  tiempo = new Time();


void Level:: puntTime()
{
    this->time();
}
/*
class LevelOne : public Level
{
   *tiempo= reloj->getElapsedTime();//obtener tiempo
    cout << tiempo->asSeconds() <<endl;
};*/

Level::LevelOne(){
     *tiempo= reloj->getElapsedTime();//obtener tiempo
    cout << tiempo->asSeconds() <<endl;

}

class LevelTwo : public Level
{


};

class LevelTree : public Level
{



};

class LevelFour : public Level
{


};

class LevelFive : public Level
{

};
