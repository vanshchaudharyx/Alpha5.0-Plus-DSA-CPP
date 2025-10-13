#include <iostream>
using namespace std;
int main()
{
    float english, maths, science;

    cout << "Enter your english marks:";
    cin >> english;
    cout << "Enter your maths marks:";
    cin >> maths;
    cout << "Enter your science marks:";
    cin >> science;
    float average = (english + maths + science) / 3;
    cout << "Your average marks is:" << average << endl;

    return 0;
}