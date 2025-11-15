#include <iostream>
#include <cstring> // for strlen function
using namespace std;

int main()
{
    char sentence[100];
    cout << "Write a sentence to test cin.getline(): ";
    cin.getline(sentence, 100, '*'); // input a string (up to 99 characters) including spaces.
    cout << "Your word was:" << sentence << endl;
    cout << "Your sentence length is: " << strlen(sentence) << endl; // prints the length of the string
    // Here third arguement is for breaking.
    return 0;
}