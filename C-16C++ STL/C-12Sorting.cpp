#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // if we want to sort the array then->
    // sort(start, end)-- > sort(arr, arr + n) //ending index in not included.
    int arr[5] = {4, 1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sorting Array:" << endl;

    sort(arr, arr + n);
    for (auto it : arr)
    {
        cout << it;
    }
    cout << endl;
    // For vector
    vector<int> v = {4, 1, 2, 5, 3};
    sort(v.begin(), v.end());
    cout << "Sorting Vector:" << endl;
    for (auto it : v)
    {
        cout << it;
    }
    // If we want to sort in descending order;
    // sort(arr,arr+n,greater<int>());//This greater<int>() is the comparator.

    
    return 0;
}