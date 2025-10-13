#include <iostream>
using namespace std;
// Function to print the elements of the array.
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
    int n = sizeof(arr) / sizeof(int);
    int start = 0;   // Initialize the starting index of the array.
    int end = n - 1; // Initialize the ending index of the array.
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; // Move the starting index forward.
        end--;   // Move the ending index backward.
    }
    printarr(arr, n); // Call the function.
    return 0;
} 