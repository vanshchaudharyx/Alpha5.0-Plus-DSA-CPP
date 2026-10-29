#include <iostream>
#include <stack> //LIFO data structure.
using namespace std;
int main()
{
    stack<pair<int, int>> s; // If we want to store pairs in stack.
    // Functions of stack
    // push,emplace,top,pop,size,empty,swap
    s.push({2, 3});
    s.emplace(4, 5);
    cout << s.top().first;
    cout << s.top().second;
    // cout << s.size();

    while (!s.empty())
    {
        cout << "(" << s.top().first << "," << s.top().second << ")";
        s.pop();
    }

    // Swap function-- Swaps the value of one stack with another.

    cout << "Swap Function" << endl;
    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s2.swap(s1); // All elements of s1 is copied in s2 and after that s1 is empty.
    
    //Verification
    cout << "Size of s1:" << s1.size() << endl; //0
    cout << "Size of s2:" << s2.size(); //3
    return 0;
}