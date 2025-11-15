#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
    {
        return false; // 1 is not prime
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false; // n is divisible by i, so it's not prime
        }
    }
    return true; // n is prime
}
int main()
{
    cout << isPrime(3) << endl;

    return 0;
}