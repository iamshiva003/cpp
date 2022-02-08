// 19 : Compare two strings using equal operator
#include <iostream>
#include <string.h>
using namespace std;

class StringCompare
{
private:
    char str[20];

public:
    void read()
    {
        cout << endl;
        cout << "Enter the string: ";
        cin >> str;
    }
    void display()
    {
        cout << "The string is: " << str << endl;
    }
    void operator==(StringCompare s)
    {
        if (strcmp(str, s.str) == 0)
            cout << "Strings are equal" << endl;

        else
            cout << "Strings are not equal" << endl;
    }
};

int main()
{
    StringCompare s1, s2;

    s1.read();
    s1.display();

    s2.read();
    s2.display();

    s1 == s2;

    return 0;
}