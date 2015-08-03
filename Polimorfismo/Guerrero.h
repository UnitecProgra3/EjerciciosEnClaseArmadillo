#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero : public Personaje
{
    public:
        Guerrero();
        void logica();
        void dibujar();
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
