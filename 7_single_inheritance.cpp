// 7. Demonstrate single inheritance.
#include <iostream>
using namespace std;

class Shape
{
public:
    float side1, side2;

    void getdata(float x, float y)
    {
        side1 = x;
        side2 = y;
    }
};

class Rectangle: public Shape
{
public:
    float area;

    void compute()
    {
        area = side1 * side2;
    }

    void display()
    {
        cout << "Side 1: " << side1 << " cm" << endl;
        cout << "Side 2: " << side2 << " cm" << endl;
        cout << "Area: " << area << " sq cm" << endl;
    }
};

int main()
{
    Rectangle r;

    r.getdata(45.6, 78.6);
    r.compute();
    r.display();

    return 0;
}