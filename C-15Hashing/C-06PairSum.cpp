#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{ // BruteForce Approach......
    // int arr[7] = {1, 2, 7, 11, 15, 5, 9};
    // int targetSum = 3;
    // bool found = false;
    // for (int i = 0; i < 6; i++)
    // {
    //     int nextTarget = targetSum - arr[i];
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (arr[j] == nextTarget)
    //         {
    //             cout << "Indices:" << i << "," << j << endl;
    //             found = true;
    //             break;
    //         }
    //             }
    // }

    // Optimized approach......
    int arr[7] = {1, 2, 7, 11, 15, 5, 9};
    unordered_map<int, int> m;
    int target = 9;
    for (int i = 0; i < 7; i++)
    {
        int complement = target - arr[i];
        if (m.count(complement))
        {
            cout << " Indices : " << m[complement] << "," << i << endl;
            break;
        }
        m[arr[i]] = i;
    }
    return 0;
}
