#include <iostream>
#include <deque>
// Internally deque is implemented as dyanamic arrays.Thats why in deques random access is possible.
using namespace std;
int main()
{
    deque<int> d = {1, 2, 3};

    // Functions in deque-->
    //  push_back and push_front
    //  emplace_back and emplace_front
    //  pop_back and pop_front

    // size,erase,clear,begin,end,rbegin,rend,insert.front,back
    for (int val : d)
    {
        cout << val;
    }
    cout << d.front();
    return 0;
}