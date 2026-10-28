#include <iostream>
#include <vector>

// For pairs we dont need to include anything.
// Pairs are the parts of the c++ utility library.
using namespace std;
int main()
{
    // If we want to group 2 thing with each other then we use pairs.
    pair<int, int> p = {1, 5};
    // pair<char, int> p1 = {'a',2};
    cout << p.first << endl;
    cout << p.second << endl;

    // Pair of pairs-->
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << endl;
    cout << p1.second.first << endl;

    // In same way we create.
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    for (pair<int, int> p : vec)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }

    // If we want to push value in this vector.
    vec.push_back({4, 5}); // In this method we need to make the pairs of values

    // Now emplace_back comes.
    vec.emplace_back(5, 6); // In emplace_back method we dont pass the values in the form of pair.
    // emplace_back creates in-place objects
    // Generally emplace back is faster and observed in programming.
    

    for (pair<int, int> p : vec)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }

    return 0;
}
