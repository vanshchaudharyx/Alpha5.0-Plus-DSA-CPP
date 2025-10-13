#include <iostream>

using namespace std;
class car
{
public:
    string name;
    string color;
    int *mileage;
    car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int; // Dyanamic Allocation.
        *mileage = 12;
    }
    ~car()
    {
        cout << "Deleting object" << endl; 
        if (mileage != NULL)
        {
            delete mileage; // First the pointing memory will be deleted.
            mileage = NULL; // And then pointer is deleted.
        }
    }
};

int main()
{
    car c1("Fortuner", "Pearl White");
    cout << c1.name << endl;
    cout << c1.color << endl;
    return 0;
}