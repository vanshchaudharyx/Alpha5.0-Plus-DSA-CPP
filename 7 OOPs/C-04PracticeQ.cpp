#include <iostream>
#include <string>
using namespace std;
// Q- Create a user class with properties: id(private),username(public),&password(private).its id should be initialized in a parameterized constructor.It should have a getter and setter for a password.
class User
{
private:
    int id;
    string password;

public:
    string username;
    User(int id)
    {
        this->id = id; // This means that the id of the current object is being assigned the value of the id parameter passed to the constructor.
    } // Getter.
    string getpassword()
    {
        return password;
    }
    // Setter.
    void setpassword(string password)
    {
        this->password = password;
    }
};
int main()
{
    User user1(101); // Creating an object of the User class with id 101.
    user1.username = "Vansh";
    user1.setpassword("1234");
    cout << "username: " << user1.username << endl;
    cout << "password: " << user1.getpassword() << endl;

    return 0;
}