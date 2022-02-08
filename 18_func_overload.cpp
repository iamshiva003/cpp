// 18 : Find area and circumference of rectangle and triangle using function overloading
#include <iostream>
using namespace std;

float area(float b, float h)
{
    return (0.5 * b * h);
}

float circumference(float s1, float s2, float s3)
{
    return (s1 + s2 + s3);
}

float area(int l, float b)
{
    return (l * b);
}

float circumference(int l, float b)
{
    return (2 * (l + b));
}

int main()
{
    float breadth, recArea, recCircumference;
    int length;
    float s1, s2, s3, base, height, triArea, triCircumference;

    cout << "--- Area ---" << endl;
    cout << "Enter the length and breadth of Rectangle: " << endl;
    cin >> length >> breadth;
    recArea = area(length, breadth);
    cout << "Area of Rectangle: " << recArea << endl;

    cout << "Enter the base and height of Triangle: " << endl;
    cin >> base >> height;
    triArea = area(base, height);
    cout << "Area of Triangle: " << triArea << endl;

    cout << endl;
    cout << "--- Circumference ---" << endl;
    cout << "Enter the length and breadth of Rectangle: " << endl;
    cin >> length >> breadth;
    recCircumference = circumference(length, breadth);
    cout << "Circumference of Rectangle: " << recCircumference << endl;

    cout << "Enter 3 sides of Triangle: " << endl;
    cin >> s1 >> s2 >> s3;
    triCircumference = circumference(s1, s2, s3);
    cout << "Circumference of Triangle: " << triCircumference << endl;

    return 0;
}