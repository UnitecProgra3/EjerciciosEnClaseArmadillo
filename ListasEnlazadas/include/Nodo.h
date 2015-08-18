#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

template <typename T>
class Nodo
{
    public:
        T valor;
        Nodo* siguiente;
        Nodo(T valor)
        {
            this->valor = valor;
            this->siguiente = NULL;
        }
        virtual ~Nodo()
        {
        }
    protected:
    private:
};

#endif // NODO_H
