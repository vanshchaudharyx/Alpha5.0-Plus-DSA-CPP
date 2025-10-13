#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    int largest = a >= b ? a : b;
    cout << "Largest is" << largest << endl;
    // Odd even using ternary.
    int num;
    cout << "Enter Number:";
    cin >> num;
    bool isEven = num % 2 == 0 ? true : false;
    cout << isEven;

    return 0;
}