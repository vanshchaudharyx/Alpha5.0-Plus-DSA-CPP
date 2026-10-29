#include <iostream>
#include <queue> //For priority queue we dont need to add something different.
// PQ internally uses maxheap structure.
// We visualize the PQ as stack.
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while (!q.empty())
    {
        cout << q.top() << " "; // Prints the elements in sorted order.
        q.pop();
    }
    cout << endl;
    // We can also build a priority queue with reverse order.
    priority_queue<int, vector<int>, greater<int>> q; // This type of syantax is used to charge the sorting style.
    // This greater<int> is called a functor.
    //  Functor is nothing but a function object which we pass for performing some work.

    // Functions in PQ->
    // push,emplace,top,pop,size,empty.
    // Time complexity of push,emplace,pop is O(logn) because internally tree is build. 

    return 0;
}