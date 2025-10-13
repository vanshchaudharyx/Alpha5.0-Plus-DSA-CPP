#include <iostream>
using namespace std;

int main()
{
    bool val = true;
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val << " ";
            val = !val; // Now val is false if value is true and if val is true then the value is false.
        }
        cout << endl;
    }

    return 0;
}