#include <iostream>
#include "Personaje.h"
#include "Guerrero.h"
#include "Mago.h"

using namespace std;

int main()
{
    Personaje* personajes[3];
    personajes[0] = new Personaje();
    personajes[1] = new Personaje();
    personajes[2] = new Personaje();

    Guerrero* guerrero = new Guerrero();
    Mago* mago = new Mago();

    while(true)
    {
        guerrero->logica();
        guerrero->dibujar();

        mago->logica();
        mago->dibujar();
//        for(int i=0;i<3;i++)
//        {
//            personajes[i]->logica();
//        }
//        for(int i=0;i<3;i++)
//        {
//            personajes[i]->dibujar();
//        }
        break;
    }

    return 0;
}
