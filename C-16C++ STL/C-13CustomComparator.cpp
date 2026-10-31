#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// If we want to sort the pair based on second value then we use custom comparator.
// Comparators are nothing but boolean function based upon some comparisions.
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    // We want to sort in the basis of second value in ascending order.
    if (p1.second < p2.second)

        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first) // If second values are equal then sorting based on first values.
        return true;
    else
        return false;
}

int main()
{
    vector<pair<int, int>> vec = {
        {1, 50},
        {2, 10},
        {3, 40},
        {4, 20},
        {5, 30}};
    sort(vec.begin(), vec.end()); // This sorts the pair based on first value.
    for (auto p : vec)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }
    cout << "Sorting with comparator" << endl;
    sort(vec.begin(), vec.end(), comparator); // This sorts the pair based on second value.
    for (auto p : vec)
    {
        cout << "(" << p.first << "," << p.second << ")";
    }
    return 0;
}