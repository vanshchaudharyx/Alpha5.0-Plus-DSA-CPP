#include <iostream>
using namespace std;
int binsearch(int arr[], int n, int key)
{
    int start = 0; // Initialize the starting index of the array.
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2; // Calculate the middle index of the array.
        if (arr[mid] == key)         // Check if the middle element is equal to the key.
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // If the middle element is less than the key, search in the right half.
        }
        else
        {
            end = mid - 1; // If the middle element is greater than the key, search in the left half.
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << binsearch(arr, n, 10) << endl;

    return 0;
}