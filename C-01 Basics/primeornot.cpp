#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    bool isprime = true;
    for (int x = 2; x <= n - 1; x++)
    {
        if (n % x == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime==true)
    {
        cout  << "Number is prime"<< endl;
    }
    else
    {
        cout << "Number is NOT a prime"<<endl;
    }
    return 0;
}