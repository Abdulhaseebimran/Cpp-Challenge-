#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the value of c : " << endl;
    cin >> c;
    if (c >= 'a' && c <= 'z')   
    {
        cout << "This is lower case";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "This is upper case";
    }
    else if (c >= 0 && c <= 9)
    {
        cout << "This is number";
    }
    return 0;
}