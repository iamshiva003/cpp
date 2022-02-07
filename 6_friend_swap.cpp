// Swap two numbers using friend function

#include <iostream>
using namespace std;

class Swapping
{
private:
    int num;
public:
    void getdata()
    {
        cout << "Enter the number: ";
        cin >> num;
    }

    friend void swap(Swapping s1, Swapping s2)
    {
        int temp;

        cout << "Before Swapping" << endl;
        cout << s1.num << " " << s2.num << endl;

        temp = s1.num;
        s1.num = s2.num;
        s2.num = temp;

        cout << "After Swapping" << endl;
        cout << s1.num << " " << s2.num << endl;
    }
};

int main() 
{
    Swapping s1, s2;

    s1.getdata();
    s2.getdata();
    swap(s1, s2);
    
    return 0;
}