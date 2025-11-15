#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 10; i++)
    {

        if (i == 3)
        {
            continue; // Here continue used for skip a condition.
        }
        cout << i << endl;
    }

    return 0;
}