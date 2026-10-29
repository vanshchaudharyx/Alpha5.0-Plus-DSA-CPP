#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    // In queue element pushed from back and removed from front.
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    // Function for queue.
    // push,emplace,front,pop,size,empty,swap.
    

    return 0;
}