#include <iostream>
#include <cstring>
using namespace std;
bool validpalindrome(char palindrome[], int length)
{
    int start = 0, end = length - 1;
    while (start < end)
    {
        if (palindrome[start] != palindrome[end])
        {
            cout << "Not a palindrome" << endl;
            return false;
        }
        start++;
        end--;
    }
    cout << "Valid palindrome" << endl;
    return true;
}

int main()
{
    char palindrome[] = "racecar";
    validpalindrome(palindrome, strlen(palindrome));
    cout << palindrome << endl;

    return 0;
}