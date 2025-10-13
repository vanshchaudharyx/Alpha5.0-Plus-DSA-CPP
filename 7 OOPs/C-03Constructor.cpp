#include <iostream>

using namespace std;
class Car
{
    string name;
    string color;

public:
    Car()
    {
        cout << "Constructor witout parameter" << endl;
    }
    Car(string nameVal, string colorVal) // Parameterized constructor.
    {

        cout << "Constructor Called , object being created" << endl; // This is the default constructor.

        name = nameVal;   // Assign the value of name to the parameter nameVal.
        color = colorVal; // Assign the value of color to the parameter colorVal.
    }

    void start()
    {
        cout << "Car Started!" << endl;
    }
    void stop()
    {
        cout << "Car Stopped!" << endl;
    }
    // Getter
    string getName()
    {
        return name;
    }
};

int main()
{
    Car c1("Fortuner", "Pearl White"); // c1 is an object of the Car class.
    // Here we dont need to call the constructor explicitly, it will be called automatically when we create an object of the class.
    cout << "Car Name: " << c1.getName() << endl; // Accessing the name of the car using the getter method.
  
    return 0;
}