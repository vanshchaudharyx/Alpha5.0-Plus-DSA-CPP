#include <iostream>

using namespace std;

int main()
{
    cout << sizeof(int) << endl;         // 4 bytes.
    cout << sizeof( short int) << endl; 
    cout << sizeof(long long int) << endl;    // 8 bytes.
    cout << sizeof(long double) << endl; // 8 bytes.
    return 0;
}