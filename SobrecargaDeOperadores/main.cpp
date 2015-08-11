#include <iostream>

using namespace std;

class Numero
{
public:
    int num;
    Numero(int num)
    {
        this->num = num;
    }
    Numero operator+(Numero param)
    {
        Numero nuevo(this->num+param.num);
        return nuevo;
    }
};

int sumar(Numero n1,Numero n2)
{
    return n1.num+n2.num;
}

//int operator+(Numero n1,Numero n2)
//{
//    return n1.num+n2.num;
//}

class miCout
{
public:
    void operator<<(int num)
    {
        cout<<num<<endl;
    }
    void operator<<(string str)
    {
        cout<<str<<endl;
    }
    void operator<<(char c)
    {
        cout<<c<<endl;
    }
};

int main()
{
    miCout cout;


    Numero n1(10);
    Numero n2(20);
    Numero n3(30);

    cout<<sumar(n1,n2);
    Numero n4 = n1+n2+n3;
    cout<<n4.num;
    cout<<"Hola";
    cout<<'@';

    return 0;
}
