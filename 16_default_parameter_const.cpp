// 16 : Demonstrate default constructors and parameterized constructors
#include <iostream>
using namespace std;

class Add
{
private:
    int a, b;

public:
    Add()
    {
        a = 0;
        b = 0;
    }

    Add(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        int c;

        c = a + b;
        cout << "Sum: " << c << endl;
    }
};

int main()
{
    Add a1;
    Add a2(10, 20);

    cout << "Sum using Default Constructor" << endl;
    a1.display();

    cout << "Sum using Parameterized Constructor" << endl;
    a2.display();

    return 0;
}