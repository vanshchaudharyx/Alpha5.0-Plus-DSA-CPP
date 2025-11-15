#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element of the array followed by a space.
    }
    cout << endl;
}

int main() 
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array.
    int copyArr[n];                    // Create a copy of the array to store the reversed elements.
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;   // Calculate the index of the element to copy from the original array.
        copyArr[i] = arr[j]; // Reverse the array by copying elements in reverse order.
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i]; // Copy the reversed elements back to the original array.
    } 

    printarr(arr, n);       
    return 0;
}