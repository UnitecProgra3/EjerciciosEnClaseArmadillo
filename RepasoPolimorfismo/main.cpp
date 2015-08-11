#include <iostream>

using namespace std;

class Padre
{
public:
    void funcionNormal()
    {
        cout<<"Normal"<<endl;
    }
    void funcionVirtual()
    {
        cout<<"Virtual"<<endl;
    }
    virtual void funcionVirtualPura()=0;
};

class Hijo : public Padre
{
public:
    void funcionNormal()
    {
        cout<<"Normal Hijo"<<endl;
    }
    void funcionVirtual()
    {
        cout<<"Virtual Hijo"<<endl;
    }
    void funcionVirtualPura()
    {
        cout<<"Virtual pura Hijo"<<endl;
    }
};

int main()
{
    cout<<"======Stack======"<<endl;
    Hijo h_stack;
    Padre* p_stack = &h_stack;
    p_stack->funcionNormal();
    p_stack->funcionVirtual();
    p_stack->funcionVirtualPura();

    cout<<"======Heap======"<<endl;
    Padre *p_heap = new Hijo();
    p_heap->funcionNormal();
    p_heap->funcionVirtual();
    p_heap->funcionVirtualPura();
    return 0;
}
