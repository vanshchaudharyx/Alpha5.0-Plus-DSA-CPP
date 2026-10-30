#include <iostream>
#include <set> //All values are unique in the set. And in sorted order.
using namespace std;
int main()
{

    set<int> s; // Set internally uses self-balancing tree
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    // s.insert(6);
    // If we try to print the size then duplicate values doesnt count.

    for (auto i : s)
    {
        cout << i << endl;
    }
    // Functions in set->
    // insert,emplace,count,erase,find,size,empty,erase.
    // Complexity of erase count insert-O(logn)

    // Two addtional functions for set
    // Lower-bound,Upper-bound.
    // If we s.lowerbound(4) then if 4 meets it return 4 otherwise it return just greater value than 4 present in set.
    // If 4 is not present and greater value is also not present then return an iterator s.end().
    cout << "Lower Bound:" << *(s.lower_bound(6));

    // multiset-Duplicate elements are allowed.

    // unordered_map-Not set the elements in sorted order TC-O(1)
    // unordered_set and  unordered_map are most optmized ds.
    // The concepts of lowerbound and upperbound is not applicable on unordered_set because they are in unsorted order.
    

    return 0;
}