#include "Guerrero.h"

Guerrero::Guerrero()
{
    tipo = "Guerrero";
    cout<<"Este es el constructor del hijo"<<endl;
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::logica()
{
    cout<<"--Funcion logica del guerrero--"<<endl;
}

void Guerrero::dibujar()
{
    cout<<"Wrrraaar!"<<endl;
}
