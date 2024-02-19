// program to perfrom matrix multiplications

#include <iostream>
using namespace std;

int main()
{
    int mat1[3][2] = {{5, 6}, {1, 2}, {7, 8}};
    int mat2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Matrix A" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Matrix B" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    int sum;
    cout << "Matrix Multiplication" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
            }
            cout << sum << "\t";
        }
        cout << endl;
    }
    return 0;
}