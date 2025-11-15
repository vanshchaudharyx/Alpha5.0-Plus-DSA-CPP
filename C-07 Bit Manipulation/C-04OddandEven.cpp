#include <iostream>

using namespace std;
void OddorEven(int n)
{
    if ((n & 1) == 0)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
}

int main()
{
    OddorEven(5); // 5 is odd.
    OddorEven(4); // 4 is even.

    return 0;
}