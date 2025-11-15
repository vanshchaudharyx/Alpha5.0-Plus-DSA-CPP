#include <iostream>
using namespace std;
void fastExpo(int x, int n)
{ int ans=1;
    while (n > 0)
    {
        int lastbit = n & 1; // Get the last bit of n.
        if (lastbit==1) // If the last bit is 1, multiply ans by x.
        {
            ans = ans * x; // Multiply ans by x.
        }
        x = x * x; // Square x for the next bit.
        n = n >> 1; // Right shift n to check the next bit.
}

       
    
    cout << ans << endl; // Print the result.
}

int main()
{
    fastExpo(2, 5); // 2^5 = 32
  
    return 0;
}