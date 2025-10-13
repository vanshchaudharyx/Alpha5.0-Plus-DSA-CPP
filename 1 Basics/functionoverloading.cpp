#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << (a + b) << endl;
    return (a + b); // Return the sum of a and b.
}
double sum(double a, double b) // This is an example of function overloading. and that overloading is based on data type.

{
    cout << (a + b) << endl;
    return (a + b); // Return the sum of a and b
}

int sum(int a, int b, int c) // This overloading is based on number of parameters.
{
    cout << (a + b + c) << endl;
    return (a + b + c); // Return the sum of a,b and c.}
}
int main()
{
    sum(2, 3);     // Call the first sum function with integer arguments.
    sum(2.5, 3.5); // Call the second sum function with double arguments.
    sum(2, 3, 4);  // Call the third sum function with three integer arguments.

    return 0;
}