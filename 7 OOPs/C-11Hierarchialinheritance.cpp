#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eat" << endl;
    }
    void breathe()
    {
        cout << "Can breathe" << endl;
    }
};
class Bird : public Animal
{
public:
    void fly()
    {
        cout << "Can fly" << endl;
    }
};
class Fish : public Animal
{
public:
    void swim()
    {
        cout << "can swim" << endl;
    }
};
int main() {
    Fish f1;
    f1.swim();
    f1.breathe();
    Bird b1;
    b1.fly();
    b1.breathe();
    
    return 0;
}
  