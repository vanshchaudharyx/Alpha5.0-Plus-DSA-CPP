#include <iostream>
#include <cstring> // for strlen function
using namespace std;
void toUppercase(char word[], int length)
{
    for (int i = 0; i < length; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') // check if the character is already uppercase
        {
            continue; // skip to the next iteration if it is already uppercase
        }
        else
        {
            word[i] = ch - 'a' + 'A'; // convert to uppercase
            // Here ch-'a' gives the position of the character and then we add 'A' to get the uppercase character.
        }
    }
}
int main()
{
    char word[] = "ApPle";                      // string initialization
    toUppercase(word, strlen(word));            // function call to convert to uppercase.
    cout << "Uppercase word: " << word << endl; // print the converted   string
    return 0;
}
