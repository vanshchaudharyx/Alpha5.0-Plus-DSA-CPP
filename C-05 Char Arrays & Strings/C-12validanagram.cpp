#include <iostream>j
#include <string>

using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "Not Valid Anagram" << endl;
        return false;
    }

    int count[26] = {0}; // Assuming only lowercase letters a-z.

    // Count characters in str1
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++; // Increment count for str1 character.
    }

    // Check characters in str2
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if (count[idx] == 0) // If count is already 0, str2 has an extra character.
        {
            cout << "Not Valid Anagram" << endl;
            return false;
        }
        count[idx]--; // Decrement count for str2 character.
    }

    // If all checks pass, the strings are anagrams.
    cout << "Valid Anagram" << endl;
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}