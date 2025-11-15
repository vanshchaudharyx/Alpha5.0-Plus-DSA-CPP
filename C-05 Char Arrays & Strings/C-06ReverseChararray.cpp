#include <iostream>
#include <cstring> // for strlen function
using namespace std;
void reverse(char word[], int length)
{
    int start = 0, end = length - 1; // start and end index
    while (start < end)
    {
        swap(word[start], word[end]); // swap the characters at start and end index
        start++;                      // increment start index
        end--;
    }
}

int main()
{
    char word[] = "code";                      // string initialization
    reverse(word, strlen(word));               // function call to reverse the string.
    cout << "Reversed word: " << word << endl; // print the reversed string
    return 0;
}