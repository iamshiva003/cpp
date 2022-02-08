// 12. Implement operations on stack.
#include <iostream>
using namespace std;

class Stack
{
private:
    int top, s[20], size;

public:
    Stack(int n)
    {
        size = n;
        top = -1;
        s[n];
    }

    void push()
    {
        int item;
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        cout << "Enter the item: ";
        cin >> item;
        s[++top] = item;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << "The item deleted: " << s[top] << endl;
        top--;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "The elements in the stack are: " << endl;
        for (int i=top; i>=0; i--)
            cout << s[i] << endl;
        cout << endl;
    }
};

int main()
{
    int n, choice;

    cout << "Enter the size of the stack: ";
    cin >> n;

    Stack s(n);

    cout << "---- Stack Operations ----" << endl;
    while (true)
    {
        cout<<endl;
        cout << "1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:s.push();    break;
        case 2:s.pop();     break;
        case 3:s.display(); break;
        case 4:exit(0);
        default: cout << "Invalid Choice!" << endl;
        }
    }
    return 0;
}