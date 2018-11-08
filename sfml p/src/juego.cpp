#include "juego.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace sf;
using namespace std;
juego::juego(int resolucion_x, int resolucion_y, string titulo)
{
    ventana= new RenderWindow(VideoMode(resolucion_x,resolucion_y),titulo);

    texturaprin=new Texture;
    spriteprin=new Sprite;

    texturaprin->loadFromFile("verdadoreto.png");//logo
    spriteprin->setTexture(*texturaprin);//logo
    spriteprin->setPosition(60,70);

    evento1= new Event;

    //textos
    fuente1= new Font();
    fuente1->loadFromFile("fuente-de-letra.ttf");

    txt_prin= new Text();
    txt_prin->setFont(*fuente1);
    txt_prin->setString("apachurrale I Enter I para empezar");
    txt_prin->setPosition(150,500);
    txt_prin->setColor(Color::Black);


    txt_ingresarjugadores.setFont(*fuente1);
    txt_ingresarjugadores.setString("1. ingresar jugadores");
    txt_ingresarjugadores.setPosition(80,320);
    txt_ingresarjugadores.setColor(Color::White);

    txt_verscore.setFont(*fuente1);
    txt_verscore.setString("2. ver score");
    txt_verscore.setPosition(80,380);
    txt_verscore.setColor(Color::White);





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


    ventana->clear(Color::White);
    ventana->draw(*txt_prin);
    ventana->draw(txt_ingresarjugadores);
    ventana->draw(txt_verscore);
    ventana->draw(*spriteprin);
    ventana->display();
}

void juego::gameloop()
{

    /*Event event;
    SoundBuffer buffer;
    if(!buffer.loadFromFile("musicTF.wav"))
    {
        cout << "ERROR" << endl;
    }

    Sound sound;
    sound.setBuffer(buffer);
    sound.play();*/

    while(ventana->isOpen()){


        procesar_eventos();
        abrirp();

    }
}

void juego::procesar_eventos()
{
    while(ventana->pollEvent(*evento1))
    {
        switch(evento1->type)
        {
        case Event::KeyPressed:
            if (Keyboard::isKeyPressed(Keyboard::Enter))
            {
                spriteprin->setPosition(60,-60);
                txt_prin->setColor(Color::White);
                txt_ingresarjugadores.setColor(Color::Black);
                txt_verscore.setColor(Color::Black);






            }
        }
    }
}
