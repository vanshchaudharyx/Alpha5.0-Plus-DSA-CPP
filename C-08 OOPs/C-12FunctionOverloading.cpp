#include <iostream>
#include <string>
using namespace std;
class Print
{
public:
    int show(int x)
    {
        cout << "int :" << x << endl;
    }
    void show(string str)
    {
        cout << "String:" << str << endl;
    }
};

int main()
{ // Depending upon function parameter which function is called, that is function overloading.
    Print p1;
    p1.show(25);
    p1.show("Apna College");

    return 0;
}