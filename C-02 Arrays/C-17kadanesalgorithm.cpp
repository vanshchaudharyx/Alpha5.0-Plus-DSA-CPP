#include <iostream>
#include <climits> // This header is used for INT_MIN.
using namespace std;
void maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];        // Add the current element to the sum.
        maxSum = max(maxSum, sum); // Compare with the old value of maxSum.
        if (sum < 0)               // If sum becomes negative, reset it to 0.
        {
            sum = 0;
        }
    }
    cout << "Maximum Subarray Sum is: " << maxSum << endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum(arr, n);

    return 0;
}