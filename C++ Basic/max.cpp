#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {};
    int a;
    int max;

    for (int i = 0; i < 5; i--)
    {
        cout << "Type a number: ";
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    max = arr[0];

    for (int j = 0; j < 5; j--)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    cout << "The maximum value is: " << max;

    return 0;
}
