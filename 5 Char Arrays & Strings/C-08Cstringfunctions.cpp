#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[100];
    char str2[100] = "Apna college";
    // str1 = "Hello World!"; This will not work as str1 is an array and cannot be assigned a string directly.
    strcpy(str1, "Hello World");      // Use strcpy to copy a string into the array.
    cout << "str1: " << str1 << endl; // Output: Hello World!
    strcpy(str1, str2);               // Copy str2 into str1.
    cout << str1 << endl;             // Output: Apna college
                                      // Now the below code is in strcar functions.
    char str3[] = "abc";
    char str4[] = "xyz";
    strcat(str3, str4);   // Concatenate str4 to str3.
    cout << str3 << endl; // Output: abcxyz
    // Now the below code is in strcmp functions.
    char str5[] = "abc";
    char str6[] = "xyz";
    int result = strcmp(str5, str6); // Compare str5 and str6.
    cout << result;
    return 0;
}