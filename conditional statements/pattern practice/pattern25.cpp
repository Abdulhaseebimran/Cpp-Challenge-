#include <iostream>
using namespace std;

// DABANNG
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // part 1 number from 1 : n - row + 1;
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col = col + 1;
        }

        // part 2 print star * (row - 1) + 2 ;
         col = 1;
        while (col <= (row - 1) * 2)
        {
            cout << "* ";
            col = col + 1;
        }

        // part 3 : number form n - i + 1 to 1;
        col = n - row + 1;
        while (col >= 1)
        {
            cout << col << " ";
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}