#include <iostream>

using namespace std;

int main() {
 int arr[20] = {1, 2, 3, 4, 5};
 int *ptr = arr; 
 int *ptr2 = arr + 3; // Pointer to the 4th element of the array.
 cout << *ptr2 << endl; // This will print the value of the 4th element.
   cout << ptr2 - ptr << endl; // This will print the number of elements between the two pointers.
 return 0;
}