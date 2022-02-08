#include <iostream>
#include <iomanip>
using namespace std;

class MatrixAdd
{
private:
    int row, col;
    int mat[10][10];
public:
    void getdata()
    {
        cout << "Enter the row and column of the matrix: " << endl;
        cin >> row >> col;

        cout << "Enter the elements of the matrix: " << endl;
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

    void operator +(MatrixAdd m)
    {
        if((row != m.row) || (col != m.col))
        {
            cout << "Addition is not possible" << endl;
            return;
        }

        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++) 
                mat[i][j] += m.mat[i][j];

        cout << endl;
        cout << "The Addition of the matrix is: " << endl;
        display();
    }
};

int main()
{
    MatrixAdd m1, m2;

    cout << "Enter the Matrix 1: " << endl;
    m1.getdata();

    cout << "Enter the Matrix 2: " << endl;
    m2.getdata();

    cout << "The elements of the matrix 1 are: " << endl;
    m1.display();

    cout << "The elements of the matrix 2 are: " << endl;
    m2.display();

    m1 + m2;

    return 0;
}