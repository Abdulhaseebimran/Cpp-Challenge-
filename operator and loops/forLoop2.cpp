#include <iostream>
using namespace std;

int main()
{
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && b >= 2; a--, b++, --c)
    {
        cout << a << " " << b << " " << c << " " << endl;
    }
    return 0;
}