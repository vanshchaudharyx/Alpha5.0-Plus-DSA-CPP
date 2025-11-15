#include <iostream>

using namespace std;
void printarr(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << *(arr + i) << " ";
  }
  cout << endl;
}
int main()
{
  int a = 5;
  int *aptr = &a;
  cout << aptr << endl;
  aptr = aptr + 3;            // Incrementing the pointer by 3 times the size of int (assuming int size is 4 bytes, it will add 12 to the address)
  cout << (aptr - 3) << endl; // This will print the address of the 4th element of the array (assuming int size is 4 bytes, it will add 12 to the address)
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  printarr(arr, n); // Print the array using pointer arithmetic

  return 0;
}