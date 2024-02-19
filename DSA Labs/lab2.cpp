// program to find element in array linear search

#include <iostream>
using namespace std;

int main (){
    int arr[20], n, i, num, flag=0;
    cout << "How many elements would you like to enter? ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the element you want to search for : ";
    cin >> num;
    for (i = 0; i < n; i++){
        if (arr[i] == num){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "Element found at position " << i+1;
    } else{
        cout << "Element not found";
    }
    return 0;
}