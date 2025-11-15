#include <iostream>
using namespace std;
int main()
{
    cout << (10 / 3) << endl;
    cout << (10 / 3.0) << endl; // this is an implicit conversion. int to float
    cout << ('A' + 1) << endl;  // The answer is 65+1. Conversion char to int
    cout << ('a' + 1) << endl;  // The answer is 97+1. Conversion char to int
    // Explicit typecasting.
    float PI = 3.14;
    cout << (int)(PI) << endl;
    cout << (float)(10 / 3.0) << endl;
    cout << (char)('A' + 1) << endl;
    cout << ('A' + 23.3) << endl;
    return 0;
}