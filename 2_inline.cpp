// Calculate the area and circumference of a circle using inline function
#include <iostream>
using namespace std;
#define PI 3.142

inline void circle(int r)
{
    float area;
    area = PI * r * r;
    cout << "Area of circle: " << area << endl;

    float circumference;
    circumference = 2 * PI * r;
    cout << "Circumference of circle: " << circumference << endl;
}

int main()
{
    int r;

    cout<<"Enter the radius of the circle: ";
    cin>>r;
    circle(r);

    return 0;
}
