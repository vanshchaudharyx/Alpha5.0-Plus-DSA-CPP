#include <iostream>

using namespace std;
void sayHello()
{
    cout << "Hello World" << endl; // This function prints "Hello World".
}
void assitant()
{
    sayHello();                     // Then the assitant function call sayHello function.
    cout << "Work is done" << endl; // After returning from sayHello function, this line will be executed.
}

int main()
{
    assitant(); // First the main function call assitant function.

    return 0;
}