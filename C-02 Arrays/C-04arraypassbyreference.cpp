#include <iostream>
using namespace std;
void func(int arr[])
{
    arr[2] = 10;
}
int main()
{

    int arr[5] = {1, 3, 6, 2, 4};
    cout << arr << endl; // Array name worked as pointer.
    cout << *arr << endl; //arr[0]   
    cout << arr[2] << endl;
    func(arr);
    cout << arr[2];
    return 0;
}