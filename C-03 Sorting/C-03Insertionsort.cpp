#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i]; // Now the ith index position is empty.
        int prev = i - 1;

        // Shift elements of the sorted part to the right to make space for 'current'
        while (prev >= 0 && arr[prev] > current)
        {
            swap(arr[prev], arr[prev + 1]); // Shift element to the right
            prev--;
        }

        // Place the 'current' element in its correct position
        arr[prev + 1] = current; // Insert 'current' at the correct position
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    insertionsort(arr, n);
    return 0;
}