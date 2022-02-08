// 14: Sort elements using function templates
#include <iostream>
using namespace std;

template <class T>
class Sort
{
public:
    T a[20], temp;
    int n;

    void read();
    void exchange();
};

template <class T>
void Sort<T>::read()
{
    cout << "Enter the size of the Array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<n; i++)
        cin >> a[i];
}

template <class T>
void Sort<T>::exchange()
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Sorted Array is: " << endl;
    for(int i=0; i<n; i++)
        cout << a[i] << endl;
}

int main()
{
    cout << endl;
    cout << "--- Sorting Integer type Array elements ---" << endl;
    Sort<int> s1;
    s1.read();
    s1.exchange();

    cout << endl;
    cout << "--- Sorting Decimal type Array elements ---" << endl;
    Sort<float> s2;
    s2.read();
    s2.exchange();

    return 0;
}