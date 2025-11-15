#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Vansh Chaudhary";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " "; // Output: V a n s h   C h a u d h a r y
    }
    cout << endl;
    // This is alternative way to iterate through a string using a range-based for loop
    for (char ch : str)
    {
        cout << ch << " "; // Output: V a n s h   C h a u d h a r y
    }
    return 0;
}