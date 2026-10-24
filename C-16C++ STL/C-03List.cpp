// List internally implemented as a doubly linkedlist.
// In doubly LL we can push and pop from both front and back side.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l; // We can also initialize same as vector.
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    // Functions in list
    // size,erase,clear,begin,end,rbegin,,rend,insert,front,back.

    //Major differences bw vector and List
    // 1-Vector is implemented as a dyanamic array ,,, List will implemented as doubly linkedlist
    

    return 0;
}