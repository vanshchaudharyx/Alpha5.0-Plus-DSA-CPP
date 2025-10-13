#include <iostream>

using namespace std;
// Recursive function
void func()
{
    cout << "function call..work\n";
    func();
}

int main()
{
    func();
    return 0;
}