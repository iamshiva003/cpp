// 13. Demonstrate derived class constructor and overriding member functions in base and derived class.
#include <iostream>
using namespace std;

class Alpha
{
protected:
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "Alpha Inititalize" << endl;
    }

    void show() 
    {
        cout << "x = " << x << endl;
    }
};

class Beta
{
protected:
    int y;

public:
    Beta(int j)
    {
        y = j;
        cout << "Beta Inititalize" << endl;
    }
    
    void show()
    {
        cout << "y = " << y << endl;
    }
};

class Gamma: public Alpha, public Beta
{
private:
    int m, n;

public:
    Gamma(int a, int b, int c, int d) : Alpha(a), Beta(b)
    {
        m = c;
        n = d;
        cout << "Gamma Initialize" << endl;
    }

    void show()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

int main()
{
    Gamma g(10, 20, 30, 40);

    g.Alpha::show();
    g.Beta::show();
    g.show();

    return 0;
}