#include<iostream>
using namespace std;

int main()
{
    int array[100], position, c, n;

    cout << "Enter the number of elements of the array: ";
    cin >> n;

    cout << "\nInput the array elements: ";
    for (c = 0; c < n; c++)
        cin >> array[c];

    cout << "\nEnter the element to insert: ";
    cin >> position;

    if (position > n)
        cout << "\nInsertion not possible.\n";
    else
    {
        for (c = n; c > position; c--)
            array[c] = array[c - 1];

        array[position] = position;

        cout << "\nArray after insertion: ";
        for (c = 0; c < n + 1; c++)
            cout << array[c] << " ";
    }

    cout << endl;
    return 0;
}
