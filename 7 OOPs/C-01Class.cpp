#include <iostream>
#include <string>

using namespace std;
class User
{
public: // Anyone Can access the properties of user class.
    // Properties.
    int id;
    string name;
    string password;
    string bio;
    // Methods.
    void deactivate()
    {
        cout << "Account Deactivated!" << endl;
    }
    void editBio(string newBio)
    {
        bio = newBio; // Update the bio with the new one.
    }
};
class Student
{

    // Properties.
    string name;

public:
    float cgpa;
    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n"; // Assuming CGPA is out of 10.
    }
};

int main()
{
    Student s1;                 // Create an object of the Student class.
    cout << sizeof(s1) << endl; // Print the size of the object.
                                // s1.name = "Vansh"; //This line will give an error because name is private.
    s1.cgpa = 9.5;              // Assign a value to the public property cgpa.
    cout << s1.cgpa << endl;    // Accessing public property cgpa.
    s1.getPercentage();         // Call the method to get percentage.
    User u1;                    // Object u1 is created in user class.
    u1.id = 123;
    u1.name = "Vansh Chaudhary";
    cout << u1.id << endl;
    cout << u1.name << endl;

    return 0;
}