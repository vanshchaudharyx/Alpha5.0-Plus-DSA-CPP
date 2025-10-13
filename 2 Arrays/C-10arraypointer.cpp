#include <iostream>

using namespace std;

int main() {
   int x=10;
    int *p=&x; // Pointer p points to the address of x
    int y=20;
    p=&y; // Pointer p now points to the address of y
    cout <<*p<< endl; 
    // But this scenario is not possible with array pointers.
    int arr[5];
    cout << arr << endl; // This will print the address of the first element of the array
     int y=25;
   
    //  arr=&y; // This will give an error because arr is a fixed array and cannot be reassigned to point to another address

    return 0;
}