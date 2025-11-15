#include <iostream>
using namespace std;
void func(int a)
{                      // pass by value
    a = 20;            // change value of a.
    cout << a << endl; // print value of a.
}
int main()
{
    int a = 10;        // variable a
    func(a);         // call function func with a.
    cout << a << endl; // print value of a.

    return 0;
}