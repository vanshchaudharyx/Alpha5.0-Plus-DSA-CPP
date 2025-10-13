#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;                        // pointer to a.
    cout << *(&a) << "=" << *ptr << endl; // dereference operator.
    *ptr = 20;                            // change value of a using pointer.
    cout << *(&a) << "=" << *ptr << endl; // dereference operator.
    return 0;
} 