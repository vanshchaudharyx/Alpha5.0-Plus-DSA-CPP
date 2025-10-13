#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter your number:";
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
        cout << "You entered" << n << endl;
    } while (true); // Here true means always true(Infinite loop).
    return 0;
}