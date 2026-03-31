#include <iostream>
#include <queue>

using namespace std;
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int data)
    // Element of q1->q2. (Ist Step).
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data); //(IInd Step).
    // Element of q2->q1.(IIIrd Step).
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    // O(1)
    void pop()
    {
        q1.pop();
    }
    // O(1)

    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}