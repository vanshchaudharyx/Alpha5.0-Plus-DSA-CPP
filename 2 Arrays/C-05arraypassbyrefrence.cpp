#include <iostream>

using namespace std;
void func(int arr[])
{
    arr[0] = 1000; // change first element of array
}
void func2(int *ptr)
{
    ptr[0] = 1000; // change first element of array
}
int main()
{
    int a = 5;
    int *ptr = &a;       // pointer to a
    cout << ptr << endl; // address of a
    int arr[5] = {1, 2, 3, 4, 5};
    func(arr); // This is the pointer to the first element of the array.
    // Passing an array to a function is equivalent to passing a pointer to the first element of the array.
    cout << arr[0] << endl; // 1000
    func2(arr);             // This is the pointer to the first element of the array.
    cout << arr[0] << endl; // 1000
    return 0;
}