#include <iostream>
using namespace std;
void dectobin(int decnum)
{
    int n = decnum;
    int power = 1; //
    int binnum = 0;
    while (n > 0)
    {
        int lastdigit = n % 2;
        lastdigit = lastdigit * power;
        binnum = binnum + lastdigit;
        power = power * 10;
        n = n / 2;
    }
    cout << binnum << endl;
}
int main()
{
    dectobin(5); // 100

    return 0;
}