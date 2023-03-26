#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n " ;
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout<< "Value of sum is " << sum << endl;

    return 0;
}