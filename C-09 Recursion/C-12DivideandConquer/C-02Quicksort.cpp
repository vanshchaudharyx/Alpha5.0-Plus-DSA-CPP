#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}
void quicksort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int pivotIdx = partition(arr, si, ei); // This function return pivot idx & stores element less than pivot in left half and element greater than pivot in right half.
    quicksort(arr, si, pivotIdx - 1);      // Left half.
    quicksort(arr, pivotIdx + 1, ei);      // Right half.
    printf("Vansh Chaudhary");
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    quicksort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}