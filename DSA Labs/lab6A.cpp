// program to perform matrix additions

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter rows and columns of matrix: ";
    cin >> m >> n;
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n];
    cout << "\nEnter elements of matrix 1: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cin >> mat1[i][j];
    }
    cout << "\nEnter elements of matrix 2: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> mat2[i][j];
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "\nAddition of Matrix: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }
    return 0;
}