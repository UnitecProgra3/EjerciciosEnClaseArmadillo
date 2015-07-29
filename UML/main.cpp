#include <iostream>
#include "Rectangulo.h"

using namespace std;

class MiClase
{
public:
    int mi_variable;

    void miFuncion()
    {

    }
};

class Pastel
{
public:
    string nombre;
    string topping;
    Pastel(string nombre, string topping)
    {
        (*this).nombre = nombre;
        this->topping = topping;
    }
    string getNombre()
    {
        return nombre;
    }
    string getTopping()
    {
        return topping;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
};

int main()
{
    Rectangulo r(4,2);
    cout<<r.getPerimetro()<<endl;
    cout<<r.getArea()<<endl;
    return 0;
}
