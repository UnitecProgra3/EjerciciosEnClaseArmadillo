#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    cout<<"-------List-------"<<endl;
    list<string>mi_lista;
    mi_lista.push_back("A");
    mi_lista.push_back("B");
    mi_lista.push_back("C");
    mi_lista.push_front("0");
    mi_lista.push_front("1");

    list<string>::iterator j = mi_lista.begin();
    j++;j++;j++;
    mi_lista.insert(j,"D");

    for(list<string>::iterator i = mi_lista.begin();
        i!=mi_lista.end();
        i++)
        cout<<*i<<endl;


    cout<<"-------Vector-------"<<endl;
    vector<string>mi_vector;
    mi_vector.push_back("A");
    mi_vector.push_back("B");
    mi_vector.push_back("C");
    mi_vector.push_back("D");

    mi_vector[2] = "F";

    mi_vector.pop_back();

    for(int i=0;i<mi_vector.size();i++)
    {
        cout<<mi_vector[i]<<endl;
    }

    return 0;
}
