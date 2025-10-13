#include <iostream>
using namespace std;
void function(int arr[])
{
    arr[0] = 100; // Change the first element of the array to 100.
}
int main()
{
    int arr[5] = {3, 9, 87, 6, 5};
    cout << arr << endl; // Print the addr ess of the first element.

    cout << &arr[0] << endl;    // This adress is same as arr.
    cout << *(arr + 1) << endl; // Print the value of the second element.
    function(arr);              //  passing array name is equivalent to passing the pointer.
    cout << arr[0];             // Print the modified first element.

    return 0;
}