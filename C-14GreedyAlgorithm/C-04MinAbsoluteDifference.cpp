#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A = {4, 1, 8, 7};
    vector<int> B = {2, 3, 6, 5};
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int absDifference = 0;
    for (int i = 0; i < A.size(); i++)
    {
        absDifference = abs(absDifference + A[i] - B[i]);
    }
    cout << "Minimum Absolute Difference:" << absDifference << endl;
    return 0;
}