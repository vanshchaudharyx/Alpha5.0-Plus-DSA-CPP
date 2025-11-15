#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    cout<<arr[0]<<endl; // prints 'a'
    cout<<arr[1]<<endl; // prints 'b'
    cout<<arr<<endl; // prints 'abcde' (the whole array as a string)
    return 0;
}