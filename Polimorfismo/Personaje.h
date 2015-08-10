#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    public:
        int vida;
        int ataque;
        string tipo;
        virtual void logica() = 0;
        virtual void dibujar() = 0;
        //Personaje();
        //Personaje(int x);
        ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
