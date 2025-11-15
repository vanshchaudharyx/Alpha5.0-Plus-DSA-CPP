#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        { // Increase stars by 2 in each line.
            cout << "*";
        }
        cout << endl;
    }
    // for the lower half of the diamond pattern
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        { // decrease stars by 2 in each line.
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
