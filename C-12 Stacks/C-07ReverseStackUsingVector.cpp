#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void reverseStack(stack<int> &s)
{
    vector<int> vec;
    while (!s.empty())
    {
        vec.push_back(s.top());
        s.pop();
    }
    for (int i = 0; i < vec.size(); i++)
    {
        s.push(vec[i]);
    }
    return;
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}