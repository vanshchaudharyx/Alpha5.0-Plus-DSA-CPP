#include <iostream>
#include <string>

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
    car(car &original)
    {
        cout << "Original Mileage" << endl;
        name = original.name;
        color = original.color;
        mileage =original.mileage;
       // mileage = new int;
       // *mileage = *original.mileage.
       // If we discomment this above code the deep copy is made over swallow copy.
    }
};

int main()
{
    car c1("Fortuner", "White");
    car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    *c2.mileage = 10;
    cout << *c1.mileage << endl; // This verifies that c1 and c2 points the same memory location in heap;
    return 0; 
}