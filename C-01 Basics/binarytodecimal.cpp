#include <iostream>

using namespace std;
void binToDec(int binNum)
{
    int n = binNum;
    int decNum = 0;
    int power = 1; // 2^0=1 2^1=2 2^2=4.......
    while (n > 0)
    {
        int lastDigit = n % 10;
        lastDigit = lastDigit * power;
        decNum = decNum + lastDigit;
        power = power * 2;
        n = n / 10;
    }
    cout << decNum << endl;
}

int main()
{
    binToDec(101); // 5
    
    return 0;
}