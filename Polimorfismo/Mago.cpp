#include "Mago.h"

Mago::Mago()
{
    tipo = "Mago";
}

Mago::~Mago()
{
    //dtor
}

void Mago::logica()
{
    cout<<"--Funcion logica del mago--"<<endl;
}

void Mago::dibujar()
{
    cout<<"Pirrin!"<<endl;
}
