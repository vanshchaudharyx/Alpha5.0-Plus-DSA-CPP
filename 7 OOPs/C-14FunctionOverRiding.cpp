#include <iostream>

using namespace std;
// Overriding me inheritence hoti hai & parent class and child class me same function hota hai.
// Overloading me same class me dono functions ka name same hota hai.
class parent
{
public:
    void show()
    {
        cout << "parent class show..\n";
    }
};
class child : public parent
{
public:
    void show()
    {
        cout << "child class show..\n";
    }
};

int main()
{
    child child1;
    child1.show();

    return 0;
}