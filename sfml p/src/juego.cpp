#include "juego.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;
juego::juego(int resolucion_x, int resolucion_y, string titulo)
{
    ventana= new RenderWindow(VideoMode(resolucion_x,resolucion_y),titulo);

    gameloop();
}


void juego::abrirp()
{
    Event event;
        while (ventana->pollEvent(event))
        {
            if (event.type == Event::Closed)
                ventana->close();
        }
    ventana->clear(Color::Black);
    ventana->display();
}

void juego::gameloop()
{
    while(ventana->isOpen()){

        abrirp();

    }
}

