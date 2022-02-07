// Input roll number, name, marks of three students and display total and average.
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    float m1, m2, m3;
public:
    void getdata();
    void display();
};

void Student::getdata()
{
    cout<<endl;
    cout<<"---- Enter the details of the students ----"<<endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Rollno: ";
    cin >> rollno;
    cout << "Enter 3 subject marks: " << endl;
    cin >> m1 >> m2 >> m3;
}

void Student::display()
{
    float total, avg;

    total = m1 + m2 + m3;
    avg = total / 3;

    cout << endl;
    cout << "---- The details of the student are ---- " << endl;
    cout << "Name   : " << name << endl;
    cout << "Rollno : " << rollno << endl;
    cout << "   Marks " << endl;
    cout << "M1     : " << m1 << endl;
    cout << "M2     : " << m2 << endl;
    cout << "M3     : " << m3 << endl;
    cout << "Total  : " << total << endl;
    cout << "Average: " << avg << endl;
}

int main()
{
    int n;

    cout << "Enter the total number of students: ";
    cin >> n;

    Student s[n];

    for(int i=0; i<n; i++)
        s[i].getdata();
    
    for(int i=0; i<n; i++)
        s[i].display();

    return 0;
}