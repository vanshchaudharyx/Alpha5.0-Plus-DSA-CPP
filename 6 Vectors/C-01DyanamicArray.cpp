#include <iostream>

using namespace std;

int main()
{

    int prr[100] = {1, 2, 3, 4, 5}; // this is static memory allocation.
    int size;
    cin >> size;
    int *arr = new int[size]; // Dynamic memory allocation for an array of size 'size'
    // arr[0]=>*(arr+0) .
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        x++;
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}