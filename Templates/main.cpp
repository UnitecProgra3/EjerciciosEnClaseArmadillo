#include <iostream>

using namespace std;

template <typename T>
T sumar(T a,T b)
{
    return a+b;
}

template <typename T>
class MiClase
{
public:
    T mi_variable;
};

int main()
{
    cout<<"-------Clases-------"<<endl;
    MiClase<int> mc1;
    mc1.mi_variable = 10;

    MiClase<string> mc2;
    mc2.mi_variable = "Hola Mundo";

    cout<<mc1.mi_variable<<endl;
    cout<<mc2.mi_variable<<endl;

    cout<<"-------Funciones-------"<<endl;
    int int1 = 1;
    int int2 = 2;
    cout<<sumar(int1,int2)<<endl;

    string str1 = "Hola";
    string str2 = "Mundo";
    cout<<sumar(str1,str2)<<endl;

    bool bool1 = 1;
    bool bool2 = 43;

    return 0;
}
