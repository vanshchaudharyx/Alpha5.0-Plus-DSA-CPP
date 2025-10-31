#include <iostream>
#include <vector>
using namespace std;
// Implement Stack using vector.
template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
        }
        vec.pop_back();
    }
    T top()
    {
        // if (isEmpty())
        // {
        //     cout << "Stack is empty.\n";
        //     return -1;
        // }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    Stack<char> s1;
    s1.push('h');
    s1.push('s');
    s1.push('n');
    s1.push('a');
    s1.push('V');
    while (!s1.isEmpty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    return 0;
}