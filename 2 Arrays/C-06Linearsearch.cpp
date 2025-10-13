#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // Return -1 if the key is not found in the array.
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 10, 12};

    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array.
    int key = 10;                         // The element to search for.
    cout << linearsearch(arr, n, key);
    return 0;


    
}