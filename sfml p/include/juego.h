#ifndef JUEGO_H
#define JUEGO_H

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class juego
{
    public:
        juego(int resolucion_x, int resolucion_y, string titulo);
        void abrirp();
        void gameloop();
    protected:

    private:
        RenderWindow *ventana;
};

#endif // JUEGO_H
