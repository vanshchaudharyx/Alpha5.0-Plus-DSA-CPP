#include <iostream>

using namespace std;

int main()
{
  int marks[50];                     // Declaration of an array of size 50.
  cout << marks[0] << endl;          // Accessing the first element of the array.
  int arr[5] = {1, 2, 3, 4, 5};      // Declaration and initialization of an array.
  cout << arr[2] << endl;            // Accessing the first element of the array.
  cout << sizeof(arr) / sizeof(int); // Length of array

  return 0;
}