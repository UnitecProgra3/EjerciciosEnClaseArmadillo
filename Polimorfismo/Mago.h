#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago();
        void logica();
        void dibujar();
        virtual ~Mago();
    protected:
    private:
};

#endif // MAGO_H
