#include <iostream>
using namespace std;
class parent
{
public:
    void show()
    {
        cout << "parent class show..\n";
    }
    // Virtual function ham un function ko bnate hai jinhe ham derived class ke andar redefined karne wale hai

    virtual void hello()
    {
        cout << "parent hello";
    } 
};
class child : public parent
{
public:
    void show()
    {
        cout << "child hello";
    }
    void hello()
    {
        cout << "child hello..";
    }
};

int main()
{
    child c1;
    parent *ptr;  // this pointer point the parent class object.
    ptr = &c1;    // Runtime binding, we bind our parent pointer to our child class.
    ptr->hello(); // Virtual function.

    return 0;
}