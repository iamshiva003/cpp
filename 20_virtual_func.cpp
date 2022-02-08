// 20 : Demonstrate Virtual Function
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void output()
    {
        cout<<"Output Base class"<<endl;
    }
    void display()
    {
        cout<<"Display Base class"<<endl;
    }
};

class Derived: public Base
{
public:
    void output()
    {
        cout<<"Output Derived class"<<endl;
    }
    void display()
    {
        cout<<"Display Derived class"<<endl;
    }
};

int main()
{
    Base *bptr;
    Derived d;

    bptr = &d;
    bptr->output();  // virtual function
    bptr->display(); // Non-virtual function
    d.display();

    return 0;
}