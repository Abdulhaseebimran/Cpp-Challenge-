// selections sort
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i, j, min, temp;
    // getting input from user
    for (i = 0; i < 5; i++)
    {
        cout << "Enter values: ";
        cin >> arr[i];
    }
    // displaying elements
    cout << "The original values in array:\n";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";
    // sorting array
    for (i = 0; i < 4; i++) // start of outer loop
    {
        min = i;
        for (j = i + 1; j < 5; j++) // start of inner loop
        {
            if (arr[j] < arr[min])
                min = j;
        } // end of inner loop
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    } // end of outer loop
    cout << "\nThe sorted array is:\n";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
