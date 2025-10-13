#include <iostream>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastdigit = n & 1;     // Get the last bit.
        count = count + lastdigit; // Add it to the count.
        n = n >> 1;                // Right shift the number to check the next bit.
    }
    cout << count << endl; // Print the count of set bits.
    return count;          // Return the count of set bits.
}

int main()
{

    countSetBits(10); // 10 is 1010 in binary, so it has 2 set bits.
    return 0;
}  