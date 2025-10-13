#include <iostream>
#include <climits> // This header is used for INT_MIN.
using namespace std;
void maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
                sum = sum + arr[i];
            }
            cout << sum << ",";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
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