#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

template <typename T>
class Lista
{
    public:
        Nodo<T>* inicio;

        Lista()
        {
            inicio = NULL;
        }
        void agregarNodo(T valor_nuevo)
        {
            Nodo<T>* nuevo = new Nodo<T>(valor_nuevo);
            if(inicio==NULL)
            {
                inicio = nuevo;
            }else
            {
                Nodo<T>* iterador = inicio;
                while(iterador->siguiente!=NULL)
                {
                    iterador = iterador->siguiente;
                }
                iterador->siguiente = nuevo;
            }
        }
        void imprimir()
        {
            for(Nodo<T>*iterador = inicio;
                iterador!=NULL;
                iterador = iterador->siguiente)
                cout<<iterador->valor<<endl;
        }
        virtual ~Lista()
        {
            //dtor
        }
    protected:
    private:
};

#endif // LISTA_H
