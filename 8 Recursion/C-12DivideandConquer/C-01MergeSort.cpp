#include <iostream>
#include <vector>
using namespace std;
// O(n)
void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei) // Compare both halves.
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= ei)
    {
        temp.push_back(arr[j]);
        j++;
    }
    //     vector-> original array.
    for (int index = si, x = 0; index <= ei; index++)
    {
        arr[index] = temp[x++];
    }
}
//    O(logn)
void mergesort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(arr, si, mid);     // Left half.
    mergesort(arr, mid + 1, ei); // Right half.
    merge(arr, si, mid, ei);     // Merge both halves.
}
void printarray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    mergesort(arr, 0, n - 1);
    printarray(arr, n - 1);
    return 0;
}