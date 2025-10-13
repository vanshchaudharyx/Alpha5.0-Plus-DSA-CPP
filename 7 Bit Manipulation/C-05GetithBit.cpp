#include <iostream>

using namespace std;
int getithBit(int num, int i)
{
    int bitmask = 1 << i; // Create a mask with 1 at the ith position
    if ((num & bitmask)==0) // Check if the ith bit is set
    {
        return 0; // ith bit is not set
    }
    else
    {
        return 1; // ith bit is set
    }
}

int main()
{
    int n = 6;                       // 0101 in binary
    cout << getithBit(6,2) << endl; // Check if the 2nd bit is set (should return 1)
    return 0;
}