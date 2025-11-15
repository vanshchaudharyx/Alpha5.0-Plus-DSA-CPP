#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSubsets(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << "" << endl;
        return;
    }
    char ch = str[0];
    // Yes Choice.
    printSubsets(str.substr(1, str.size() - 1), subset + ch);
    // No Choice.
    printSubsets(str.substr(1, str.size() - 1), subset);
}
int main()
{
    string str = "abc";
    string subset = "";
    printSubsets(str, subset);
    return 0;
}