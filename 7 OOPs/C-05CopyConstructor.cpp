#include <iostream>
#include <string>

using namespace std;
class car
{
public:
    string name;
    string color;
    car(string name, string color) // Copy Constructor.
    {
        this->name = name;
        this->color = color;
    }
    // After creating it our custom copy constructor is called.
    car(car &original) // Custom Copy Constructor.
    {
        cout << "Copying original to new" << endl;
        name = original.name;
        color = original.color;
    }
};
int main()
{
    car c1("Fortuner", "Pearl White");
    car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    return 0;
}