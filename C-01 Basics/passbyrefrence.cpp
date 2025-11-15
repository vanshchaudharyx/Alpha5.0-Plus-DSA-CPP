#include <iostream>

using namespace std;
/// Pass by reference.

void changea(int *ptr)

{
    *ptr = 20;            // change value of a using pointer.
    cout << *ptr << endl; // dereference operator.
}

int main()
{
    int a = 10;
    changea(&a);       // call function changea with address of a.
    cout << a << endl; // print value of a.
    // Pass by reference.

    return 0;
}