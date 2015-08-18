#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("mi_archivo");
    out<<"Hola mundo!"<<endl;
    out<<true<<endl;
    out<<54<<endl;
    out<<43.23<<endl;
    out.flush();
    out.close();

    ifstream in("mi_archivo");
    string str;
    while(in>>str)
    {
        cout<<str<<endl;
    }

    return 0;
}
