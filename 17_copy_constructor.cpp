// 17 : Demonstrate copy constructors
#include <iostream>
using namespace std;

class Integer
{
private:
    int a, b;

public:
    Integer(int x, int y)
    {
        a = x;
        b = y;
    }

    Integer(Integer &i)
    {
        a = i.a;
        b = i.b;
    }

    void show()
    {
        cout << "Value of A: " << a << endl;
        cout << "Value of B: " << b << endl;
    }
};

int main()
{
    Integer a(10, 20);
    Integer b(a);

    cout << "Value of Object 1: (a): " << endl;
    a.show();

    cout << "Value of Object 2: (b): " << endl;
    b.show();

    return 0;
}