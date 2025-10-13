#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';
    int position = 'F' - ch;

    cout << int(ch) << endl;  // prints the ASCII value of 'A'
    cout << position << endl; // prints the difference between 'F' and 'A'
    return 0;
} 