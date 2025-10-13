#include <iostream>

using namespace std;
// This solution is in O(n).
int power2(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power2(x, n - 1);
}
// This solution is in O(logn).

int power1(int x, int n)
{
    if (n == 0)
    { 
        return 1;
    }
    int halfPow = power1(x, n / 2);
    int halfPowSquare = halfPow * halfPow;
    if (n % 2 != 0)
    {
        // Odd
        return x * halfPowSquare;
    }
    // Even.
    return halfPowSquare;
}
int main()
{
    cout << power1(2, 10) << endl;
    cout << power2(2, 10);
    return 0;
}