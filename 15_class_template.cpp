// 15 : Demonstrate class template
#include <iostream>
using namespace std;

template <class T>
class Test
{
private:
    T a, b;

public:
    void getdata()
    {
        cout << "Enter the value of A: ";
        cin >> a;
        cout << "Enter the value of B: ";
        cin >> b;
    }

    void sum();
};

template <class T>
void Test<T>::sum()
{
    cout << "Addition of A and B is: " << (a + b) << endl;
}

int main()
{
    Test<int> t1;

    cout << "Addition of two Integer numbers A and B" << endl;
    t1.getdata();
    t1.sum();

    Test<float> t2;

    cout << endl;
    cout << "Addition of two Decimal numbers A and B" << endl;
    t2.getdata();
    t2.sum();

    return 0;
}