#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter operator:";
    cin >> op;
    cout << "Enter b:";
    cin >> b;

    // Calculator
    if (op == '+')
    {
        cout << "a+b=" << (a + b) << endl;
    }
    if (op == '-')
    {
        cout << "a-b=" << (a - b) << endl;
    }
    if (op == '*')
    {
        cout << "a*b=" << (a * b) << endl;
    }
    if (op == '/')
    {
        cout << "a/b=" << (a / b) << endl;
    }

    return 0;
}