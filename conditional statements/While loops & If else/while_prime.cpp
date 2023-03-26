#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for prime number starting for i is 2;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }

        i = i + 1;
    }
    return 0;
}