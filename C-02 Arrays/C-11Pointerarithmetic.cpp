#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a;
    cout << aptr << endl;
    aptr++;
    cout << aptr << endl;
    int b = 5;
    int *bptr = &b;
    cout << bptr << endl; // Ist value.
    bptr++;
    cout << bptr << endl; // 2nd value.
    bptr--;
    cout << bptr << endl; // 3rd value.
    // In above code Ist and 3rd value will be same because we are incrementing and decrementing the pointer.
    return 0;
}