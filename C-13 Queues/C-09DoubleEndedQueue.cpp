#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> deq;
    deq.push_front(2);
    deq.push_front(1);
    deq.push_back(3);
    deq.push_back(4);
    // looks like this 1,2,3,4
    deq.pop_front();
    cout << deq.front();
    return 0;
}