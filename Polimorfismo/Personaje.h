#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    public:
        int vida;
        int ataque;
        void logica();
        void dibujar();
        Personaje();
        ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
