#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class Game
{
    public:
        Game(int resolucion_x, int resolucion_y, string titulo);
        void abrirp();
        void gameloop();// funcion que se repite constantemente para que el programa corra
        void pantallas();
        void procesar_eventos();

    protected:
        Clock *reloj;
        Time *tiempo;

    private:
        RenderWindow *ventana;
        Texture *pantalla1;
        Sprite *spritep1;
        Texture *pantalla2;
        Sprite *spritep2;
        Texture *pantalla3;
        Sprite *spritep3;

        Event *evento1;

        Texture ruleta3;
        Sprite rul3;
        Texture ruleta4;
        Sprite rul4;
        Texture ruleta5;
        Sprite rul5;

        /*
        Font *fuente1;
        Text *txt_prin;//sfml vuelve el texto de string a una imagen para poder mostrarla en la pantalla
        Text txt_ingresarjugadores;
        Text txt_verscore;
        */


};

#endif // GAME_H
