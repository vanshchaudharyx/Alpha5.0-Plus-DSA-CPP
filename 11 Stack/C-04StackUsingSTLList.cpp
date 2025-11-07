#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;
// Stack in STL.
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    // If we used Stack from STL the there is empty function.
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}