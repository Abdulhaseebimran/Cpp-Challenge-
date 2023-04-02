#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int a = 0;
    int b = 1;
    
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int NextNumber = a + b;
        cout << NextNumber << " ";

        a = b;
        b = NextNumber;
    }
    return 0;
}