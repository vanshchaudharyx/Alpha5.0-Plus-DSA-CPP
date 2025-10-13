#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i  = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // We can also print descending order by changing the sign here.
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) // We can also make this a function to print the array.

    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    return 0;
}