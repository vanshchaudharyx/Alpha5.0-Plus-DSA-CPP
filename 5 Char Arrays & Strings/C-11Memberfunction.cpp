#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Vansh Chaudhary";
    cout << str.length() << endl;
    cout << str[3] << endl;    // Output: s
    cout << str.at(3) << endl; // Output: s
    cout << str.substr(0, 5);  // Output: Vansh
    cout << str.find("Vansh"); // We also provide a limit to the search

    return 0;
} 