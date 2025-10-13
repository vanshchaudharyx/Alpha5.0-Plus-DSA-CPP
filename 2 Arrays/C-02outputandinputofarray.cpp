#include <iostream>

using namespace std;

int main()
{
    int marks[5];                        // Initialize all elements.
    int n = sizeof(marks) / sizeof(int); // Calculate the number of elements in the array.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element no" << i + 1 << ":";
        cin >> marks[i]; // Input elements into the array.
    }

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << ","; // output
    }
    return 0;
}