#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class juego
{
    public:
        juego(int resolucion_x, int resolucion_y, string titulo);
        void abrirp();
        void gameloop();// funcion que se repite constantemente para que el programa corra

        void procesar_eventos();
    protected:

    private:
        RenderWindow *ventana;

        Texture *texturaprin;
        Sprite *spriteprin;

        Event *evento1;

        Font *fuente1;
        Text *txt_prin;//sfml vuelve el texto de string a una imagen para poder mostrarla en la pantalla
        Text txt_ingresarjugadores;
        Text txt_verscore;

};

#endif // JUEGO_H
