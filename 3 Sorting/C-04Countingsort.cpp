#include <iostream>
#include <climits>
using namespace std;
void countingsort(int arr[], int n)
{
    int freq[100]={0}; // Frequency array to count occurrences of each element
    int minval = INT_MIN;
    int maxval = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    // Create a frequency array to count occurrences of each element
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    //
    for (int i = minval, j = 0; i <= maxval; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--; 
        }
    }
    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    countingsort(arr, n);

    return 0;
}