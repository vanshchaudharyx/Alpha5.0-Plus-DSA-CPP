#include <iostream>

using namespace std;
class Student
{

    // Properties.
    string name;
    float cgpa;

public:
    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n"; // Assuming CGPA is out of 10.
    }
    // Setters.
    void setName(string nameVal)
    {
        name = nameVal; // Update the name with the new one.
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal; // Update the cgpa with the new one.
    }
    // Getters, They return the value of the private properties.
    string getName()
    {
        return name; // Return the name.
    }
    float getCgpa()
    {
        return cgpa; // Return the cgpa.
    }
};

int main()
{
    Student s1;                    // Create an object of the Student class.
    s1.setName("Vansh Chaudhary"); // Set the name using the setter method.
    s1.setCgpa(9.5);               // Set the cgpa using the setter method.
    cout << s1.getName() << endl;  // Accessing name using the getter method.
    cout << s1.getCgpa() << endl;  // Accessing cgpa using the getter method.
    return 0;
}