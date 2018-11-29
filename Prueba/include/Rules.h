#ifndef RULES_H
#define RULES_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class Rules
{
    public:
        //Rules();
        juego(Vector2i dimension, string titulo);
        void gameLoop();
        void dibujar();
        void procesar_eventos();
        void procesar_mouse();
        void procesar_colisiones();
        //virtual ~Rules();

    protected:

    private:
        RenderWindow *ventana1;
        int fps;
        Texture *txt1;
        Sprite *spr1;
        Texture *txt2;
        Sprite *spr2;
        Sprite *spr3;
        Texture *txt3;
        Event *evento1;
        Vector2i posicion_mouse;

        Clock *reloj1;
        Time *tiempo1;
        float tiempo2;

};

#endif // RULES_H
