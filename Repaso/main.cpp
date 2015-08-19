#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    list<int>mi_lista;
    cout<<"Ingrese 3 numeros"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<":";
        int num;
        cin>>num;
        mi_lista.push_back(num);
    }

    cout<<"Inserte un numero"<<endl;
    cout<<"numero: ";
    int numero_insertado;
    cin>>numero_insertado;
    cout<<"posicion: ";
    int pos_insertado;
    cin>>pos_insertado;

    list<int>::iterator i_insertado=mi_lista.begin();
    for(int i=0;i<pos_insertado;i++)
        i_insertado++;
    mi_lista.insert(i_insertado,numero_insertado);

    cout<<"---Escribiendo en el archivo---"<<endl;

    ofstream out("archivo");
    for(list<int>::iterator i=mi_lista.begin();
        i!=mi_lista.end();
        i++)
        out<<*i<<" ";
    out.close();


    cout<<"---Leyendo el archivo---"<<endl;
    ifstream in("archivo");
    int num_leido;
    list<int>mi_lista_leida;
    while(in>>num_leido)
    {
        mi_lista_leida.push_back(num_leido);
    }

    cout<<"---Imprimiendo lista---"<<endl;

    for(list<int>::iterator i=mi_lista_leida.begin();
        i!=mi_lista_leida.end();
        i++)
        cout<<*i<<endl;

    return 0;
}
