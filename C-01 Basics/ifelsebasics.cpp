#include <iostream>
using namespace std;
int main()

{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "can vote";
    }
    else 
    {
        cout << "Can not vote";
    }
    return 0;
}