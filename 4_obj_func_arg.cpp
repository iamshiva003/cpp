// Demonstrate object as function arguments and returning objects from function
#include <iostream>
using namespace std;

class Add
{
private:
    int num;
public:
    void read();
    void display(Add);
    friend Add sum(Add, Add);
};

void Add::read()
{
    cout << "Enter the value: ";
    cin >> num;
}

void Add::display(Add a)
{
    cout << "Addition of the number is: " << a.num << endl;
}

Add sum(Add a1, Add a2)
{
    Add a3;

    a3.num = a1.num + a2.num;
    return a3;
}

int main()
{
    Add a1, a2, a3;

    a1.read();
    a2.read();

    a3 = sum(a1, a2);
    a3.display(a3);

    return 0;
}