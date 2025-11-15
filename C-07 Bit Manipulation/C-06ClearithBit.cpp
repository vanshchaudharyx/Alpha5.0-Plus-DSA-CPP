#include <iostream>

using namespace std;
int ClearithBit(int n, int i)
{
    int bitmask = ~(1 << i); // Create a mask with 1 at the ith position
   return n & bitmask; 
}

int main()
{

    cout << ClearithBit(6, 1) << endl;
    return 0;
}