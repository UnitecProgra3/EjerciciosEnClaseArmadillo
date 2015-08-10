#include <iostream>

using namespace std;

class Padre
{
public:
    void funcionNormal()
    {
        cout<<"Normal"<<endl;
    }
    virtual void funcionVirtual()
    {
        cout<<"Virtual"<<endl;
    }
    virtual void funcionVirtualPura()=0;
};

class Hijo
{
public:
    void funcionNormal()
    {
        cout<<"Normal Hijo"<<endl;
    }
    virtual void funcionVirtual()
    {
        cout<<"Virtual Hijo"<<endl;
    }
    virtual void funcionVirtualPura()
    {
        cout<<"Virtual pura Hijo"<<endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
