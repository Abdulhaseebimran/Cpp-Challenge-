#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter value";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum = sum + 1;
        i = i + 2;
    }

    cout << "The value of n is " << sum << endl;
    return 0;    
}