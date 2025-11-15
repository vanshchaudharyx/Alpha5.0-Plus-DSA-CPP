#include <iostream>
using namespace std;
void changeA(int &a)
{
    a = 20;            // change value of a using reference.
    cout << a << endl; // dereference operator.
}

int main()
{
    int a = 10;
    int &b = a; // Any changes made to the reference affect the original variable.
    cout << &a << endl;
    cout << &b << endl;
    changeA(a);
    cout << a << endl; // print value of a.

    return 0;
}