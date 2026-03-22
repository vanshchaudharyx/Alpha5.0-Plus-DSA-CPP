#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isDuplicate(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')') // Non-Closing
        {
            s.push(str[i]);
        }
        else
        {
            if (!s.empty() && s.top() == '(')
            {
                return true;
            }
            while (s.top() != '(')
            {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}
int main()
{
    string str1 = "((a+b))";       // Invalid string
    string str2 = "((a+b)+(c+d))"; // Valid string
    cout << isDuplicate(str1) << endl;
    cout << isDuplicate(str2);

    return 0;
}