#include <iostream>
#include <string>

using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eats" << endl;
    }
    void breathe()
    {
        cout << "Breathes" << endl;
    }
};
class Mammal : public Animal
{
public:
    string bloodtype;
    Mammal()
    {
        bloodtype = "Warm Blooded";
    }
};
class Dog : public Mammal
{
public:
    void tailwag()
    {
        cout << "A dog wag its tail." << endl;
    }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout << d1.bloodtype << endl;
    Mammal m1;
    m1.breathe();
 

    return 0;
}