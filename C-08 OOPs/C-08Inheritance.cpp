#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string color;
    void eat()
    {
        cout << "Eats" << endl;
    }
    void breathe()
    {
        cout << "Breathe" << endl;
    }
};
// This is derived class.
class Fish : public Animal // If we can use protected over public then code is
{
public:
    int fins;
    void swim()
    {
        // if we use protected then
        // we can call eat();
        cout << "Swim" << endl;
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.eat();
    f1.breathe();
    return 0;
}