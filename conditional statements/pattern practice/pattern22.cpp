#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int num = n - row + 1;
        while (num)
        {
            cout << row;
            num = num - 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}