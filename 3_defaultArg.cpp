// Demonstrate default arguments function
#include <iostream>
using namespace std;

float simpleInterest(int principle, float time, float rate=2.5)
{
    return ((principle * rate * time) / 100);
}

int main()
{
    int principle;
    float time, si;

    cout << "Enter the principle: ";
    cin >> principle;
    cout << "Enter the time     : ";
    cin >> time;

    si = simpleInterest(principle, time);
    cout << "Simple Interest for Default Argument rate=2.5 is: " << si << endl;

    si = simpleInterest(principle, time, 3.875);
    cout << "Simple Interest for rate=2.5 is: " << si << endl;

    return 0;
}
