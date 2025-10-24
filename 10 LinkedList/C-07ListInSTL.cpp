#include <iostream>
#include <list>
#include <iterator>
// Iterators in C++ are objects that allow you to traverse through the element of a container (like array,vectors ,lists,etc)in a sequential manner.
using namespace std;
int main()
{
    list<int> ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3); // 1->2->3->NULL.
    list<int>::iterator itr;
    // We can also use as a function i.e printlist.
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
    cout << ll.size() << endl;
    // Front() & back() gives the value of value of first and last node.
    cout << ll.front() << endl;
    cout << ll.back() << endl;
    

    return 0;
}
