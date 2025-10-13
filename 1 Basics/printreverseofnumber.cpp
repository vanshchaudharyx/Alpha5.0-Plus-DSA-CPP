#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        result = result * 10 + lastdigit;
        n = n / 10;
    }
    cout << "Reverse=" << result << endl;

    return 0;
}