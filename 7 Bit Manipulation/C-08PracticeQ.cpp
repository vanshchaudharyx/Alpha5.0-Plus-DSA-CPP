#include <iostream>
using namespace std;
void updateithBit(int num, int i, int value)
{
    num = num & ~(1 << i);    // Clear the ith bit.
    num = num | (value << i); // Set the ith bit to value.
    cout << num << endl;      // Print the updated number.
}
int clearlastiBits(int n, int i)
{
    int bitmask = (~0) << i; // Create a mask with 0s in the last i bits
    return n & bitmask;      // Clear the last i bits of n
}

int main()
{
    updateithBit(7, 2, 0); // 7 is 0111 in binary, after clearing the 1st bit it becomes 0110 which is 6
    updateithBit(7, 3, 1);
    cout << clearlastiBits(15, 2) << endl; // 15 is 1111 in binary, after clearing the last 2 bits it becomes 1100 which is 12
    return 0;
}