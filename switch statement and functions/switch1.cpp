#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    char ch = 'A';

    cout << endl;
    switch (ch)
    {
    case 1:
        cout << "First number" << endl;
        break;

    case 2:
        cout << "Seconds number" << endl;
        break;

    case 'A':
        switch (num)
        {
            case 1: cout << "Value of num is " << num << endl;
            // cout << "character case" << endl;
            break;
        }
        break;
    default:
        cout << "This is a default case" << endl;
        break;
    }
}