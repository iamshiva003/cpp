// 11. Demonstrate to overload Arithmetic Assignment “+=” and “-=” operators
#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int num;

public:
    Arithmetic(int a)
    {
        num = a;
    }

    friend void operator +=(Arithmetic a, Arithmetic b)
    {
        a.num += b.num;
        cout << "Addition of two numbers using the arithmetic operator (+=): " << a.num << endl;
    }

    friend void operator -=(Arithmetic a, Arithmetic b)
    {
        a.num -= b.num;
        cout << "Subtraction of two numbers using the arithmetic operator (-=): " << a.num << endl;
    }
};

int main()
{
    Arithmetic a(25);
    Arithmetic b(20);

    operator +=(a, b);
    operator -=(a, b);

    return 0;
}