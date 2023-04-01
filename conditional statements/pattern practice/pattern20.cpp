#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int row = 1;
    int stars = n;

    while (row <= n)
    {
        int col = 1;
        while (col <= stars)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
        stars--;
    }
    return 0;
}
