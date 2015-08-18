#include <iostream>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

int main()
{
    Lista<int> l;
    l.agregarNodo(10);
    l.agregarNodo(20);
    l.agregarNodo(30);

    l.imprimir();


    Lista<string> l2;
    l2.agregarNodo("Hola");
    l2.agregarNodo("Mundo");
    l2.agregarNodo("Test");
    l2.agregarNodo("Gol");

    l2.imprimir();




//    Lista<Nodo*> l3;
//    l3.agregarNodo(new Nodo<int>(10));
//    l3.agregarNodo(new Nodo<int>(20));
//    l3.agregarNodo(new Nodo<int>(30));
//
//    l3.imprimir();

    return 0;
}
