#include <iostream>

using namespace std;
int factorial(int n)
{
    int fact = 1; // Initialize fact to 1.
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i; // Calculate factorial by multiplying each number from
    }
    return fact;
}
int binomialCoefficient(int n, int r)
{
    int value1 = factorial(n);               // Calculate n!
    int value2 = factorial(r);               // Calculate r!
    int value3 = factorial(n - r);           // Calculate (n-r)!
    int result = value1 / (value2 * value3); // Calculate nCr using the formula.
    return result;                           

}

int main()
{

    cout << binomialCoefficient(4, 2) << endl;

    return 0;
}