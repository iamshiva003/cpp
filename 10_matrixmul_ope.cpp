#include <iostream>
#include <iomanip>
using namespace std;

class MatrixMultiply 
{
private:
    int row, col;
    int mat[10][10];
public:
    void getdata()
    {
        cout<<"Enter row and column of the matrix: "<<endl;
        cin>>row>>col;

        cout<<"Enter the elements of the matrix: "<<endl;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin >> mat[i][j];

        cout << endl;
    }

    void display()
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout << setw(3) << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    friend void operator *(MatrixMultiply m1, MatrixMultiply m2)
    {
        int a[10][10];

        if(m1.row != m2.col)
        {
            cout << "Multiplication is not possible" << endl;
            return;
        }
        for(int i=0; i<m1.row; i++)
        {
            for(int j=0; j<m2.col; j++)
            {
                a[i][j] = 0;
                for(int k=0; k<m2.col; k++)
                {
                    a[i][j] += (m1.mat[i][k] * m2.mat[k][j]);
                }
            }
        }
        cout << "The Multiplication of 2 matrix is: " << endl;
        for(int i=0; i<m1.row; i++)
        {
            for(int j=0; j<m2.col; j++)
            {
                cout << setw(3) << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    MatrixMultiply m1, m2;

    cout << "Enter the Matrix 1: " << endl;
    m1.getdata();

    cout << "Enter the Matrix 2: " << endl;
    m2.getdata();

    cout << "The elements of the matrix 1 are: " << endl;
    m1.display();

    cout << "The elements of the matrix 2 are: " << endl;
    m2.display();

    operator*(m1, m2);

    return 0;
}