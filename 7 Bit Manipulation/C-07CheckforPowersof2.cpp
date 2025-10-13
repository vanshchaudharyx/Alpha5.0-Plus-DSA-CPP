#include <iostream>

using namespace std;
bool isPowerOfTwo(int n)
{
    if ((n & (n - 1)) == 0)
    {
        // Check if n is a power of 2
        return true;
    } // n is a power of 2
    else
        return false;
}

int main()
{
    int n = 32;
    int m = 13;
    cout << isPowerOfTwo(n) << endl;
    cout << isPowerOfTwo(m); // 13 is not a power of 2.

    return 0;
}