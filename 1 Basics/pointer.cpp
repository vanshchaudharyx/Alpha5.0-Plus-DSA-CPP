#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptra = &a;                       // pointer to a
    cout << &a << "=" << ptra << endl;    // address of a.
    cout << sizeof(ptra) << endl;         // size of pointer
    int **ptr2 = &ptra;                   // This stores the adress od ptra.
    cout << &ptra << "=" << ptr2 << endl; // address of ptra.
    return 0;
}