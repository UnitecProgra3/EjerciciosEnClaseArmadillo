#include "Rectangulo.h"

float Rectangulo::getPerimetro()
{
    return base*2+altura*2;
}

float Rectangulo::getArea()
{
    float area = base*altura;
    return area;
}

Rectangulo::Rectangulo(float base, float altura)
{
    this->base = base;
    this->altura = altura;
}
