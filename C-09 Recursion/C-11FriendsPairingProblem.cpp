#include <iostream>
#include <string>
using namespace std;
int friendspairing(int n)
{
    // Base case.
    if (n == 1 || n == 2)
    {
        return n;
    }
    // Single.
    int ans1 = friendspairing(n - 1);
    // Pair.
    int ans2 = ((n - 1) * friendspairing(n - 2));
    return ans1 + ans2;
}

int main()
{
    cout << friendspairing(4) << endl;

    return 0;
}