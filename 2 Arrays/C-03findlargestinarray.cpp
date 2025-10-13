#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 9, 87, 6, 5}; // Initialize all elements.
    int max = arr[0];              // Assume first element is the largest.
    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > max) // Compare with each element.
        {
            max = arr[i]; // Update max if current element is larger.
        }
    }
    cout << max;
    return 0;
}