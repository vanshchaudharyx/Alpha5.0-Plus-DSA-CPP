#include <iostream>
#include <cstring> // for strlen function

using namespace std;
int main()
{
    char word[100];
    cout<<"Type your word:";
    cin >> word;                              // input a string (up to 99 characters)
    cout << "Your word is: " << word << endl; //
    cout << "Length of the word is: " << strlen(word) << endl;
    
    
    return 0;
}