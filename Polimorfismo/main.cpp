#include <iostream>
#include "Personaje.h"

using namespace std;

int main()
{
    Personaje* personajes[3];
    personajes[0] = new Personaje();
    personajes[1] = new Personaje();
    personajes[2] = new Personaje();

    while(true)
    {
        for(int i=0;i<3;i++)
        {
            personajes[i]->logica();
            (*personajes[i]).logica();
        }
        for(int i=0;i<3;i++)
        {
            personajes[i]->dibujar();
        }
        break;
    }

    return 0;
}
