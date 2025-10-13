#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // Input a string from the user.
                         // Here the same problem exist as char array string input break on space.
                         // So we can use getline function to take input with spaces.
    cout << str << endl; // Output the string.
    // We can also print specif indices value.
    cout << str[0] << endl; // Output: First character of the string.
    cout << str[1] << endl; // Output: Second character of the string.
    cout << str[2] << endl; // Output: Third character of the string.

    return 0;
}