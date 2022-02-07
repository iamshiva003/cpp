// Demonstrate Multiple Inheritance
#include <iostream>
using namespace std;

class Student 
{
protected:
    string name;
    int rollno;
public:
    void getdata()
    {
        cout << "Enter the details of the student " << endl;
        cout << "Enter Name  : ";
        cin >> name;
        cout << "Enter Rollno: ";
        cin >> rollno;
    }
};

class Test 
{
protected:
    float m1, m2, m3;
public:
    void get()
    {
        cout << "Enter 3 subject marks: " << endl;
        cout << "M1: ";
        cin >> m1;
        cout << "M2: ";
        cin >> m2;
        cout << "M3: ";
        cin >> m3;
    }
};

class Result: public Student, public Test
{
protected:
    float total, avg;
public:
    void read()
    {
        getdata();
        get();
    }
    
    void display()
    {
        total = m1 + m2 + m3;
        avg = total / 3;

        cout << endl;
        cout << "The details of the student are: " << endl;
        cout << "Name   : " << name << endl;
        cout << "Rollno : " << rollno << endl;
        cout << "  Marks " << endl;
        cout << "M1     : " << m1 << endl;
        cout << "M2     : " << m2 << endl;
        cout << "M3     : " << m3 << endl;
        cout << "Total  : " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    Result r;

    r.read();
    r.display();

    return 0;
}
